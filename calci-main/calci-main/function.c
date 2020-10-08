#include<function.h>

int add(int x,int y){
    int z = x + y;
    return z;
}   

int sub(int a,int b){
    int c = a - b;
    return  c;
}   

int mul(int d,int e)
{
    int f = d * e;
    return f;
}

int Div(int g,int h){
    int i = g / h;
    return i;
}
int factorial_func(int factin)
{
    int factorial_value=1,factorial_iterator;
    if (factin < 0)
        printf("Error! Factorial of a negative number doesn't exist.");
    else {
        for (factorial_iterator = 1; factorial_iterator <= factin; ++factorial_iterator) {
            factorial_value *= factorial_iterator;
        }
    }
    return factorial_value;
}

int prime_func(int primein)
{
    int prime_iterator,flag=0;
    for (prime_iterator = 2; prime_iterator <= primein / 2; ++prime_iterator) {

        // condition for non-prime
        if (primein % prime_iterator == 0) {
            flag = 1;
            break;
        }
    }

    if (primin == 1) {
        printf("1 is neither prime nor composite.");
    }
    else {
        if (flag == 0)
            return 1;
        else
            return 0;
    }
