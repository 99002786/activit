#include<function.h>

int main()
{
	
int num1, num2, choice;

printf("[1] Add\v[2] Subtract\v[3] Multiply\v[4] Divide");
scanf("%d", &choice);

switch(choice){
    
    case 1:
        printf("Enter 1st number:\n");
        scanf("%d", &num1);
        printf("Enter 2nd number:\n");
        scanf("%d", &num2);
        printf("%d", add(num1,num2));
        break;
    case 2:
        printf("Enter 1st number:\n");
        scanf("%d", &num1);
        printf("Enter 2nd number:\n");
        scanf("%d", &num2);
        printf("%d ", sub(num1,num2));
        break;
    case 3:
        printf("Enter 1st number:\n");
        scanf("%d", &num1);
        printf("Enter 2nd number:\n");
        scanf("%d", &num2);
        printf("%d", mul(num1,num2));
        break;
    case 4:
        printf("Enter 1st number:\n");
        scanf("%d", &num1);
        printf("Enter 2nd number:\n");
        scanf("%d", &num2);
        printf("%d", Div(num1,num2));
        break;
    default:
        printf("That is not a valid choice.");
        break;
}

    
}

