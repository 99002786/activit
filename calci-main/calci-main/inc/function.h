<!DOCTYPE html>
<!-- saved from url=(0075)https://github.com/99002786/act2/edit/main/calci-main/calci-main/function.h -->
<html lang="en"><head><meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
    
  <link rel="dns-prefetch" href="https://github.githubassets.com/">
  <link rel="dns-prefetch" href="https://avatars0.githubusercontent.com/">
  <link rel="dns-prefetch" href="https://avatars1.githubusercontent.com/">
  <link rel="dns-prefetch" href="https://avatars2.githubusercontent.com/">
  <link rel="dns-prefetch" href="https://avatars3.githubusercontent.com/">
  <link rel="dns-prefetch" href="https://github-cloud.s3.amazonaws.com/">
  <link rel="dns-prefetch" href="https://user-images.githubusercontent.com/">



  <link crossorigin="anonymous" media="all" integrity="sha512-3D7WIWHAP3fU8nO5QGnFJs64RHcDQmaBGco7phfNhItOCNabRLP+qGl9lKhE0T0nCi7oj/DKL+mizn1njdSn6Q==" rel="stylesheet" href="./function_files/frameworks-dc3ed62161c03f77d4f273b94069c526.css">
  
    <link crossorigin="anonymous" media="all" integrity="sha512-HB2PYRerzGfogYz1agRQMUMQbSibNfQjJJbdUZBFapIuT+zRfvj2bZiy2VIBMElXtReoZg+5f3PE/lp1m6fXoA==" rel="stylesheet" href="./function_files/github-1c1d8f6117abcc67e8818cf56a045031.css">
    
    
    
    


  <meta name="viewport" content="width=device-width">
  
  <title>Editing act2/function.h at main · 99002786/act2</title>
    <meta name="description" content="Contribute to 99002786/act2 development by creating an account on GitHub.">
    <link rel="search" type="application/opensearchdescription+xml" href="https://github.com/opensearch.xml" title="GitHub">
  <link rel="fluid-icon" href="https://github.com/fluidicon.png" title="GitHub">
  <meta property="fb:app_id" content="1401488693436528">
  <meta name="apple-itunes-app" content="app-id=1477376905">

    <meta name="twitter:image:src" content="https://avatars0.githubusercontent.com/u/72496123?s=400&amp;v=4"><meta name="twitter:site" content="@github"><meta name="twitter:card" content="summary"><meta name="twitter:title" content="99002786/act2"><meta name="twitter:description" content="Contribute to 99002786/act2 development by creating an account on GitHub.">
    <meta property="og:image" content="https://avatars0.githubusercontent.com/u/72496123?s=400&amp;v=4"><meta property="og:site_name" content="GitHub"><meta property="og:type" content="object"><meta property="og:title" content="99002786/act2"><meta property="og:url" content="https://github.com/99002786/act2"><meta property="og:description" content="Contribute to 99002786/act2 development by creating an account on GitHub.">



  

  <link rel="assets" href="https://github.githubassets.com/">
    <link rel="shared-web-socket" href="wss://alive.github.com/_sockets/u/72496123/ws?session=eyJ2IjoiVjMiLCJ1Ijo3MjQ5NjEyMywicyI6NTkyMTM2MzUwLCJjIjoyNDI2MDgyNjk1LCJ0IjoxNjAyMTQyNjg2fQ==--2f6c1ba279110503392712718c294b046afe63c5aba2b9ef0b654f54ea2e497a" data-refresh-url="/_alive">
  <link rel="sudo-modal" href="https://github.com/sessions/sudo_modal">

  <meta name="request-id" content="6803:7604:229F24:2F4561:5F7EC1CB" data-pjax-transient="true"><meta name="html-safe-nonce" content="15adfe49242f8a125917d0b3861f4bb56f86d957" data-pjax-transient="true"><meta name="visitor-payload" content="eyJyZWZlcnJlciI6Imh0dHBzOi8vZ2l0aHViLmNvbS85OTAwMjc4Ni9hY3QyL2Jsb2IvbWFpbi9jYWxjaS1tYWluL2NhbGNpLW1haW4vZnVuY3Rpb24uaCIsInJlcXVlc3RfaWQiOiI2ODAzOjc2MDQ6MjI5RjI0OjJGNDU2MTo1RjdFQzFDQiIsInZpc2l0b3JfaWQiOiI0MzA3MDUzMzg3MTEyNjA5MDA0IiwicmVnaW9uX2VkZ2UiOiJhcC1zb3V0aC0xIiwicmVnaW9uX3JlbmRlciI6ImlhZCJ9" data-pjax-transient="true"><meta name="visitor-hmac" content="88d38aa057c2a7f7651052d8977be0d867c7deeedbc546ec95dec5d1724acad6" data-pjax-transient="true"><meta name="cookie-consent-required" content="false">

    <meta name="hovercard-subject-tag" content="repository:302012503" data-pjax-transient="">


  <meta name="github-keyboard-shortcuts" content="repository,code-editor" data-pjax-transient="true">

  

  <meta name="selected-link" value="repo_source" data-pjax-transient="">

    <meta name="google-site-verification" content="c1kuD-K2HIVF635lypcsWPoD4kilo5-jA_wBFyT4uMY">
  <meta name="google-site-verification" content="KT5gs8h0wvaagLKAVWq8bbeNwnZZK1r1XQysX3xurLU">
  <meta name="google-site-verification" content="ZzhVyEFwb7w3e0-uOTltm8Jsck2F5StVihD0exw2fsA">
  <meta name="google-site-verification" content="GXs5KoUUkNCoaAZn7wPN-t01Pywp9M3sEjnt_3_ZWPc">

  <meta name="octolytics-host" content="collector.githubapp.com"><meta name="octolytics-app-id" content="github"><meta name="octolytics-event-url" content="https://collector.githubapp.com/github-external/browser_event"><meta name="octolytics-dimension-ga_id" content="149298773.1602057455" class="js-octo-ga-id"><meta name="octolytics-actor-id" content="72496123"><meta name="octolytics-actor-login" content="99002786"><meta name="octolytics-actor-hash" content="29e6ce2d93ea9534432dc9b189ac0947c38056383157b9dc5be7b27d7f21169f">

  <meta name="analytics-location" content="/&lt;user-name&gt;/&lt;repo-name&gt;/blob/edit" data-pjax-transient="true">

  





    <meta name="google-analytics" content="UA-3769691-2">

  <meta class="js-ga-set" name="userId" content="38e6a743c2f749ae885f6b541633cc53">

<meta class="js-ga-set" name="dimension10" content="Responsive" data-pjax-transient="">

<meta class="js-ga-set" name="dimension1" content="Logged In">



  

      <meta name="hostname" content="github.com">
    <meta name="user-login" content="99002786">


      <meta name="expected-hostname" content="github.com">

      <meta name="js-proxy-site-detection-payload" content="MjQ4OTllZGZlYjNhZjE5MWVhMzNmYWZlZGI1ZmI3N2FhZjMxMTRiZDFjZjlmZTgxY2ZhZTU2NjUzNjI3YWMyOHx7InJlbW90ZV9hZGRyZXNzIjoiMTgyLjc1LjIwNC4xNzAiLCJyZXF1ZXN0X2lkIjoiNjgwMzo3NjA0OjIyOUYyNDoyRjQ1NjE6NUY3RUMxQ0IiLCJ0aW1lc3RhbXAiOjE2MDIxNDI2ODYsImhvc3QiOiJnaXRodWIuY29tIn0=">

    <meta name="enabled-features" content="MARKETPLACE_PENDING_INSTALLATIONS,JS_HTTP_CACHE_HEADERS">

  <meta http-equiv="x-pjax-version" content="55eaab089b694c216654353e67cd293b7760ee1cdbf043221abd783f3c105e10">
  

        <link href="https://github.com/99002786/act2/commits/main.atom" rel="alternate" title="Recent Commits to act2:main" type="application/atom+xml">

  <meta name="go-import" content="github.com/99002786/act2 git https://github.com/99002786/act2.git">

  <meta name="octolytics-dimension-user_id" content="72496123"><meta name="octolytics-dimension-user_login" content="99002786"><meta name="octolytics-dimension-repository_id" content="302012503"><meta name="octolytics-dimension-repository_nwo" content="99002786/act2"><meta name="octolytics-dimension-repository_public" content="true"><meta name="octolytics-dimension-repository_is_fork" content="false"><meta name="octolytics-dimension-repository_network_root_id" content="302012503"><meta name="octolytics-dimension-repository_network_root_nwo" content="99002786/act2"><meta name="octolytics-dimension-repository_explore_github_marketplace_ci_cta_shown" content="false">




  <meta name="browser-stats-url" content="https://api.github.com/_private/browser/stats">

  <meta name="browser-errors-url" content="https://api.github.com/_private/browser/errors">

  <link rel="mask-icon" href="https://github.githubassets.com/pinned-octocat.svg" color="#000000">
  <link rel="alternate icon" class="js-site-favicon" type="image/png" href="https://github.githubassets.com/favicons/favicon.png">
  <link rel="icon" class="js-site-favicon" type="image/svg+xml" href="https://github.githubassets.com/favicons/favicon.svg">

<meta name="theme-color" content="#1e2327">


  <link rel="manifest" href="https://github.com/manifest.json" crossorigin="use-credentials">

  </head>

  <body class="logged-in env-production page-responsive page-edit-blob">
    

    <div class="position-relative js-header-wrapper ">
      <a href="https://github.com/99002786/act2/edit/main/calci-main/calci-main/function.h#start-of-content" class="p-3 bg-blue text-white show-on-focus js-skip-to-content">Skip to content</a>
      <span class="progress-pjax-loader width-full js-pjax-loader-bar Progress position-fixed">
    <span style="background-color: #79b8ff;width: 0%;" class="Progress-item progress-pjax-loader-bar "></span>
</span>      
      


          <header class="Header js-details-container Details px-3 px-md-4 px-lg-5 flex-wrap flex-md-nowrap" role="banner">
    <div class="Header-item mt-n1 mb-n1  d-none d-md-flex">
      <a class="Header-link " href="https://github.com/" data-hotkey="g d" aria-label="Homepage " data-ga-click="Header, go to dashboard, icon:logo">
  <svg class="octicon octicon-mark-github v-align-middle" height="32" viewBox="0 0 16 16" version="1.1" width="32" aria-hidden="true"><path fill-rule="evenodd" d="M8 0C3.58 0 0 3.58 0 8c0 3.54 2.29 6.53 5.47 7.59.4.07.55-.17.55-.38 0-.19-.01-.82-.01-1.49-2.01.37-2.53-.49-2.69-.94-.09-.23-.48-.94-.82-1.13-.28-.15-.68-.52-.01-.53.63-.01 1.08.58 1.23.82.72 1.21 1.87.87 2.33.66.07-.52.28-.87.51-1.07-1.78-.2-3.64-.89-3.64-3.95 0-.87.31-1.59.82-2.15-.08-.2-.36-1.02.08-2.12 0 0 .67-.21 2.2.82.64-.18 1.32-.27 2-.27.68 0 1.36.09 2 .27 1.53-1.04 2.2-.82 2.2-.82.44 1.1.16 1.92.08 2.12.51.56.82 1.27.82 2.15 0 3.07-1.87 3.75-3.65 3.95.29.25.54.73.54 1.48 0 1.07-.01 1.93-.01 2.2 0 .21.15.46.55.38A8.013 8.013 0 0016 8c0-4.42-3.58-8-8-8z"></path></svg>
</a>

    </div>

    <div class="Header-item d-md-none">
      <button class="Header-link btn-link js-details-target" type="button" aria-label="Toggle navigation" aria-expanded="false">
        <svg height="24" class="octicon octicon-three-bars" viewBox="0 0 16 16" version="1.1" width="24" aria-hidden="true"><path fill-rule="evenodd" d="M1 2.75A.75.75 0 011.75 2h12.5a.75.75 0 110 1.5H1.75A.75.75 0 011 2.75zm0 5A.75.75 0 011.75 7h12.5a.75.75 0 110 1.5H1.75A.75.75 0 011 7.75zM1.75 12a.75.75 0 100 1.5h12.5a.75.75 0 100-1.5H1.75z"></path></svg>
      </button>
    </div>

    <div class="Header-item Header-item--full flex-column flex-md-row width-full flex-order-2 flex-md-order-none mr-0 mr-md-3 mt-3 mt-md-0 Details-content--hidden-not-important d-md-flex">
          <div class="header-search header-search-current js-header-search-current flex-auto js-site-search position-relative flex-self-stretch flex-md-self-auto mb-3 mb-md-0 mr-0 mr-md-3 scoped-search site-scoped-search js-jump-to js-header-search-current-jump-to" role="combobox" aria-owns="jump-to-results" aria-label="Search or jump to" aria-haspopup="listbox" aria-expanded="false">
  <div class="position-relative">
    <!-- '"` --><!-- </textarea></xmp> --><form class="js-site-search-form" role="search" aria-label="Site" data-scope-type="Repository" data-scope-id="302012503" data-scoped-search-url="/99002786/act2/search" data-unscoped-search-url="/search" action="https://github.com/99002786/act2/search" accept-charset="UTF-8" method="get">
      <label class="form-control input-sm header-search-wrapper p-0 js-chromeless-input-container header-search-wrapper-jump-to position-relative d-flex flex-justify-between flex-items-center">
        <input type="text" class="form-control input-sm header-search-input jump-to-field js-jump-to-field js-site-search-focus js-site-search-field is-clearable" data-hotkey="s,/" name="q" value="" placeholder="Search or jump to…" data-unscoped-placeholder="Search or jump to…" data-scoped-placeholder="Search or jump to…" autocapitalize="off" aria-autocomplete="list" aria-controls="jump-to-results" aria-label="Search or jump to…" data-jump-to-suggestions-path="/_graphql/GetSuggestedNavigationDestinations" spellcheck="false" autocomplete="off">
          <input type="hidden" value="1RsSUt/HvLJPzIp6OqAhiGYSxKlLefU1+W+AX0cQ9iyJNZliRVWamAkGsjS3o/72iq+sJE5MaVG3DksYqhaGGg==" data-csrf="true" class="js-data-jump-to-suggestions-path-csrf">
          <input type="hidden" class="js-site-search-type-field" name="type">
            <img src="./function_files/search-key-slash.svg" alt="" class="mr-2 header-search-key-slash">

            <div class="Box position-absolute overflow-hidden d-none jump-to-suggestions js-jump-to-suggestions-container">
              
<ul class="d-none js-jump-to-suggestions-template-container">
  

<li class="d-flex flex-justify-start flex-items-center p-0 f5 navigation-item js-navigation-item js-jump-to-suggestion" role="option">
  <a tabindex="-1" class="no-underline d-flex flex-auto flex-items-center jump-to-suggestions-path js-jump-to-suggestion-path js-navigation-open p-2" href="https://github.com/99002786/act2/edit/main/calci-main/calci-main/function.h">
    <div class="jump-to-octicon js-jump-to-octicon flex-shrink-0 mr-2 text-center d-none">
      <svg height="16" width="16" class="octicon octicon-repo flex-shrink-0 js-jump-to-octicon-repo d-none" title="Repository" aria-label="Repository" viewBox="0 0 16 16" version="1.1" role="img"><path fill-rule="evenodd" d="M2 2.5A2.5 2.5 0 014.5 0h8.75a.75.75 0 01.75.75v12.5a.75.75 0 01-.75.75h-2.5a.75.75 0 110-1.5h1.75v-2h-8a1 1 0 00-.714 1.7.75.75 0 01-1.072 1.05A2.495 2.495 0 012 11.5v-9zm10.5-1V9h-8c-.356 0-.694.074-1 .208V2.5a1 1 0 011-1h8zM5 12.25v3.25a.25.25 0 00.4.2l1.45-1.087a.25.25 0 01.3 0L8.6 15.7a.25.25 0 00.4-.2v-3.25a.25.25 0 00-.25-.25h-3.5a.25.25 0 00-.25.25z"></path></svg>
      <svg height="16" width="16" class="octicon octicon-project flex-shrink-0 js-jump-to-octicon-project d-none" title="Project" aria-label="Project" viewBox="0 0 16 16" version="1.1" role="img"><path fill-rule="evenodd" d="M1.75 0A1.75 1.75 0 000 1.75v12.5C0 15.216.784 16 1.75 16h12.5A1.75 1.75 0 0016 14.25V1.75A1.75 1.75 0 0014.25 0H1.75zM1.5 1.75a.25.25 0 01.25-.25h12.5a.25.25 0 01.25.25v12.5a.25.25 0 01-.25.25H1.75a.25.25 0 01-.25-.25V1.75zM11.75 3a.75.75 0 00-.75.75v7.5a.75.75 0 001.5 0v-7.5a.75.75 0 00-.75-.75zm-8.25.75a.75.75 0 011.5 0v5.5a.75.75 0 01-1.5 0v-5.5zM8 3a.75.75 0 00-.75.75v3.5a.75.75 0 001.5 0v-3.5A.75.75 0 008 3z"></path></svg>
      <svg height="16" width="16" class="octicon octicon-search flex-shrink-0 js-jump-to-octicon-search d-none" title="Search" aria-label="Search" viewBox="0 0 16 16" version="1.1" role="img"><path fill-rule="evenodd" d="M11.5 7a4.499 4.499 0 11-8.998 0A4.499 4.499 0 0111.5 7zm-.82 4.74a6 6 0 111.06-1.06l3.04 3.04a.75.75 0 11-1.06 1.06l-3.04-3.04z"></path></svg>
    </div>

    <img class="avatar mr-2 flex-shrink-0 js-jump-to-suggestion-avatar d-none" alt="" aria-label="Team" src="https://github.com/99002786/act2/edit/main/calci-main/calci-main/function.h" width="28" height="28">

    <div class="jump-to-suggestion-name js-jump-to-suggestion-name flex-auto overflow-hidden text-left no-wrap css-truncate css-truncate-target">
    </div>

    <div class="border rounded-1 flex-shrink-0 bg-gray px-1 text-gray-light ml-1 f6 d-none js-jump-to-badge-search">
      <span class="js-jump-to-badge-search-text-default d-none" aria-label="in this repository">
        In this repository
      </span>
      <span class="js-jump-to-badge-search-text-global d-none" aria-label="in all of GitHub">
        All GitHub
      </span>
      <span aria-hidden="true" class="d-inline-block ml-1 v-align-middle">↵</span>
    </div>

    <div aria-hidden="true" class="border rounded-1 flex-shrink-0 bg-gray px-1 text-gray-light ml-1 f6 d-none d-on-nav-focus js-jump-to-badge-jump">
      Jump to
      <span class="d-inline-block ml-1 v-align-middle">↵</span>
    </div>
  </a>
</li>

</ul>

<ul class="d-none js-jump-to-no-results-template-container">
  <li class="d-flex flex-justify-center flex-items-center f5 d-none js-jump-to-suggestion p-2">
    <span class="text-gray">No suggested jump to results</span>
  </li>
</ul>

<ul id="jump-to-results" role="listbox" class="p-0 m-0 js-navigation-container jump-to-suggestions-results-container js-jump-to-suggestions-results-container">
  

<li class="d-flex flex-justify-start flex-items-center p-0 f5 navigation-item js-navigation-item js-jump-to-scoped-search d-none" role="option">
  <a tabindex="-1" class="no-underline d-flex flex-auto flex-items-center jump-to-suggestions-path js-jump-to-suggestion-path js-navigation-open p-2" href="https://github.com/99002786/act2/edit/main/calci-main/calci-main/function.h">
    <div class="jump-to-octicon js-jump-to-octicon flex-shrink-0 mr-2 text-center d-none">
      <svg height="16" width="16" class="octicon octicon-repo flex-shrink-0 js-jump-to-octicon-repo d-none" title="Repository" aria-label="Repository" viewBox="0 0 16 16" version="1.1" role="img"><path fill-rule="evenodd" d="M2 2.5A2.5 2.5 0 014.5 0h8.75a.75.75 0 01.75.75v12.5a.75.75 0 01-.75.75h-2.5a.75.75 0 110-1.5h1.75v-2h-8a1 1 0 00-.714 1.7.75.75 0 01-1.072 1.05A2.495 2.495 0 012 11.5v-9zm10.5-1V9h-8c-.356 0-.694.074-1 .208V2.5a1 1 0 011-1h8zM5 12.25v3.25a.25.25 0 00.4.2l1.45-1.087a.25.25 0 01.3 0L8.6 15.7a.25.25 0 00.4-.2v-3.25a.25.25 0 00-.25-.25h-3.5a.25.25 0 00-.25.25z"></path></svg>
      <svg height="16" width="16" class="octicon octicon-project flex-shrink-0 js-jump-to-octicon-project d-none" title="Project" aria-label="Project" viewBox="0 0 16 16" version="1.1" role="img"><path fill-rule="evenodd" d="M1.75 0A1.75 1.75 0 000 1.75v12.5C0 15.216.784 16 1.75 16h12.5A1.75 1.75 0 0016 14.25V1.75A1.75 1.75 0 0014.25 0H1.75zM1.5 1.75a.25.25 0 01.25-.25h12.5a.25.25 0 01.25.25v12.5a.25.25 0 01-.25.25H1.75a.25.25 0 01-.25-.25V1.75zM11.75 3a.75.75 0 00-.75.75v7.5a.75.75 0 001.5 0v-7.5a.75.75 0 00-.75-.75zm-8.25.75a.75.75 0 011.5 0v5.5a.75.75 0 01-1.5 0v-5.5zM8 3a.75.75 0 00-.75.75v3.5a.75.75 0 001.5 0v-3.5A.75.75 0 008 3z"></path></svg>
      <svg height="16" width="16" class="octicon octicon-search flex-shrink-0 js-jump-to-octicon-search d-none" title="Search" aria-label="Search" viewBox="0 0 16 16" version="1.1" role="img"><path fill-rule="evenodd" d="M11.5 7a4.499 4.499 0 11-8.998 0A4.499 4.499 0 0111.5 7zm-.82 4.74a6 6 0 111.06-1.06l3.04 3.04a.75.75 0 11-1.06 1.06l-3.04-3.04z"></path></svg>
    </div>

    <img class="avatar mr-2 flex-shrink-0 js-jump-to-suggestion-avatar d-none" alt="" aria-label="Team" src="https://github.com/99002786/act2/edit/main/calci-main/calci-main/function.h" width="28" height="28">

    <div class="jump-to-suggestion-name js-jump-to-suggestion-name flex-auto overflow-hidden text-left no-wrap css-truncate css-truncate-target">
    </div>

    <div class="border rounded-1 flex-shrink-0 bg-gray px-1 text-gray-light ml-1 f6 d-none js-jump-to-badge-search">
      <span class="js-jump-to-badge-search-text-default d-none" aria-label="in this repository">
        In this repository
      </span>
      <span class="js-jump-to-badge-search-text-global d-none" aria-label="in all of GitHub">
        All GitHub
      </span>
      <span aria-hidden="true" class="d-inline-block ml-1 v-align-middle">↵</span>
    </div>

    <div aria-hidden="true" class="border rounded-1 flex-shrink-0 bg-gray px-1 text-gray-light ml-1 f6 d-none d-on-nav-focus js-jump-to-badge-jump">
      Jump to
      <span class="d-inline-block ml-1 v-align-middle">↵</span>
    </div>
  </a>
</li>

  

<li class="d-flex flex-justify-start flex-items-center p-0 f5 navigation-item js-navigation-item js-jump-to-global-search d-none" role="option">
  <a tabindex="-1" class="no-underline d-flex flex-auto flex-items-center jump-to-suggestions-path js-jump-to-suggestion-path js-navigation-open p-2" href="https://github.com/99002786/act2/edit/main/calci-main/calci-main/function.h">
    <div class="jump-to-octicon js-jump-to-octicon flex-shrink-0 mr-2 text-center d-none">
      <svg height="16" width="16" class="octicon octicon-repo flex-shrink-0 js-jump-to-octicon-repo d-none" title="Repository" aria-label="Repository" viewBox="0 0 16 16" version="1.1" role="img"><path fill-rule="evenodd" d="M2 2.5A2.5 2.5 0 014.5 0h8.75a.75.75 0 01.75.75v12.5a.75.75 0 01-.75.75h-2.5a.75.75 0 110-1.5h1.75v-2h-8a1 1 0 00-.714 1.7.75.75 0 01-1.072 1.05A2.495 2.495 0 012 11.5v-9zm10.5-1V9h-8c-.356 0-.694.074-1 .208V2.5a1 1 0 011-1h8zM5 12.25v3.25a.25.25 0 00.4.2l1.45-1.087a.25.25 0 01.3 0L8.6 15.7a.25.25 0 00.4-.2v-3.25a.25.25 0 00-.25-.25h-3.5a.25.25 0 00-.25.25z"></path></svg>
      <svg height="16" width="16" class="octicon octicon-project flex-shrink-0 js-jump-to-octicon-project d-none" title="Project" aria-label="Project" viewBox="0 0 16 16" version="1.1" role="img"><path fill-rule="evenodd" d="M1.75 0A1.75 1.75 0 000 1.75v12.5C0 15.216.784 16 1.75 16h12.5A1.75 1.75 0 0016 14.25V1.75A1.75 1.75 0 0014.25 0H1.75zM1.5 1.75a.25.25 0 01.25-.25h12.5a.25.25 0 01.25.25v12.5a.25.25 0 01-.25.25H1.75a.25.25 0 01-.25-.25V1.75zM11.75 3a.75.75 0 00-.75.75v7.5a.75.75 0 001.5 0v-7.5a.75.75 0 00-.75-.75zm-8.25.75a.75.75 0 011.5 0v5.5a.75.75 0 01-1.5 0v-5.5zM8 3a.75.75 0 00-.75.75v3.5a.75.75 0 001.5 0v-3.5A.75.75 0 008 3z"></path></svg>
      <svg height="16" width="16" class="octicon octicon-search flex-shrink-0 js-jump-to-octicon-search d-none" title="Search" aria-label="Search" viewBox="0 0 16 16" version="1.1" role="img"><path fill-rule="evenodd" d="M11.5 7a4.499 4.499 0 11-8.998 0A4.499 4.499 0 0111.5 7zm-.82 4.74a6 6 0 111.06-1.06l3.04 3.04a.75.75 0 11-1.06 1.06l-3.04-3.04z"></path></svg>
    </div>

    <img class="avatar mr-2 flex-shrink-0 js-jump-to-suggestion-avatar d-none" alt="" aria-label="Team" src="https://github.com/99002786/act2/edit/main/calci-main/calci-main/function.h" width="28" height="28">

    <div class="jump-to-suggestion-name js-jump-to-suggestion-name flex-auto overflow-hidden text-left no-wrap css-truncate css-truncate-target">
    </div>

    <div class="border rounded-1 flex-shrink-0 bg-gray px-1 text-gray-light ml-1 f6 d-none js-jump-to-badge-search">
      <span class="js-jump-to-badge-search-text-default d-none" aria-label="in this repository">
        In this repository
      </span>
      <span class="js-jump-to-badge-search-text-global d-none" aria-label="in all of GitHub">
        All GitHub
      </span>
      <span aria-hidden="true" class="d-inline-block ml-1 v-align-middle">↵</span>
    </div>

    <div aria-hidden="true" class="border rounded-1 flex-shrink-0 bg-gray px-1 text-gray-light ml-1 f6 d-none d-on-nav-focus js-jump-to-badge-jump">
      Jump to
      <span class="d-inline-block ml-1 v-align-middle">↵</span>
    </div>
  </a>
</li>


    <li class="d-flex flex-justify-center flex-items-center p-0 f5 js-jump-to-suggestion">
      <img src="./function_files/octocat-spinner-128.gif" alt="Octocat Spinner Icon" class="m-2" width="28">
    </li>
</ul>

            </div>
      </label>
</form>  </div>
</div>


      <nav class="d-flex flex-column flex-md-row flex-self-stretch flex-md-self-auto" aria-label="Global">
      <a class="Header-link py-md-3 d-block d-md-none py-2 border-top border-md-top-0 border-white-fade-15" data-ga-click="Header, click, Nav menu - item:dashboard:user" aria-label="Dashboard" href="https://github.com/dashboard">
        Dashboard
</a>
    <a class="js-selected-navigation-item Header-link mt-md-n3 mb-md-n3 py-2 py-md-3 mr-0 mr-md-3 border-top border-md-top-0 border-white-fade-15" data-hotkey="g p" data-ga-click="Header, click, Nav menu - item:pulls context:user" aria-label="Pull requests you created" data-selected-links="/pulls /pulls/assigned /pulls/mentioned /pulls" href="https://github.com/pulls">
        Pull<span class="d-inline d-md-none d-lg-inline"> request</span>s
</a>
    <a class="js-selected-navigation-item Header-link mt-md-n3 mb-md-n3 py-2 py-md-3 mr-0 mr-md-3 border-top border-md-top-0 border-white-fade-15" data-hotkey="g i" data-ga-click="Header, click, Nav menu - item:issues context:user" aria-label="Issues you created" data-selected-links="/issues /issues/assigned /issues/mentioned /issues" href="https://github.com/issues">
      Issues
</a>

      <div class="d-flex position-relative">
        <a class="js-selected-navigation-item Header-link flex-auto mt-md-n3 mb-md-n3 py-2 py-md-3 mr-0 mr-md-3 border-top border-md-top-0 border-white-fade-15" data-ga-click="Header, click, Nav menu - item:marketplace context:user" data-octo-click="marketplace_click" data-octo-dimensions="location:nav_bar" data-selected-links=" /marketplace" href="https://github.com/marketplace">
          Marketplace
</a>        

      </div>

    <a class="js-selected-navigation-item Header-link mt-md-n3 mb-md-n3 py-2 py-md-3 mr-0 mr-md-3 border-top border-md-top-0 border-white-fade-15" data-ga-click="Header, click, Nav menu - item:explore" data-selected-links="/explore /trending /trending/developers /integrations /integrations/feature/code /integrations/feature/collaborate /integrations/feature/ship showcases showcases_search showcases_landing /explore" href="https://github.com/explore">
      Explore
</a>


    <a class="Header-link d-block d-md-none mr-0 mr-md-3 py-2 py-md-3 border-top border-md-top-0 border-white-fade-15" href="https://github.com/99002786">
      <img class="avatar avatar-user" src="./function_files/72496123" width="20" height="20" alt="@99002786">
      99002786
</a>
    <!-- '"` --><!-- </textarea></xmp> --><form action="https://github.com/logout" accept-charset="UTF-8" method="post"><input type="hidden" name="authenticity_token" value="SXheeIC63AinkR8UzPnRrGT2JY0UqzIovFjac4htzvJzjax1vayg/gSrFFFbhI5sHHD6r5XwCEuw87hHhZI4OQ==">
      <button type="submit" class="Header-link mr-0 mr-md-3 py-2 py-md-3 border-top border-md-top-0 border-white-fade-15 d-md-none btn-link d-block width-full text-left" data-ga-click="Header, sign out, icon:logout" style="padding-left: 2px;">
        <svg class="octicon octicon-sign-out v-align-middle" viewBox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M2 2.75C2 1.784 2.784 1 3.75 1h2.5a.75.75 0 010 1.5h-2.5a.25.25 0 00-.25.25v10.5c0 .138.112.25.25.25h2.5a.75.75 0 010 1.5h-2.5A1.75 1.75 0 012 13.25V2.75zm10.44 4.5H6.75a.75.75 0 000 1.5h5.69l-1.97 1.97a.75.75 0 101.06 1.06l3.25-3.25a.75.75 0 000-1.06l-3.25-3.25a.75.75 0 10-1.06 1.06l1.97 1.97z"></path></svg>
        Sign out
      </button>
</form></nav>

    </div>

    <div class="Header-item Header-item--full flex-justify-center d-md-none position-relative">
      <a class="Header-link " href="https://github.com/" data-hotkey="g d" aria-label="Homepage " data-ga-click="Header, go to dashboard, icon:logo">
  <svg class="octicon octicon-mark-github v-align-middle" height="32" viewBox="0 0 16 16" version="1.1" width="32" aria-hidden="true"><path fill-rule="evenodd" d="M8 0C3.58 0 0 3.58 0 8c0 3.54 2.29 6.53 5.47 7.59.4.07.55-.17.55-.38 0-.19-.01-.82-.01-1.49-2.01.37-2.53-.49-2.69-.94-.09-.23-.48-.94-.82-1.13-.28-.15-.68-.52-.01-.53.63-.01 1.08.58 1.23.82.72 1.21 1.87.87 2.33.66.07-.52.28-.87.51-1.07-1.78-.2-3.64-.89-3.64-3.95 0-.87.31-1.59.82-2.15-.08-.2-.36-1.02.08-2.12 0 0 .67-.21 2.2.82.64-.18 1.32-.27 2-.27.68 0 1.36.09 2 .27 1.53-1.04 2.2-.82 2.2-.82.44 1.1.16 1.92.08 2.12.51.56.82 1.27.82 2.15 0 3.07-1.87 3.75-3.65 3.95.29.25.54.73.54 1.48 0 1.07-.01 1.93-.01 2.2 0 .21.15.46.55.38A8.013 8.013 0 0016 8c0-4.42-3.58-8-8-8z"></path></svg>
</a>

    </div>

    <div class="Header-item mr-0 mr-md-3 flex-order-1 flex-md-order-none">
      

    <notification-indicator class="js-socket-channel" data-channel="eyJjIjoibm90aWZpY2F0aW9uLWNoYW5nZWQ6NzI0OTYxMjMiLCJ0IjoxNjAyMTQyNjg2fQ==--29c36de49e92560d65ca47f3065dc1cae3eb97de4a46e222ea7133ddf0a1d9df" data-catalyst="">
      <a href="https://github.com/notifications" class="Header-link notification-indicator position-relative tooltipped tooltipped-sw" aria-label="You have no unread notifications" data-hotkey="g n" data-ga-click="Header, go to notifications, icon:read" data-target="notification-indicator.link">
         <span class="mail-status  " data-target="notification-indicator.modifier"></span>
         <svg class="octicon octicon-bell" viewBox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path d="M8 16a2 2 0 001.985-1.75c.017-.137-.097-.25-.235-.25h-3.5c-.138 0-.252.113-.235.25A2 2 0 008 16z"></path><path fill-rule="evenodd" d="M8 1.5A3.5 3.5 0 004.5 5v2.947c0 .346-.102.683-.294.97l-1.703 2.556a.018.018 0 00-.003.01l.001.006c0 .002.002.004.004.006a.017.017 0 00.006.004l.007.001h10.964l.007-.001a.016.016 0 00.006-.004.016.016 0 00.004-.006l.001-.007a.017.017 0 00-.003-.01l-1.703-2.554a1.75 1.75 0 01-.294-.97V5A3.5 3.5 0 008 1.5zM3 5a5 5 0 0110 0v2.947c0 .05.015.098.042.139l1.703 2.555A1.518 1.518 0 0113.482 13H2.518a1.518 1.518 0 01-1.263-2.36l1.703-2.554A.25.25 0 003 7.947V5z"></path></svg>
      </a>
    </notification-indicator>

    </div>


    <div class="Header-item position-relative d-none d-md-flex">
      <details class="details-overlay details-reset">
  <summary class="Header-link" aria-label="Create new…" data-ga-click="Header, create new, icon:add" aria-haspopup="menu" role="button">
      <svg class="octicon octicon-plus" viewBox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M8 2a.75.75 0 01.75.75v4.5h4.5a.75.75 0 010 1.5h-4.5v4.5a.75.75 0 01-1.5 0v-4.5h-4.5a.75.75 0 010-1.5h4.5v-4.5A.75.75 0 018 2z"></path></svg> <span class="dropdown-caret"></span>
  </summary>
  <details-menu class="dropdown-menu dropdown-menu-sw" role="menu">
    
<a role="menuitem" class="dropdown-item" href="https://github.com/new" data-ga-click="Header, create new repository">
  New repository
</a>

  <a role="menuitem" class="dropdown-item" href="https://github.com/new/import" data-ga-click="Header, import a repository">
    Import repository
  </a>

<a role="menuitem" class="dropdown-item" href="https://gist.github.com/" data-ga-click="Header, create new gist">
  New gist
</a>

  <a role="menuitem" class="dropdown-item" href="https://github.com/organizations/new" data-ga-click="Header, create new organization">
    New organization
  </a>


  <div role="none" class="dropdown-divider"></div>
  <div class="dropdown-header">
    <span title="99002786/act2">This repository</span>
  </div>
    <a role="menuitem" class="dropdown-item" href="https://github.com/99002786/act2/issues/new/choose" data-ga-click="Header, create new issue" data-skip-pjax="">
      New issue
    </a>


  </details-menu>
</details>

    </div>

    <div class="Header-item position-relative mr-0 d-none d-md-flex">
      
  <details class="details-overlay details-reset js-feature-preview-indicator-container" data-feature-preview-indicator-src="/users/99002786/feature_preview/indicator_check">

  <summary class="Header-link" aria-label="View profile and more" data-ga-click="Header, show menu, icon:avatar" aria-haspopup="menu" role="button">
    <img alt="@99002786" width="20" height="20" src="./function_files/72496123(1)" class="avatar avatar-user ">

      <span class="feature-preview-indicator js-feature-preview-indicator" style="top: 10px;" hidden=""></span>
    <span class="dropdown-caret"></span>
  </summary>
  <details-menu class="dropdown-menu dropdown-menu-sw" style="width: 180px" role="menu">
    <div class="header-nav-current-user css-truncate"><a role="menuitem" class="no-underline user-profile-link px-3 pt-2 pb-2 mb-n2 mt-n1 d-block" href="https://github.com/99002786" data-ga-click="Header, go to profile, text:Signed in as">Signed in as <strong class="css-truncate-target">99002786</strong></a></div>
    <div role="none" class="dropdown-divider"></div>

      <div class="pl-3 pr-3 f6 user-status-container js-user-status-context lh-condensed" data-url="/users/status?compact=1&amp;link_mentions=0&amp;truncate=1">
        
<div class="js-user-status-container rounded-1 px-2 py-1 mt-2 border" data-team-hovercards-enabled="">
  <details class="js-user-status-details details-reset details-overlay details-overlay-dark">
    <summary class="btn-link btn-block link-gray no-underline js-toggle-user-status-edit toggle-user-status-edit " role="menuitem" data-hydro-click="{&quot;event_type&quot;:&quot;user_profile.click&quot;,&quot;payload&quot;:{&quot;profile_user_id&quot;:72496123,&quot;target&quot;:&quot;EDIT_USER_STATUS&quot;,&quot;user_id&quot;:72496123,&quot;originating_url&quot;:&quot;https://github.com/99002786/act2/edit/main/calci-main/calci-main/function.h&quot;}}" data-hydro-click-hmac="b2f64f0bd5665df3c09f193704cadae7d526313d69e872e2c4a150b1a68775c9">
      <div class="d-flex flex-items-center flex-items-stretch">
        <div class="f6 lh-condensed user-status-header d-flex user-status-emoji-only-header circle">
          <div class="user-status-emoji-container flex-shrink-0 mr-2 d-flex flex-items-center flex-justify-center lh-condensed-ultra v-align-bottom">
            <svg class="octicon octicon-smiley" viewBox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M1.5 8a6.5 6.5 0 1113 0 6.5 6.5 0 01-13 0zM8 0a8 8 0 100 16A8 8 0 008 0zM5 8a1 1 0 100-2 1 1 0 000 2zm7-1a1 1 0 11-2 0 1 1 0 012 0zM5.32 9.636a.75.75 0 011.038.175l.007.009c.103.118.22.222.35.31.264.178.683.37 1.285.37.602 0 1.02-.192 1.285-.371.13-.088.247-.192.35-.31l.007-.008a.75.75 0 111.222.87l-.614-.431c.614.43.614.431.613.431v.001l-.001.002-.002.003-.005.007-.014.019a1.984 1.984 0 01-.184.213c-.16.166-.338.316-.53.445-.63.418-1.37.638-2.127.629-.946 0-1.652-.308-2.126-.63a3.32 3.32 0 01-.715-.657l-.014-.02-.005-.006-.002-.003v-.002h-.001l.613-.432-.614.43a.75.75 0 01.183-1.044h.001z"></path></svg>
          </div>
        </div>
        <div class="
          
           user-status-message-wrapper f6 min-width-0" style="line-height: 20px;">
          <div class="css-truncate css-truncate-target width-fit text-gray-dark text-left">
              <span class="text-gray">Set status</span>
          </div>
        </div>
      </div>
    </summary>
    <details-dialog class="details-dialog rounded-1 anim-fade-in fast Box Box--overlay" role="dialog" tabindex="-1" aria-modal="true">
      <!-- '"` --><!-- </textarea></xmp> --><form class="position-relative flex-auto js-user-status-form" action="https://github.com/users/status?circle=0&amp;compact=1&amp;link_mentions=0&amp;truncate=1" accept-charset="UTF-8" method="post"><input type="hidden" name="_method" value="put"><input type="hidden" name="authenticity_token" value="IXOLkzqNaCOvUlniJSkHaOzNDPTC7Oj93W/oYq87dJN1rd2CzVYrk2EW2noz9D6jFgMbEW3E6gFHjYV2WvAQDw==">
        <div class="Box-header bg-gray border-bottom p-3">
          <button class="Box-btn-octicon js-toggle-user-status-edit btn-octicon float-right" type="reset" aria-label="Close dialog" data-close-dialog="">
            <svg class="octicon octicon-x" viewBox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M3.72 3.72a.75.75 0 011.06 0L8 6.94l3.22-3.22a.75.75 0 111.06 1.06L9.06 8l3.22 3.22a.75.75 0 11-1.06 1.06L8 9.06l-3.22 3.22a.75.75 0 01-1.06-1.06L6.94 8 3.72 4.78a.75.75 0 010-1.06z"></path></svg>
          </button>
          <h3 class="Box-title f5 text-bold text-gray-dark">Edit status</h3>
        </div>
        <input type="hidden" name="emoji" class="js-user-status-emoji-field" value="">
        <input type="hidden" name="organization_id" class="js-user-status-org-id-field" value="">
        <div class="px-3 py-2 text-gray-dark">
          <div class="js-characters-remaining-container position-relative mt-2">
            <div class="input-group d-table form-group my-0 js-user-status-form-group">
              <span class="input-group-button d-table-cell v-align-middle" style="width: 1%">
                <button type="button" aria-label="Choose an emoji" class="btn-outline btn js-toggle-user-status-emoji-picker btn-open-emoji-picker p-0">
                  <span class="js-user-status-original-emoji" hidden=""></span>
                  <span class="js-user-status-custom-emoji"></span>
                  <span class="js-user-status-no-emoji-icon">
                    <svg class="octicon octicon-smiley" viewBox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M1.5 8a6.5 6.5 0 1113 0 6.5 6.5 0 01-13 0zM8 0a8 8 0 100 16A8 8 0 008 0zM5 8a1 1 0 100-2 1 1 0 000 2zm7-1a1 1 0 11-2 0 1 1 0 012 0zM5.32 9.636a.75.75 0 011.038.175l.007.009c.103.118.22.222.35.31.264.178.683.37 1.285.37.602 0 1.02-.192 1.285-.371.13-.088.247-.192.35-.31l.007-.008a.75.75 0 111.222.87l-.614-.431c.614.43.614.431.613.431v.001l-.001.002-.002.003-.005.007-.014.019a1.984 1.984 0 01-.184.213c-.16.166-.338.316-.53.445-.63.418-1.37.638-2.127.629-.946 0-1.652-.308-2.126-.63a3.32 3.32 0 01-.715-.657l-.014-.02-.005-.006-.002-.003v-.002h-.001l.613-.432-.614.43a.75.75 0 01.183-1.044h.001z"></path></svg>
                  </span>
                </button>
              </span>
              <text-expander keys=": @" data-mention-url="/autocomplete/user-suggestions" data-emoji-url="/autocomplete/emoji">
                <input type="text" autocomplete="off" data-no-org-url="/autocomplete/user-suggestions" data-org-url="/suggestions?mention_suggester=1" data-maxlength="80" class="d-table-cell width-full form-control js-user-status-message-field js-characters-remaining-field" placeholder="What&#39;s happening?" name="message" value="" aria-label="What is your current status?">
              </text-expander>
              <div class="error">Could not update your status, please try again.</div>
            </div>
            <div style="margin-left: 53px" class="my-1 text-small label-characters-remaining js-characters-remaining" data-suffix="remaining" hidden="">
              80 remaining
            </div>
          </div>
          <include-fragment class="js-user-status-emoji-picker" data-url="/users/status/emoji"></include-fragment>
          <div class="overflow-auto ml-n3 mr-n3 px-3 border-bottom" style="max-height: 33vh">
            <div class="user-status-suggestions js-user-status-suggestions collapsed overflow-hidden">
              <h4 class="f6 text-normal my-3">Suggestions:</h4>
              <div class="mx-3 mt-2 clearfix">
                  <div class="float-left col-6">
                      <button type="button" value=":palm_tree:" class="d-flex flex-items-baseline flex-items-stretch lh-condensed f6 btn-link link-gray no-underline js-predefined-user-status mb-1">
                        <div class="emoji-status-width mr-2 v-align-middle js-predefined-user-status-emoji">
                          <g-emoji alias="palm_tree" fallback-src="https://github.githubassets.com/images/icons/emoji/unicode/1f334.png">🌴</g-emoji>
                        </div>
                        <div class="d-flex flex-items-center no-underline js-predefined-user-status-message ws-normal text-left" style="border-left: 1px solid transparent">
                          On vacation
                        </div>
                      </button>
                      <button type="button" value=":face_with_thermometer:" class="d-flex flex-items-baseline flex-items-stretch lh-condensed f6 btn-link link-gray no-underline js-predefined-user-status mb-1">
                        <div class="emoji-status-width mr-2 v-align-middle js-predefined-user-status-emoji">
                          <g-emoji alias="face_with_thermometer" fallback-src="https://github.githubassets.com/images/icons/emoji/unicode/1f912.png">🤒</g-emoji>
                        </div>
                        <div class="d-flex flex-items-center no-underline js-predefined-user-status-message ws-normal text-left" style="border-left: 1px solid transparent">
                          Out sick
                        </div>
                      </button>
                  </div>
                  <div class="float-left col-6">
                      <button type="button" value=":house:" class="d-flex flex-items-baseline flex-items-stretch lh-condensed f6 btn-link link-gray no-underline js-predefined-user-status mb-1">
                        <div class="emoji-status-width mr-2 v-align-middle js-predefined-user-status-emoji">
                          <g-emoji alias="house" fallback-src="https://github.githubassets.com/images/icons/emoji/unicode/1f3e0.png">🏠</g-emoji>
                        </div>
                        <div class="d-flex flex-items-center no-underline js-predefined-user-status-message ws-normal text-left" style="border-left: 1px solid transparent">
                          Working from home
                        </div>
                      </button>
                      <button type="button" value=":dart:" class="d-flex flex-items-baseline flex-items-stretch lh-condensed f6 btn-link link-gray no-underline js-predefined-user-status mb-1">
                        <div class="emoji-status-width mr-2 v-align-middle js-predefined-user-status-emoji">
                          <g-emoji alias="dart" fallback-src="https://github.githubassets.com/images/icons/emoji/unicode/1f3af.png">🎯</g-emoji>
                        </div>
                        <div class="d-flex flex-items-center no-underline js-predefined-user-status-message ws-normal text-left" style="border-left: 1px solid transparent">
                          Focusing
                        </div>
                      </button>
                  </div>
              </div>
            </div>
            <div class="user-status-limited-availability-container">
              <div class="form-checkbox my-0">
                <input type="checkbox" name="limited_availability" value="1" class="js-user-status-limited-availability-checkbox" data-default-message="I may be slow to respond." aria-describedby="limited-availability-help-text-truncate-true-compact-true" id="limited-availability-truncate-true-compact-true">
                <label class="d-block f5 text-gray-dark mb-1" for="limited-availability-truncate-true-compact-true">
                  Busy
                </label>
                <p class="note" id="limited-availability-help-text-truncate-true-compact-true">
                  When others mention you, assign you, or request your review,
                  GitHub will let them know that you have limited availability.
                </p>
              </div>
            </div>
          </div>
          <div class="d-inline-block f5 mr-2 pt-3 pb-2">
  <div class="d-inline-block mr-1">
    Clear status
  </div>

  <details class="js-user-status-expire-drop-down f6 dropdown details-reset details-overlay d-inline-block mr-2">
    <summary class="btn btn-sm v-align-baseline" aria-haspopup="true">
      <div class="js-user-status-expiration-interval-selected d-inline-block v-align-baseline">
        Never
      </div>
      <div class="dropdown-caret"></div>
    </summary>

    <ul class="dropdown-menu dropdown-menu-se pl-0 overflow-auto" style="width: 220px; max-height: 15.5em">
      <li>
        <button type="button" class="btn-link dropdown-item js-user-status-expire-button ws-normal" title="Never">
          <span class="d-inline-block text-bold mb-1">Never</span>
          <div class="f6 lh-condensed">Keep this status until you clear your status or edit your status.</div>
        </button>
      </li>
      <li class="dropdown-divider" role="none"></li>
        <li>
          <button type="button" class="btn-link dropdown-item ws-normal js-user-status-expire-button" title="in 30 minutes" value="2020-10-08T13:38:06+05:30">
            in 30 minutes
          </button>
        </li>
        <li>
          <button type="button" class="btn-link dropdown-item ws-normal js-user-status-expire-button" title="in 1 hour" value="2020-10-08T14:08:06+05:30">
            in 1 hour
          </button>
        </li>
        <li>
          <button type="button" class="btn-link dropdown-item ws-normal js-user-status-expire-button" title="in 4 hours" value="2020-10-08T17:08:06+05:30">
            in 4 hours
          </button>
        </li>
        <li>
          <button type="button" class="btn-link dropdown-item ws-normal js-user-status-expire-button" title="today" value="2020-10-08T23:59:59+05:30">
            today
          </button>
        </li>
        <li>
          <button type="button" class="btn-link dropdown-item ws-normal js-user-status-expire-button" title="this week" value="2020-10-11T23:59:59+05:30">
            this week
          </button>
        </li>
    </ul>
  </details>
  <input class="js-user-status-expiration-date-input" type="hidden" name="expires_at" value="">
</div>

          <include-fragment class="js-user-status-org-picker" data-url="/users/status/organizations"></include-fragment>
        </div>
        <div class="d-flex flex-items-center flex-justify-between p-3 border-top">
          <button type="submit" disabled="" class="width-full btn btn-primary mr-2 js-user-status-submit">
            Set status
          </button>
          <button type="button" disabled="" class="width-full js-clear-user-status-button btn ml-2 ">
            Clear status
          </button>
        </div>
</form>    </details-dialog>
  </details>
</div>

      </div>
      <div role="none" class="dropdown-divider"></div>

    <a role="menuitem" class="dropdown-item" href="https://github.com/99002786" data-ga-click="Header, go to profile, text:your profile" data-hydro-click="{&quot;event_type&quot;:&quot;global_header.user_menu_dropdown.click&quot;,&quot;payload&quot;:{&quot;request_url&quot;:&quot;https://github.com/99002786/act2/edit/main/calci-main/calci-main/function.h&quot;,&quot;target&quot;:&quot;YOUR_PROFILE&quot;,&quot;originating_url&quot;:&quot;https://github.com/99002786/act2/edit/main/calci-main/calci-main/function.h&quot;,&quot;user_id&quot;:72496123}}" data-hydro-click-hmac="187c0f36819c07a26a772c6a3cd7c6247b4906f813f25cd02fed2c107c798c95">Your profile</a>

    <a role="menuitem" class="dropdown-item" href="https://github.com/99002786?tab=repositories" data-ga-click="Header, go to repositories, text:your repositories" data-hydro-click="{&quot;event_type&quot;:&quot;global_header.user_menu_dropdown.click&quot;,&quot;payload&quot;:{&quot;request_url&quot;:&quot;https://github.com/99002786/act2/edit/main/calci-main/calci-main/function.h&quot;,&quot;target&quot;:&quot;YOUR_REPOSITORIES&quot;,&quot;originating_url&quot;:&quot;https://github.com/99002786/act2/edit/main/calci-main/calci-main/function.h&quot;,&quot;user_id&quot;:72496123}}" data-hydro-click-hmac="d6c90117451b80832d5c628590ccf5e5ac538b2d609e288afabd4bb8ca721065">Your repositories</a>



    <a role="menuitem" class="dropdown-item" href="https://github.com/99002786?tab=projects" data-ga-click="Header, go to projects, text:your projects" data-hydro-click="{&quot;event_type&quot;:&quot;global_header.user_menu_dropdown.click&quot;,&quot;payload&quot;:{&quot;request_url&quot;:&quot;https://github.com/99002786/act2/edit/main/calci-main/calci-main/function.h&quot;,&quot;target&quot;:&quot;YOUR_PROJECTS&quot;,&quot;originating_url&quot;:&quot;https://github.com/99002786/act2/edit/main/calci-main/calci-main/function.h&quot;,&quot;user_id&quot;:72496123}}" data-hydro-click-hmac="030a97008a9b0ecb471a973b9f667792ce80d00d4b8f6f5ea3f781160496d59b">Your projects</a>


    <a role="menuitem" class="dropdown-item" href="https://github.com/99002786?tab=stars" data-ga-click="Header, go to starred repos, text:your stars" data-hydro-click="{&quot;event_type&quot;:&quot;global_header.user_menu_dropdown.click&quot;,&quot;payload&quot;:{&quot;request_url&quot;:&quot;https://github.com/99002786/act2/edit/main/calci-main/calci-main/function.h&quot;,&quot;target&quot;:&quot;YOUR_STARS&quot;,&quot;originating_url&quot;:&quot;https://github.com/99002786/act2/edit/main/calci-main/calci-main/function.h&quot;,&quot;user_id&quot;:72496123}}" data-hydro-click-hmac="2e1a77b069b93a8d0e7e29686eaa18a589409f4fe92012b9dbc307c98f3ace66">Your stars</a>
      <a role="menuitem" class="dropdown-item" href="https://gist.github.com/mine" data-ga-click="Header, your gists, text:your gists" data-hydro-click="{&quot;event_type&quot;:&quot;global_header.user_menu_dropdown.click&quot;,&quot;payload&quot;:{&quot;request_url&quot;:&quot;https://github.com/99002786/act2/edit/main/calci-main/calci-main/function.h&quot;,&quot;target&quot;:&quot;YOUR_GISTS&quot;,&quot;originating_url&quot;:&quot;https://github.com/99002786/act2/edit/main/calci-main/calci-main/function.h&quot;,&quot;user_id&quot;:72496123}}" data-hydro-click-hmac="d083885080584a281bf9d2a6630573482bc74dc1f8159625cbf09f2295951c98">Your gists</a>





    <div role="none" class="dropdown-divider"></div>
      <a role="menuitem" class="dropdown-item" href="https://github.com/settings/billing" data-ga-click="Header, go to billing, text:upgrade" data-hydro-click="{&quot;event_type&quot;:&quot;global_header.user_menu_dropdown.click&quot;,&quot;payload&quot;:{&quot;request_url&quot;:&quot;https://github.com/99002786/act2/edit/main/calci-main/calci-main/function.h&quot;,&quot;target&quot;:&quot;UPGRADE&quot;,&quot;originating_url&quot;:&quot;https://github.com/99002786/act2/edit/main/calci-main/calci-main/function.h&quot;,&quot;user_id&quot;:72496123}}" data-hydro-click-hmac="015344a4af5fa2817f64c99a4c6409f39ced07697692ec8cdd9318d764c320f1">Upgrade</a>
      
<div id="feature-enrollment-toggle" class="hide-sm hide-md feature-preview-details position-relative">
  <button type="button" class="dropdown-item btn-link" role="menuitem" data-feature-preview-trigger-url="/users/99002786/feature_previews" data-feature-preview-close-details="{&quot;event_type&quot;:&quot;feature_preview.clicks.close_modal&quot;,&quot;payload&quot;:{&quot;originating_url&quot;:&quot;https://github.com/99002786/act2/edit/main/calci-main/calci-main/function.h&quot;,&quot;user_id&quot;:72496123}}" data-feature-preview-close-hmac="0b46dfca374cee55afd473f02afcb7454b4eae2760624f9492cf714bbf1af328" data-hydro-click="{&quot;event_type&quot;:&quot;feature_preview.clicks.open_modal&quot;,&quot;payload&quot;:{&quot;link_location&quot;:&quot;user_dropdown&quot;,&quot;originating_url&quot;:&quot;https://github.com/99002786/act2/edit/main/calci-main/calci-main/function.h&quot;,&quot;user_id&quot;:72496123}}" data-hydro-click-hmac="5fedd577536d0710956a5d029dc8a9fd6f90ad675cb4a1c1ddf85846a23a9395">
    Feature preview
  </button>
    <span class="feature-preview-indicator js-feature-preview-indicator" hidden=""></span>
</div>

    <a role="menuitem" class="dropdown-item" href="https://docs.github.com/" data-ga-click="Header, go to help, text:help" data-hydro-click="{&quot;event_type&quot;:&quot;global_header.user_menu_dropdown.click&quot;,&quot;payload&quot;:{&quot;request_url&quot;:&quot;https://github.com/99002786/act2/edit/main/calci-main/calci-main/function.h&quot;,&quot;target&quot;:&quot;HELP&quot;,&quot;originating_url&quot;:&quot;https://github.com/99002786/act2/edit/main/calci-main/calci-main/function.h&quot;,&quot;user_id&quot;:72496123}}" data-hydro-click-hmac="14f0cf2d4c72258ab2277a949573a09471d5b2bf8436b77452d38a009b554f24">Help</a>
    <a role="menuitem" class="dropdown-item" href="https://github.com/settings/profile" data-ga-click="Header, go to settings, icon:settings" data-hydro-click="{&quot;event_type&quot;:&quot;global_header.user_menu_dropdown.click&quot;,&quot;payload&quot;:{&quot;request_url&quot;:&quot;https://github.com/99002786/act2/edit/main/calci-main/calci-main/function.h&quot;,&quot;target&quot;:&quot;SETTINGS&quot;,&quot;originating_url&quot;:&quot;https://github.com/99002786/act2/edit/main/calci-main/calci-main/function.h&quot;,&quot;user_id&quot;:72496123}}" data-hydro-click-hmac="3c292b208398803e8337fdc373f181bdef3edebd515ec1c506048ea4cc767f69">Settings</a>
    <!-- '"` --><!-- </textarea></xmp> --><form class="logout-form" action="https://github.com/logout" accept-charset="UTF-8" method="post"><input type="hidden" name="authenticity_token" value="rpfHcSI4y05jM4JFuCj8Tw5Hmk+SbNsbXxo+Dijz1WKUYjV8Hy63uMAJiQAvVaOPdsFFbRM34XhTsVw6JQwjqQ==">
      
      <button type="submit" class="dropdown-item dropdown-signout" data-ga-click="Header, sign out, icon:logout" data-hydro-click="{&quot;event_type&quot;:&quot;global_header.user_menu_dropdown.click&quot;,&quot;payload&quot;:{&quot;request_url&quot;:&quot;https://github.com/99002786/act2/edit/main/calci-main/calci-main/function.h&quot;,&quot;target&quot;:&quot;SIGN_OUT&quot;,&quot;originating_url&quot;:&quot;https://github.com/99002786/act2/edit/main/calci-main/calci-main/function.h&quot;,&quot;user_id&quot;:72496123}}" data-hydro-click-hmac="e9f3977297bf329c18941871371286972eea25a78347707ab3e328e3ddbf38d4" role="menuitem">
        Sign out
      </button>
      <input type="text" name="required_field_fcdf" hidden="hidden" class="form-control"><input type="hidden" name="timestamp" value="1602142686380" class="form-control"><input type="hidden" name="timestamp_secret" value="75ec9b6877ad7cba0a4478dd129863e26cc3efebc1b8da4e6404b188ed43c23c" class="form-control">
</form>  </details-menu>
</details>

    </div>
</header>

          

    </div>

  <div id="start-of-content" class="show-on-focus"></div>





    <div data-pjax-replace="" id="js-flash-container">


  <template class="js-flash-template"></template>
</div>


  

  <include-fragment class="js-notification-shelf-include-fragment" data-base-src="https://github.com/notifications/beta/shelf"></include-fragment>



  <div class="application-main " data-commit-hovercards-enabled="" data-discussion-hovercards-enabled="" data-issue-and-pr-hovercards-enabled="">
        <div itemscope="" itemtype="http://schema.org/SoftwareSourceCode" class="">
    <main id="js-repo-pjax-container" data-pjax-container="">
      

    

        <div class="border-bottom shelf intro-shelf js-notice mb-0 pb-4">
  <div class="width-full container">
    <div class="width-full mx-auto shelf-content">
      <h2 class="shelf-title">Learn Git and GitHub without any code!</h2>
      <p class="shelf-lead">
          Using the Hello World guide, you’ll start a branch, write comments, and open a pull request.
      </p>
      <a class="btn btn-primary shelf-cta" target="_blank" data-hydro-click="{&quot;event_type&quot;:&quot;repository.click&quot;,&quot;payload&quot;:{&quot;target&quot;:&quot;READ_GUIDE&quot;,&quot;repository_id&quot;:302012503,&quot;originating_url&quot;:&quot;https://github.com/99002786/act2/edit/main/calci-main/calci-main/function.h&quot;,&quot;user_id&quot;:72496123}}" data-hydro-click-hmac="caa478cf96958ff8bbd71b8ec196840179ac9f7f498828df5974fccf8f0746ba" href="https://guides.github.com/activities/hello-world/">Read the guide</a>
    </div>
    <!-- '"` --><!-- </textarea></xmp> --><form class="shelf-dismiss js-notice-dismiss" action="https://github.com/dashboard/dismiss_bootcamp" accept-charset="UTF-8" method="post"><input type="hidden" name="_method" value="delete"><input type="hidden" name="authenticity_token" value="gzUdgMay8KgQk6J/FuqNOXeDeW35U8eKPBzzEq1I7xis8wBhZO99K1GG33SLOaXNP7dPLC/qL5YIzEnRpyRavA==">
      <button name="button" type="submit" class="mr-1 close-button tooltipped tooltipped-w" aria-label="Hide this notice forever" data-hydro-click="{&quot;event_type&quot;:&quot;repository.click&quot;,&quot;payload&quot;:{&quot;target&quot;:&quot;DISMISS_BANNER&quot;,&quot;repository_id&quot;:302012503,&quot;originating_url&quot;:&quot;https://github.com/99002786/act2/edit/main/calci-main/calci-main/function.h&quot;,&quot;user_id&quot;:72496123}}" data-hydro-click-hmac="f413ed3f6124a4ca9d342430b680a1e47a4158d2029429053ee8298c21171cda">
        <svg aria-label="Hide this notice forever" class="octicon octicon-x v-align-text-top" viewBox="0 0 16 16" version="1.1" width="16" height="16" role="img"><path fill-rule="evenodd" d="M3.72 3.72a.75.75 0 011.06 0L8 6.94l3.22-3.22a.75.75 0 111.06 1.06L9.06 8l3.22 3.22a.75.75 0 11-1.06 1.06L8 9.06l-3.22 3.22a.75.75 0 01-1.06-1.06L6.94 8 3.72 4.78a.75.75 0 010-1.06z"></path></svg>
</button></form>  </div>
</div>






  


  <div class="bg-gray-light pt-3 hide-full-screen mb-5">

      <div class="d-flex mb-3 px-3 px-md-4 px-lg-5">

        <div class="flex-auto min-width-0 width-fit mr-3">
            <h1 class=" d-flex flex-wrap flex-items-center break-word f3 text-normal">
    <svg class="octicon octicon-repo text-gray mr-2" viewBox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M2 2.5A2.5 2.5 0 014.5 0h8.75a.75.75 0 01.75.75v12.5a.75.75 0 01-.75.75h-2.5a.75.75 0 110-1.5h1.75v-2h-8a1 1 0 00-.714 1.7.75.75 0 01-1.072 1.05A2.495 2.495 0 012 11.5v-9zm10.5-1V9h-8c-.356 0-.694.074-1 .208V2.5a1 1 0 011-1h8zM5 12.25v3.25a.25.25 0 00.4.2l1.45-1.087a.25.25 0 01.3 0L8.6 15.7a.25.25 0 00.4-.2v-3.25a.25.25 0 00-.25-.25h-3.5a.25.25 0 00-.25.25z"></path></svg>
    <span class="author flex-self-stretch" itemprop="author">
      <a class="url fn" rel="author" data-hovercard-type="user" data-hovercard-url="/users/99002786/hovercard" data-octo-click="hovercard-link-click" data-octo-dimensions="link_type:self" href="https://github.com/99002786">99002786</a>
    </span>
    <span class="mx-1 flex-self-stretch">/</span>
  <strong itemprop="name" class="mr-2 flex-self-stretch">
    <a data-pjax="#js-repo-pjax-container" class="" href="https://github.com/99002786/act2">act2</a>
  </strong>
  
</h1>


        </div>

          <ul class="pagehead-actions flex-shrink-0 d-none d-md-inline" style="padding: 2px 0;">

  <li>
            <form data-remote="true" class="d-flex js-social-form js-social-container" action="https://github.com/notifications/subscribe" accept-charset="UTF-8" method="post"><input type="hidden" name="authenticity_token" value="iKt4LkfkOkIrTBxpTlvps7iNkQhfOXy7oLumGAZknJ/rupXV6PrN9K1VMwa/Ilr4BWO6Y2s57JCE+c/PCzkGGw==">      <input type="hidden" name="repository_id" value="302012503">

      <details class="details-reset details-overlay select-menu hx_rsm">
        <summary class="btn btn-sm btn-with-count" data-hydro-click="{&quot;event_type&quot;:&quot;repository.click&quot;,&quot;payload&quot;:{&quot;target&quot;:&quot;WATCH_BUTTON&quot;,&quot;repository_id&quot;:302012503,&quot;originating_url&quot;:&quot;https://github.com/99002786/act2/edit/main/calci-main/calci-main/function.h&quot;,&quot;user_id&quot;:72496123}}" data-hydro-click-hmac="cfb0a8df3b1c9cf6dd1530751d453da3ef7aea748351e53bc2c9e80ce69a845c" data-ga-click="Repository, click Watch settings, action:blob#edit" aria-haspopup="menu" role="button">          <span data-menu-button="">
              <svg height="16" class="octicon octicon-eye" viewBox="0 0 16 16" version="1.1" width="16" aria-hidden="true"><path fill-rule="evenodd" d="M1.679 7.932c.412-.621 1.242-1.75 2.366-2.717C5.175 4.242 6.527 3.5 8 3.5c1.473 0 2.824.742 3.955 1.715 1.124.967 1.954 2.096 2.366 2.717a.119.119 0 010 .136c-.412.621-1.242 1.75-2.366 2.717C10.825 11.758 9.473 12.5 8 12.5c-1.473 0-2.824-.742-3.955-1.715C2.92 9.818 2.09 8.69 1.679 8.068a.119.119 0 010-.136zM8 2c-1.981 0-3.67.992-4.933 2.078C1.797 5.169.88 6.423.43 7.1a1.619 1.619 0 000 1.798c.45.678 1.367 1.932 2.637 3.024C4.329 13.008 6.019 14 8 14c1.981 0 3.67-.992 4.933-2.078 1.27-1.091 2.187-2.345 2.637-3.023a1.619 1.619 0 000-1.798c-.45-.678-1.367-1.932-2.637-3.023C11.671 2.992 9.981 2 8 2zm0 8a2 2 0 100-4 2 2 0 000 4z"></path></svg>
              Unwatch
          </span>
          <span class="dropdown-caret"></span>
</summary>        <details-menu class="select-menu-modal position-absolute mt-5" style="z-index: 99;" role="menu">
          <div class="select-menu-header">
            <span class="select-menu-title">Notifications</span>
          </div>
          <div class="select-menu-list">
            <button type="submit" name="do" value="included" class="select-menu-item width-full" aria-checked="false" role="menuitemradio">
              <svg class="octicon octicon-check select-menu-item-icon" height="16" viewBox="0 0 16 16" version="1.1" width="16" aria-hidden="true"><path fill-rule="evenodd" d="M13.78 4.22a.75.75 0 010 1.06l-7.25 7.25a.75.75 0 01-1.06 0L2.22 9.28a.75.75 0 011.06-1.06L6 10.94l6.72-6.72a.75.75 0 011.06 0z"></path></svg>
              <div class="select-menu-item-text">
                <span class="select-menu-item-heading">Not watching</span>
                <span class="description">Be notified only when participating or @mentioned.</span>
                <span class="hidden-select-button-text" data-menu-button-contents="">
                  <svg height="16" class="octicon octicon-eye" viewBox="0 0 16 16" version="1.1" width="16" aria-hidden="true"><path fill-rule="evenodd" d="M1.679 7.932c.412-.621 1.242-1.75 2.366-2.717C5.175 4.242 6.527 3.5 8 3.5c1.473 0 2.824.742 3.955 1.715 1.124.967 1.954 2.096 2.366 2.717a.119.119 0 010 .136c-.412.621-1.242 1.75-2.366 2.717C10.825 11.758 9.473 12.5 8 12.5c-1.473 0-2.824-.742-3.955-1.715C2.92 9.818 2.09 8.69 1.679 8.068a.119.119 0 010-.136zM8 2c-1.981 0-3.67.992-4.933 2.078C1.797 5.169.88 6.423.43 7.1a1.619 1.619 0 000 1.798c.45.678 1.367 1.932 2.637 3.024C4.329 13.008 6.019 14 8 14c1.981 0 3.67-.992 4.933-2.078 1.27-1.091 2.187-2.345 2.637-3.023a1.619 1.619 0 000-1.798c-.45-.678-1.367-1.932-2.637-3.023C11.671 2.992 9.981 2 8 2zm0 8a2 2 0 100-4 2 2 0 000 4z"></path></svg>
                  Watch
                </span>
              </div>
            </button>

            <button type="submit" name="do" value="release_only" class="select-menu-item width-full" aria-checked="false" role="menuitemradio">
              <svg class="octicon octicon-check select-menu-item-icon" height="16" viewBox="0 0 16 16" version="1.1" width="16" aria-hidden="true"><path fill-rule="evenodd" d="M13.78 4.22a.75.75 0 010 1.06l-7.25 7.25a.75.75 0 01-1.06 0L2.22 9.28a.75.75 0 011.06-1.06L6 10.94l6.72-6.72a.75.75 0 011.06 0z"></path></svg>
              <div class="select-menu-item-text">
                <span class="select-menu-item-heading">Releases only</span>
                <span class="description">Be notified of new releases, and when participating or @mentioned.</span>
                <span class="hidden-select-button-text" data-menu-button-contents="">
                  <svg height="16" class="octicon octicon-eye" viewBox="0 0 16 16" version="1.1" width="16" aria-hidden="true"><path fill-rule="evenodd" d="M1.679 7.932c.412-.621 1.242-1.75 2.366-2.717C5.175 4.242 6.527 3.5 8 3.5c1.473 0 2.824.742 3.955 1.715 1.124.967 1.954 2.096 2.366 2.717a.119.119 0 010 .136c-.412.621-1.242 1.75-2.366 2.717C10.825 11.758 9.473 12.5 8 12.5c-1.473 0-2.824-.742-3.955-1.715C2.92 9.818 2.09 8.69 1.679 8.068a.119.119 0 010-.136zM8 2c-1.981 0-3.67.992-4.933 2.078C1.797 5.169.88 6.423.43 7.1a1.619 1.619 0 000 1.798c.45.678 1.367 1.932 2.637 3.024C4.329 13.008 6.019 14 8 14c1.981 0 3.67-.992 4.933-2.078 1.27-1.091 2.187-2.345 2.637-3.023a1.619 1.619 0 000-1.798c-.45-.678-1.367-1.932-2.637-3.023C11.671 2.992 9.981 2 8 2zm0 8a2 2 0 100-4 2 2 0 000 4z"></path></svg>
                  Unwatch releases
                </span>
              </div>
            </button>

            <button type="submit" name="do" value="subscribed" class="select-menu-item width-full" aria-checked="true" role="menuitemradio">
              <svg class="octicon octicon-check select-menu-item-icon" height="16" viewBox="0 0 16 16" version="1.1" width="16" aria-hidden="true"><path fill-rule="evenodd" d="M13.78 4.22a.75.75 0 010 1.06l-7.25 7.25a.75.75 0 01-1.06 0L2.22 9.28a.75.75 0 011.06-1.06L6 10.94l6.72-6.72a.75.75 0 011.06 0z"></path></svg>
              <div class="select-menu-item-text">
                <span class="select-menu-item-heading">Watching</span>
                <span class="description">Be notified of all conversations.</span>
                <span class="hidden-select-button-text" data-menu-button-contents="">
                  <svg class="octicon octicon-eye v-align-text-bottom" height="16" viewBox="0 0 16 16" version="1.1" width="16" aria-hidden="true"><path fill-rule="evenodd" d="M1.679 7.932c.412-.621 1.242-1.75 2.366-2.717C5.175 4.242 6.527 3.5 8 3.5c1.473 0 2.824.742 3.955 1.715 1.124.967 1.954 2.096 2.366 2.717a.119.119 0 010 .136c-.412.621-1.242 1.75-2.366 2.717C10.825 11.758 9.473 12.5 8 12.5c-1.473 0-2.824-.742-3.955-1.715C2.92 9.818 2.09 8.69 1.679 8.068a.119.119 0 010-.136zM8 2c-1.981 0-3.67.992-4.933 2.078C1.797 5.169.88 6.423.43 7.1a1.619 1.619 0 000 1.798c.45.678 1.367 1.932 2.637 3.024C4.329 13.008 6.019 14 8 14c1.981 0 3.67-.992 4.933-2.078 1.27-1.091 2.187-2.345 2.637-3.023a1.619 1.619 0 000-1.798c-.45-.678-1.367-1.932-2.637-3.023C11.671 2.992 9.981 2 8 2zm0 8a2 2 0 100-4 2 2 0 000 4z"></path></svg>
                  Unwatch
                </span>
              </div>
            </button>

            <button type="submit" name="do" value="ignore" class="select-menu-item width-full" aria-checked="false" role="menuitemradio">
              <svg class="octicon octicon-check select-menu-item-icon" height="16" viewBox="0 0 16 16" version="1.1" width="16" aria-hidden="true"><path fill-rule="evenodd" d="M13.78 4.22a.75.75 0 010 1.06l-7.25 7.25a.75.75 0 01-1.06 0L2.22 9.28a.75.75 0 011.06-1.06L6 10.94l6.72-6.72a.75.75 0 011.06 0z"></path></svg>
              <div class="select-menu-item-text">
                <span class="select-menu-item-heading">Ignoring</span>
                <span class="description">Never be notified.</span>
                <span class="hidden-select-button-text" data-menu-button-contents="">
                  <svg height="16" class="octicon octicon-bell-slash" viewBox="0 0 16 16" version="1.1" width="16" aria-hidden="true"><path fill-rule="evenodd" d="M8 1.5c-.997 0-1.895.416-2.534 1.086A.75.75 0 014.38 1.55 5 5 0 0113 5v2.373a.75.75 0 01-1.5 0V5A3.5 3.5 0 008 1.5zM4.182 4.31L1.19 2.143a.75.75 0 10-.88 1.214L3 5.305v2.642a.25.25 0 01-.042.139L1.255 10.64A1.518 1.518 0 002.518 13h11.108l1.184.857a.75.75 0 10.88-1.214l-1.375-.996a1.196 1.196 0 00-.013-.01L4.198 4.321a.733.733 0 00-.016-.011zm7.373 7.19L4.5 6.391v1.556c0 .346-.102.683-.294.97l-1.703 2.556a.018.018 0 00-.003.01.015.015 0 00.005.012.017.017 0 00.006.004l.007.001h9.037zM8 16a2 2 0 001.985-1.75c.017-.137-.097-.25-.235-.25h-3.5c-.138 0-.252.113-.235.25A2 2 0 008 16z"></path></svg>
                  Stop ignoring
                </span>
              </div>
            </button>
          </div>
        </details-menu>
      </details>
        <a class="social-count js-social-count" href="https://github.com/99002786/act2/watchers" aria-label="1 user is watching this repository">
          1
        </a>
</form>
  </li>

  <li>
        <div class="js-toggler-container js-social-container starring-container ">
    <form class="starred js-social-form" action="https://github.com/99002786/act2/unstar" accept-charset="UTF-8" method="post"><input type="hidden" name="authenticity_token" value="FJcxebIZ994tWC5cyB6uRKljoJnkmIbyDBLAVxOHLZvWaOndPqLVgNS7BHa8W//z+/ctrbo2+mSUSjM3Rp22BQ==">
      <input type="hidden" name="context" value="repository">
      <button type="submit" class="btn btn-sm btn-with-count  js-toggler-target" aria-label="Unstar this repository" title="Unstar 99002786/act2" data-hydro-click="{&quot;event_type&quot;:&quot;repository.click&quot;,&quot;payload&quot;:{&quot;target&quot;:&quot;UNSTAR_BUTTON&quot;,&quot;repository_id&quot;:302012503,&quot;originating_url&quot;:&quot;https://github.com/99002786/act2/edit/main/calci-main/calci-main/function.h&quot;,&quot;user_id&quot;:72496123}}" data-hydro-click-hmac="8b65e500e24a87cb77533e6236e9aea89c8e52dbf3798f974a0626e0257cef7c" data-ga-click="Repository, click unstar button, action:blob#edit; text:Unstar">        <svg height="16" class="octicon octicon-star-fill" viewBox="0 0 16 16" version="1.1" width="16" aria-hidden="true"><path fill-rule="evenodd" d="M8 .25a.75.75 0 01.673.418l1.882 3.815 4.21.612a.75.75 0 01.416 1.279l-3.046 2.97.719 4.192a.75.75 0 01-1.088.791L8 12.347l-3.766 1.98a.75.75 0 01-1.088-.79l.72-4.194L.818 6.374a.75.75 0 01.416-1.28l4.21-.611L7.327.668A.75.75 0 018 .25z"></path></svg>
        Unstar
</button>        <a class="social-count js-social-count" href="https://github.com/99002786/act2/stargazers" aria-label="0 users starred this repository">
           0
        </a>
</form>
    <form class="unstarred js-social-form" action="https://github.com/99002786/act2/star" accept-charset="UTF-8" method="post"><input type="hidden" name="authenticity_token" value="U6mKqZ2L+aA/tajprorx2akgNiOYWwGTSjvJWD/vQ8w/cApSI7zjAmuu7hj7gwglbjrjfuUOApiH6vE+4CcXFQ==">
      <input type="hidden" name="context" value="repository">
      <button type="submit" class="btn btn-sm btn-with-count  js-toggler-target" aria-label="Unstar this repository" title="Star 99002786/act2" data-hydro-click="{&quot;event_type&quot;:&quot;repository.click&quot;,&quot;payload&quot;:{&quot;target&quot;:&quot;STAR_BUTTON&quot;,&quot;repository_id&quot;:302012503,&quot;originating_url&quot;:&quot;https://github.com/99002786/act2/edit/main/calci-main/calci-main/function.h&quot;,&quot;user_id&quot;:72496123}}" data-hydro-click-hmac="f0d6383d7d248ed183cebe9ae810e8baa61b7deb6c0326230ec5594263b3c2cf" data-ga-click="Repository, click star button, action:blob#edit; text:Star">        <svg height="16" class="octicon octicon-star" viewBox="0 0 16 16" version="1.1" width="16" aria-hidden="true"><path fill-rule="evenodd" d="M8 .25a.75.75 0 01.673.418l1.882 3.815 4.21.612a.75.75 0 01.416 1.279l-3.046 2.97.719 4.192a.75.75 0 01-1.088.791L8 12.347l-3.766 1.98a.75.75 0 01-1.088-.79l.72-4.194L.818 6.374a.75.75 0 01.416-1.28l4.21-.611L7.327.668A.75.75 0 018 .25zm0 2.445L6.615 5.5a.75.75 0 01-.564.41l-3.097.45 2.24 2.184a.75.75 0 01.216.664l-.528 3.084 2.769-1.456a.75.75 0 01.698 0l2.77 1.456-.53-3.084a.75.75 0 01.216-.664l2.24-2.183-3.096-.45a.75.75 0 01-.564-.41L8 2.694v.001z"></path></svg>
        Star
</button>        <a class="social-count js-social-count" href="https://github.com/99002786/act2/stargazers" aria-label="0 users starred this repository">
          0
        </a>
</form>  </div>

  </li>

  <li>
          <span class="btn btn-sm btn-with-count disabled tooltipped tooltipped-sw" aria-label="Cannot fork because you own this repository and are not a member of any organizations.">
            <svg class="octicon octicon-repo-forked" viewBox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M5 3.25a.75.75 0 11-1.5 0 .75.75 0 011.5 0zm0 2.122a2.25 2.25 0 10-1.5 0v.878A2.25 2.25 0 005.75 8.5h1.5v2.128a2.251 2.251 0 101.5 0V8.5h1.5a2.25 2.25 0 002.25-2.25v-.878a2.25 2.25 0 10-1.5 0v.878a.75.75 0 01-.75.75h-4.5A.75.75 0 015 6.25v-.878zm3.75 7.378a.75.75 0 11-1.5 0 .75.75 0 011.5 0zm3-8.75a.75.75 0 100-1.5.75.75 0 000 1.5z"></path></svg>
            Fork
</span>
      <a href="https://github.com/99002786/act2/network/members" class="social-count" aria-label="0 users forked this repository">
        0
      </a>
  </li>
</ul>

      </div>
        
<nav aria-label="Repository" data-pjax="#js-repo-pjax-container" class="js-repo-nav js-sidenav-container-pjax js-responsive-underlinenav overflow-hidden UnderlineNav px-3 px-md-4 px-lg-5 bg-gray-light">
  <ul class="UnderlineNav-body list-style-none ">
          <li class="d-flex">
        <a class="js-selected-navigation-item selected UnderlineNav-item hx_underlinenav-item no-wrap js-responsive-underlinenav-item" data-tab-item="code-tab" data-hotkey="g c" data-ga-click="Repository, Navigation click, Code tab" aria-current="page" data-selected-links="repo_source repo_downloads repo_commits repo_releases repo_tags repo_branches repo_packages repo_deployments /99002786/act2" href="https://github.com/99002786/act2">
              <svg classes="UnderlineNav-octicon" display="none inline" height="16" class="octicon octicon-code UnderlineNav-octicon d-none d-sm-inline" viewBox="0 0 16 16" version="1.1" width="16" aria-hidden="true"><path fill-rule="evenodd" d="M4.72 3.22a.75.75 0 011.06 1.06L2.06 8l3.72 3.72a.75.75 0 11-1.06 1.06L.47 8.53a.75.75 0 010-1.06l4.25-4.25zm6.56 0a.75.75 0 10-1.06 1.06L13.94 8l-3.72 3.72a.75.75 0 101.06 1.06l4.25-4.25a.75.75 0 000-1.06l-4.25-4.25z"></path></svg>
            <span data-content="Code">Code</span>
              <span title="Not available" class="Counter "></span>
</a>      </li>
      <li class="d-flex">
        <a class="js-selected-navigation-item UnderlineNav-item hx_underlinenav-item no-wrap js-responsive-underlinenav-item" data-tab-item="issues-tab" data-hotkey="g i" data-ga-click="Repository, Navigation click, Issues tab" data-selected-links="repo_issues repo_labels repo_milestones /99002786/act2/issues" href="https://github.com/99002786/act2/issues">
              <svg classes="UnderlineNav-octicon" display="none inline" height="16" class="octicon octicon-issue-opened UnderlineNav-octicon d-none d-sm-inline" viewBox="0 0 16 16" version="1.1" width="16" aria-hidden="true"><path fill-rule="evenodd" d="M8 1.5a6.5 6.5 0 100 13 6.5 6.5 0 000-13zM0 8a8 8 0 1116 0A8 8 0 010 8zm9 3a1 1 0 11-2 0 1 1 0 012 0zm-.25-6.25a.75.75 0 00-1.5 0v3.5a.75.75 0 001.5 0v-3.5z"></path></svg>
            <span data-content="Issues">Issues</span>
              <span title="0" hidden="hidden" class="Counter ">0</span>
</a>      </li>
      <li class="d-flex">
        <a class="js-selected-navigation-item UnderlineNav-item hx_underlinenav-item no-wrap js-responsive-underlinenav-item" data-tab-item="pull-requests-tab" data-hotkey="g p" data-ga-click="Repository, Navigation click, Pull requests tab" data-selected-links="repo_pulls checks /99002786/act2/pulls" href="https://github.com/99002786/act2/pulls">
              <svg classes="UnderlineNav-octicon" display="none inline" height="16" class="octicon octicon-git-pull-request UnderlineNav-octicon d-none d-sm-inline" viewBox="0 0 16 16" version="1.1" width="16" aria-hidden="true"><path fill-rule="evenodd" d="M7.177 3.073L9.573.677A.25.25 0 0110 .854v4.792a.25.25 0 01-.427.177L7.177 3.427a.25.25 0 010-.354zM3.75 2.5a.75.75 0 100 1.5.75.75 0 000-1.5zm-2.25.75a2.25 2.25 0 113 2.122v5.256a2.251 2.251 0 11-1.5 0V5.372A2.25 2.25 0 011.5 3.25zM11 2.5h-1V4h1a1 1 0 011 1v5.628a2.251 2.251 0 101.5 0V5A2.5 2.5 0 0011 2.5zm1 10.25a.75.75 0 111.5 0 .75.75 0 01-1.5 0zM3.75 12a.75.75 0 100 1.5.75.75 0 000-1.5z"></path></svg>
            <span data-content="Pull requests">Pull requests</span>
              <span title="0" hidden="hidden" class="Counter ">0</span>
</a>      </li>
      <li class="d-flex">
        <a class="js-selected-navigation-item UnderlineNav-item hx_underlinenav-item no-wrap js-responsive-underlinenav-item" data-tab-item="actions-tab" data-hotkey="g a" data-ga-click="Repository, Navigation click, Actions tab" data-selected-links="repo_actions /99002786/act2/actions" href="https://github.com/99002786/act2/actions">
              <svg classes="UnderlineNav-octicon" display="none inline" height="16" class="octicon octicon-play UnderlineNav-octicon d-none d-sm-inline" viewBox="0 0 16 16" version="1.1" width="16" aria-hidden="true"><path fill-rule="evenodd" d="M1.5 8a6.5 6.5 0 1113 0 6.5 6.5 0 01-13 0zM8 0a8 8 0 100 16A8 8 0 008 0zM6.379 5.227A.25.25 0 006 5.442v5.117a.25.25 0 00.379.214l4.264-2.559a.25.25 0 000-.428L6.379 5.227z"></path></svg>
            <span data-content="Actions">Actions</span>
              <span title="Not available" class="Counter "></span>
</a>      </li>
      <li class="d-flex">
        <a class="js-selected-navigation-item UnderlineNav-item hx_underlinenav-item no-wrap js-responsive-underlinenav-item" data-tab-item="projects-tab" data-hotkey="g b" data-ga-click="Repository, Navigation click, Projects tab" data-selected-links="repo_projects new_repo_project repo_project /99002786/act2/projects" href="https://github.com/99002786/act2/projects">
              <svg classes="UnderlineNav-octicon" display="none inline" height="16" class="octicon octicon-project UnderlineNav-octicon d-none d-sm-inline" viewBox="0 0 16 16" version="1.1" width="16" aria-hidden="true"><path fill-rule="evenodd" d="M1.75 0A1.75 1.75 0 000 1.75v12.5C0 15.216.784 16 1.75 16h12.5A1.75 1.75 0 0016 14.25V1.75A1.75 1.75 0 0014.25 0H1.75zM1.5 1.75a.25.25 0 01.25-.25h12.5a.25.25 0 01.25.25v12.5a.25.25 0 01-.25.25H1.75a.25.25 0 01-.25-.25V1.75zM11.75 3a.75.75 0 00-.75.75v7.5a.75.75 0 001.5 0v-7.5a.75.75 0 00-.75-.75zm-8.25.75a.75.75 0 011.5 0v5.5a.75.75 0 01-1.5 0v-5.5zM8 3a.75.75 0 00-.75.75v3.5a.75.75 0 001.5 0v-3.5A.75.75 0 008 3z"></path></svg>
            <span data-content="Projects">Projects</span>
              <span title="0" hidden="hidden" class="Counter ">0</span>
</a>      </li>
      <li class="d-flex">
        <a class="js-selected-navigation-item UnderlineNav-item hx_underlinenav-item no-wrap js-responsive-underlinenav-item" data-tab-item="wiki-tab" data-hotkey="g w" data-ga-click="Repository, Navigation click, Wikis tab" data-selected-links="repo_wiki /99002786/act2/wiki" href="https://github.com/99002786/act2/wiki">
              <svg classes="UnderlineNav-octicon" display="none inline" height="16" class="octicon octicon-book UnderlineNav-octicon d-none d-sm-inline" viewBox="0 0 16 16" version="1.1" width="16" aria-hidden="true"><path fill-rule="evenodd" d="M0 1.75A.75.75 0 01.75 1h4.253c1.227 0 2.317.59 3 1.501A3.744 3.744 0 0111.006 1h4.245a.75.75 0 01.75.75v10.5a.75.75 0 01-.75.75h-4.507a2.25 2.25 0 00-1.591.659l-.622.621a.75.75 0 01-1.06 0l-.622-.621A2.25 2.25 0 005.258 13H.75a.75.75 0 01-.75-.75V1.75zm8.755 3a2.25 2.25 0 012.25-2.25H14.5v9h-3.757c-.71 0-1.4.201-1.992.572l.004-7.322zm-1.504 7.324l.004-5.073-.002-2.253A2.25 2.25 0 005.003 2.5H1.5v9h3.757a3.75 3.75 0 011.994.574z"></path></svg>
            <span data-content="Wiki">Wiki</span>
              <span title="Not available" class="Counter "></span>
</a>      </li>
      <li class="d-flex">
        <a class="js-selected-navigation-item UnderlineNav-item hx_underlinenav-item no-wrap js-responsive-underlinenav-item" data-tab-item="security-tab" data-hotkey="g s" data-ga-click="Repository, Navigation click, Security tab" data-selected-links="security overview alerts policy token_scanning code_scanning /99002786/act2/security" href="https://github.com/99002786/act2/security">
              <svg classes="UnderlineNav-octicon" display="none inline" height="16" class="octicon octicon-shield UnderlineNav-octicon d-none d-sm-inline" viewBox="0 0 16 16" version="1.1" width="16" aria-hidden="true"><path fill-rule="evenodd" d="M7.467.133a1.75 1.75 0 011.066 0l5.25 1.68A1.75 1.75 0 0115 3.48V7c0 1.566-.32 3.182-1.303 4.682-.983 1.498-2.585 2.813-5.032 3.855a1.7 1.7 0 01-1.33 0c-2.447-1.042-4.049-2.357-5.032-3.855C1.32 10.182 1 8.566 1 7V3.48a1.75 1.75 0 011.217-1.667l5.25-1.68zm.61 1.429a.25.25 0 00-.153 0l-5.25 1.68a.25.25 0 00-.174.238V7c0 1.358.275 2.666 1.057 3.86.784 1.194 2.121 2.34 4.366 3.297a.2.2 0 00.154 0c2.245-.956 3.582-2.104 4.366-3.298C13.225 9.666 13.5 8.36 13.5 7V3.48a.25.25 0 00-.174-.237l-5.25-1.68zM9 10.5a1 1 0 11-2 0 1 1 0 012 0zm-.25-5.75a.75.75 0 10-1.5 0v3a.75.75 0 001.5 0v-3z"></path></svg>
            <span data-content="Security">Security</span>
              
</a>      </li>
      <li class="d-flex">
        <a class="js-selected-navigation-item UnderlineNav-item hx_underlinenav-item no-wrap js-responsive-underlinenav-item" data-tab-item="insights-tab" data-ga-click="Repository, Navigation click, Insights tab" data-selected-links="repo_graphs repo_contributors dependency_graph dependabot_updates pulse people /99002786/act2/pulse" href="https://github.com/99002786/act2/pulse">
              <svg classes="UnderlineNav-octicon" display="none inline" height="16" class="octicon octicon-graph UnderlineNav-octicon d-none d-sm-inline" viewBox="0 0 16 16" version="1.1" width="16" aria-hidden="true"><path fill-rule="evenodd" d="M1.5 1.75a.75.75 0 00-1.5 0v12.5c0 .414.336.75.75.75h14.5a.75.75 0 000-1.5H1.5V1.75zm14.28 2.53a.75.75 0 00-1.06-1.06L10 7.94 7.53 5.47a.75.75 0 00-1.06 0L3.22 8.72a.75.75 0 001.06 1.06L7 7.06l2.47 2.47a.75.75 0 001.06 0l5.25-5.25z"></path></svg>
            <span data-content="Insights">Insights</span>
              <span title="Not available" class="Counter "></span>
</a>      </li>
      <li class="d-flex">
        <a class="js-selected-navigation-item UnderlineNav-item hx_underlinenav-item no-wrap js-responsive-underlinenav-item" data-tab-item="settings-tab" data-ga-click="Repository, Navigation click, Settings tab" data-selected-links="repo_settings repo_branch_settings hooks integration_installations repo_keys_settings issue_template_editor secrets_settings key_links_settings repo_actions_settings notifications /99002786/act2/settings" href="https://github.com/99002786/act2/settings">
              <svg classes="UnderlineNav-octicon" display="none inline" height="16" class="octicon octicon-gear UnderlineNav-octicon d-none d-sm-inline" viewBox="0 0 16 16" version="1.1" width="16" aria-hidden="true"><path fill-rule="evenodd" d="M7.429 1.525a6.593 6.593 0 011.142 0c.036.003.108.036.137.146l.289 1.105c.147.56.55.967.997 1.189.174.086.341.183.501.29.417.278.97.423 1.53.27l1.102-.303c.11-.03.175.016.195.046.219.31.41.641.573.989.014.031.022.11-.059.19l-.815.806c-.411.406-.562.957-.53 1.456a4.588 4.588 0 010 .582c-.032.499.119 1.05.53 1.456l.815.806c.08.08.073.159.059.19a6.494 6.494 0 01-.573.99c-.02.029-.086.074-.195.045l-1.103-.303c-.559-.153-1.112-.008-1.529.27-.16.107-.327.204-.5.29-.449.222-.851.628-.998 1.189l-.289 1.105c-.029.11-.101.143-.137.146a6.613 6.613 0 01-1.142 0c-.036-.003-.108-.037-.137-.146l-.289-1.105c-.147-.56-.55-.967-.997-1.189a4.502 4.502 0 01-.501-.29c-.417-.278-.97-.423-1.53-.27l-1.102.303c-.11.03-.175-.016-.195-.046a6.492 6.492 0 01-.573-.989c-.014-.031-.022-.11.059-.19l.815-.806c.411-.406.562-.957.53-1.456a4.587 4.587 0 010-.582c.032-.499-.119-1.05-.53-1.456l-.815-.806c-.08-.08-.073-.159-.059-.19a6.44 6.44 0 01.573-.99c.02-.029.086-.075.195-.045l1.103.303c.559.153 1.112.008 1.529-.27.16-.107.327-.204.5-.29.449-.222.851-.628.998-1.189l.289-1.105c.029-.11.101-.143.137-.146zM8 0c-.236 0-.47.01-.701.03-.743.065-1.29.615-1.458 1.261l-.29 1.106c-.017.066-.078.158-.211.224a5.994 5.994 0 00-.668.386c-.123.082-.233.09-.3.071L3.27 2.776c-.644-.177-1.392.02-1.82.63a7.977 7.977 0 00-.704 1.217c-.315.675-.111 1.422.363 1.891l.815.806c.05.048.098.147.088.294a6.084 6.084 0 000 .772c.01.147-.038.246-.088.294l-.815.806c-.474.469-.678 1.216-.363 1.891.2.428.436.835.704 1.218.428.609 1.176.806 1.82.63l1.103-.303c.066-.019.176-.011.299.071.213.143.436.272.668.386.133.066.194.158.212.224l.289 1.106c.169.646.715 1.196 1.458 1.26a8.094 8.094 0 001.402 0c.743-.064 1.29-.614 1.458-1.26l.29-1.106c.017-.066.078-.158.211-.224a5.98 5.98 0 00.668-.386c.123-.082.233-.09.3-.071l1.102.302c.644.177 1.392-.02 1.82-.63.268-.382.505-.789.704-1.217.315-.675.111-1.422-.364-1.891l-.814-.806c-.05-.048-.098-.147-.088-.294a6.1 6.1 0 000-.772c-.01-.147.039-.246.088-.294l.814-.806c.475-.469.679-1.216.364-1.891a7.992 7.992 0 00-.704-1.218c-.428-.609-1.176-.806-1.82-.63l-1.103.303c-.066.019-.176.011-.299-.071a5.991 5.991 0 00-.668-.386c-.133-.066-.194-.158-.212-.224L10.16 1.29C9.99.645 9.444.095 8.701.031A8.094 8.094 0 008 0zm1.5 8a1.5 1.5 0 11-3 0 1.5 1.5 0 013 0zM11 8a3 3 0 11-6 0 3 3 0 016 0z"></path></svg>
            <span data-content="Settings">Settings</span>
              <span title="Not available" class="Counter "></span>
</a>      </li>

</ul>        <div class="position-absolute right-0 pr-3 pr-md-4 pr-lg-5 js-responsive-underlinenav-overflow" style="visibility:hidden;">
      <details class="details-overlay details-reset position-relative">
  <summary role="button">
    <div class="UnderlineNav-item mr-0 border-0">
            <svg class="octicon octicon-kebab-horizontal" viewBox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path d="M8 9a1.5 1.5 0 100-3 1.5 1.5 0 000 3zM1.5 9a1.5 1.5 0 100-3 1.5 1.5 0 000 3zm13 0a1.5 1.5 0 100-3 1.5 1.5 0 000 3z"></path></svg>
            <span class="sr-only">More</span>
          </div>
</summary>  <div>
    <details-menu role="menu" class="dropdown-menu dropdown-menu-sw ">
  
            <ul>
                <li data-menu-item="code-tab" hidden="">
                  <a role="menuitem" class="js-selected-navigation-item dropdown-item" data-selected-links=" /99002786/act2" href="https://github.com/99002786/act2">
                    Code
</a>                </li>
                <li data-menu-item="issues-tab" hidden="">
                  <a role="menuitem" class="js-selected-navigation-item dropdown-item" data-selected-links=" /99002786/act2/issues" href="https://github.com/99002786/act2/issues">
                    Issues
</a>                </li>
                <li data-menu-item="pull-requests-tab" hidden="">
                  <a role="menuitem" class="js-selected-navigation-item dropdown-item" data-selected-links=" /99002786/act2/pulls" href="https://github.com/99002786/act2/pulls">
                    Pull requests
</a>                </li>
                <li data-menu-item="actions-tab" hidden="">
                  <a role="menuitem" class="js-selected-navigation-item dropdown-item" data-selected-links=" /99002786/act2/actions" href="https://github.com/99002786/act2/actions">
                    Actions
</a>                </li>
                <li data-menu-item="projects-tab" hidden="">
                  <a role="menuitem" class="js-selected-navigation-item dropdown-item" data-selected-links=" /99002786/act2/projects" href="https://github.com/99002786/act2/projects">
                    Projects
</a>                </li>
                <li data-menu-item="wiki-tab" hidden="">
                  <a role="menuitem" class="js-selected-navigation-item dropdown-item" data-selected-links=" /99002786/act2/wiki" href="https://github.com/99002786/act2/wiki">
                    Wiki
</a>                </li>
                <li data-menu-item="security-tab" hidden="">
                  <a role="menuitem" class="js-selected-navigation-item dropdown-item" data-selected-links=" /99002786/act2/security" href="https://github.com/99002786/act2/security">
                    Security
</a>                </li>
                <li data-menu-item="insights-tab" hidden="">
                  <a role="menuitem" class="js-selected-navigation-item dropdown-item" data-selected-links=" /99002786/act2/pulse" href="https://github.com/99002786/act2/pulse">
                    Insights
</a>                </li>
                <li data-menu-item="settings-tab" hidden="">
                  <a role="menuitem" class="js-selected-navigation-item dropdown-item" data-selected-links=" /99002786/act2/settings" href="https://github.com/99002786/act2/settings">
                    Settings
</a>                </li>
            </ul>

</details-menu>
</div></details>    </div>

</nav>
  </div>


<div class="container-xl clearfix new-discussion-timeline p-0">
  <div class="repository-content ">

    
      
  

    


    <div class="file-box ">
      <!-- '"` --><!-- </textarea></xmp> --><form class="d-none js-blob-preview-form" action="https://github.com/99002786/act2/preview/main/calci-main/calci-main/function.h" accept-charset="UTF-8" method="post"><input type="hidden" name="authenticity_token" value="67HJE+24TGtQVAwZyCdccZIgTXXXA+Ui1m/xf8xpqe/krRdXOo7pRcwY1pN7wpOAudUY6eLAZ1BKBXAJK6NAcw==">
        <input type="hidden" name="code">
        <input type="hidden" name="commit">
        <input type="hidden" name="blobname">
        <input type="hidden" name="willcreatebranch">
        <input type="hidden" name="checkConflict">
</form>
      <!-- '"` --><!-- </textarea></xmp> --><form class="js-blob-form" id="new_blob" data-github-confirm-unload="Your edits will be lost." action="https://github.com/99002786/act2/tree-save/main/calci-main/calci-main/function.h" accept-charset="UTF-8" method="post"><input type="hidden" name="authenticity_token" value="nuytpQmEKyS1EOuPKxJpHBZhNjluA41G9FJCCIzI7qI1cV+jUYKl2tiBgMK9EuTryVL30zZMe4+49lZPt7UMog==">
        



<div class="d-flex flex-column height-full position-relative">
  <div class="breadcrumb d-flex flex-shrink-0 flex-items-center px-3 px-sm-6 px-lg-3">
      <span class="js-breadcrumb-container d-flex flex-items-center flex-wrap mr-sm-4 flex-auto">
        <span class="js-repo-root text-bold"><span class="js-path-segment d-inline-block wb-break-all"><a data-pjax="true" href="https://github.com/99002786/act2"><span>act2</span></a></span></span><span class="separator">/</span><span class="js-path-segment d-inline-block wb-break-all"><a data-pjax="true" href="https://github.com/99002786/act2/tree/main/calci-main"><span>calci-main</span></a></span><span class="separator">/</span><span class="js-path-segment d-inline-block wb-break-all"><a data-pjax="true" href="https://github.com/99002786/act2/tree/main/calci-main/calci-main"><span>calci-main</span></a></span><span class="separator">/</span>

        <input type="text" class="form-control js-blob-filename js-breadcrumb-nav mr-1 mt-1 mt-sm-0 col-12 width-sm-auto" name="filename" value="function.h" placeholder="Name your file…" aria-label="Name your file…">
          <span><a href="https://github.com/99002786/act2/blob/main/calci-main/calci-main/function.h" class="btn d-none d-md-inline-block">Cancel</a></span>
      </span>

      <div class="js-gitignore-template js-template-suggestion d-flex flex-shrink-0 flex-justify-end f5 flex-items-center hide-sm hide-md hide-lg  d-none" data-template-suggestion-pattern="^(.+\/)?\.gitignore$">
        <div class="mr-2">Want to use a <span class="text-mono f6">.gitignore</span> template?</div>
        <details class="details-reset details-overlay position-relative d-inline-block">
  <summary class="btn btn-sm select-menu-button" aria-haspopup="menu" role="button">
    <i>Choose .gitignore:</i>
    <span data-menu-button="">None</span>
  </summary>
  <details-menu class="select-menu-modal position-absolute right-0" style="z-index: 99;" role="menu">
    <div class="select-menu-header">
      <span class="select-menu-title">.gitignore</span>
    </div>

    <div class="select-menu-filters">
      <div class="select-menu-text-filter">
        <input type="text" id="context-ignore-filter-field" class="form-control js-filterable-field js-navigation-enable" placeholder="Filter ignores…" aria-label="Choose .gitignore type" autocomplete="off" autofocus="">
      </div>
    </div>

    <div class="select-menu-list">
      <div data-filterable-for="context-ignore-filter-field">
          <label tabindex="0" class="select-menu-item" role="menuitemradio">
            <input type="radio" name="gitignore" id="gitignore_Actionscript" value="Actionscript" data-template-url="https://github.com/site/gitignore/Actionscript">
            <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M13.78 4.22a.75.75 0 010 1.06l-7.25 7.25a.75.75 0 01-1.06 0L2.22 9.28a.75.75 0 011.06-1.06L6 10.94l6.72-6.72a.75.75 0 011.06 0z"></path></svg>
            <span class="text-normal select-menu-item-text" data-menu-button-text="">Actionscript</span>
          </label>
          <label tabindex="0" class="select-menu-item" role="menuitemradio">
            <input type="radio" name="gitignore" id="gitignore_Ada" value="Ada" data-template-url="https://github.com/site/gitignore/Ada">
            <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M13.78 4.22a.75.75 0 010 1.06l-7.25 7.25a.75.75 0 01-1.06 0L2.22 9.28a.75.75 0 011.06-1.06L6 10.94l6.72-6.72a.75.75 0 011.06 0z"></path></svg>
            <span class="text-normal select-menu-item-text" data-menu-button-text="">Ada</span>
          </label>
          <label tabindex="0" class="select-menu-item" role="menuitemradio">
            <input type="radio" name="gitignore" id="gitignore_Agda" value="Agda" data-template-url="https://github.com/site/gitignore/Agda">
            <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M13.78 4.22a.75.75 0 010 1.06l-7.25 7.25a.75.75 0 01-1.06 0L2.22 9.28a.75.75 0 011.06-1.06L6 10.94l6.72-6.72a.75.75 0 011.06 0z"></path></svg>
            <span class="text-normal select-menu-item-text" data-menu-button-text="">Agda</span>
          </label>
          <label tabindex="0" class="select-menu-item" role="menuitemradio">
            <input type="radio" name="gitignore" id="gitignore_Android" value="Android" data-template-url="https://github.com/site/gitignore/Android">
            <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M13.78 4.22a.75.75 0 010 1.06l-7.25 7.25a.75.75 0 01-1.06 0L2.22 9.28a.75.75 0 011.06-1.06L6 10.94l6.72-6.72a.75.75 0 011.06 0z"></path></svg>
            <span class="text-normal select-menu-item-text" data-menu-button-text="">Android</span>
          </label>
          <label tabindex="0" class="select-menu-item" role="menuitemradio">
            <input type="radio" name="gitignore" id="gitignore_AppEngine" value="AppEngine" data-template-url="https://github.com/site/gitignore/AppEngine">
            <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M13.78 4.22a.75.75 0 010 1.06l-7.25 7.25a.75.75 0 01-1.06 0L2.22 9.28a.75.75 0 011.06-1.06L6 10.94l6.72-6.72a.75.75 0 011.06 0z"></path></svg>
            <span class="text-normal select-menu-item-text" data-menu-button-text="">AppEngine</span>
          </label>
          <label tabindex="0" class="select-menu-item" role="menuitemradio">
            <input type="radio" name="gitignore" id="gitignore_AppceleratorTitanium" value="AppceleratorTitanium" data-template-url="https://github.com/site/gitignore/AppceleratorTitanium">
            <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M13.78 4.22a.75.75 0 010 1.06l-7.25 7.25a.75.75 0 01-1.06 0L2.22 9.28a.75.75 0 011.06-1.06L6 10.94l6.72-6.72a.75.75 0 011.06 0z"></path></svg>
            <span class="text-normal select-menu-item-text" data-menu-button-text="">AppceleratorTitanium</span>
          </label>
          <label tabindex="0" class="select-menu-item" role="menuitemradio">
            <input type="radio" name="gitignore" id="gitignore_ArchLinuxPackages" value="ArchLinuxPackages" data-template-url="https://github.com/site/gitignore/ArchLinuxPackages">
            <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M13.78 4.22a.75.75 0 010 1.06l-7.25 7.25a.75.75 0 01-1.06 0L2.22 9.28a.75.75 0 011.06-1.06L6 10.94l6.72-6.72a.75.75 0 011.06 0z"></path></svg>
            <span class="text-normal select-menu-item-text" data-menu-button-text="">ArchLinuxPackages</span>
          </label>
          <label tabindex="0" class="select-menu-item" role="menuitemradio">
            <input type="radio" name="gitignore" id="gitignore_Autotools" value="Autotools" data-template-url="https://github.com/site/gitignore/Autotools">
            <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M13.78 4.22a.75.75 0 010 1.06l-7.25 7.25a.75.75 0 01-1.06 0L2.22 9.28a.75.75 0 011.06-1.06L6 10.94l6.72-6.72a.75.75 0 011.06 0z"></path></svg>
            <span class="text-normal select-menu-item-text" data-menu-button-text="">Autotools</span>
          </label>
          <label tabindex="0" class="select-menu-item" role="menuitemradio">
            <input type="radio" name="gitignore" id="gitignore_C" value="C" data-template-url="https://github.com/site/gitignore/C">
            <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M13.78 4.22a.75.75 0 010 1.06l-7.25 7.25a.75.75 0 01-1.06 0L2.22 9.28a.75.75 0 011.06-1.06L6 10.94l6.72-6.72a.75.75 0 011.06 0z"></path></svg>
            <span class="text-normal select-menu-item-text" data-menu-button-text="">C</span>
          </label>
          <label tabindex="0" class="select-menu-item" role="menuitemradio">
            <input type="radio" name="gitignore" id="gitignore_C__" value="C++" data-template-url="https://github.com/site/gitignore/C++">
            <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M13.78 4.22a.75.75 0 010 1.06l-7.25 7.25a.75.75 0 01-1.06 0L2.22 9.28a.75.75 0 011.06-1.06L6 10.94l6.72-6.72a.75.75 0 011.06 0z"></path></svg>
            <span class="text-normal select-menu-item-text" data-menu-button-text="">C++</span>
          </label>
          <label tabindex="0" class="select-menu-item" role="menuitemradio">
            <input type="radio" name="gitignore" id="gitignore_CFWheels" value="CFWheels" data-template-url="https://github.com/site/gitignore/CFWheels">
            <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M13.78 4.22a.75.75 0 010 1.06l-7.25 7.25a.75.75 0 01-1.06 0L2.22 9.28a.75.75 0 011.06-1.06L6 10.94l6.72-6.72a.75.75 0 011.06 0z"></path></svg>
            <span class="text-normal select-menu-item-text" data-menu-button-text="">CFWheels</span>
          </label>
          <label tabindex="0" class="select-menu-item" role="menuitemradio">
            <input type="radio" name="gitignore" id="gitignore_CMake" value="CMake" data-template-url="https://github.com/site/gitignore/CMake">
            <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M13.78 4.22a.75.75 0 010 1.06l-7.25 7.25a.75.75 0 01-1.06 0L2.22 9.28a.75.75 0 011.06-1.06L6 10.94l6.72-6.72a.75.75 0 011.06 0z"></path></svg>
            <span class="text-normal select-menu-item-text" data-menu-button-text="">CMake</span>
          </label>
          <label tabindex="0" class="select-menu-item" role="menuitemradio">
            <input type="radio" name="gitignore" id="gitignore_CUDA" value="CUDA" data-template-url="https://github.com/site/gitignore/CUDA">
            <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M13.78 4.22a.75.75 0 010 1.06l-7.25 7.25a.75.75 0 01-1.06 0L2.22 9.28a.75.75 0 011.06-1.06L6 10.94l6.72-6.72a.75.75 0 011.06 0z"></path></svg>
            <span class="text-normal select-menu-item-text" data-menu-button-text="">CUDA</span>
          </label>
          <label tabindex="0" class="select-menu-item" role="menuitemradio">
            <input type="radio" name="gitignore" id="gitignore_CakePHP" value="CakePHP" data-template-url="https://github.com/site/gitignore/CakePHP">
            <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M13.78 4.22a.75.75 0 010 1.06l-7.25 7.25a.75.75 0 01-1.06 0L2.22 9.28a.75.75 0 011.06-1.06L6 10.94l6.72-6.72a.75.75 0 011.06 0z"></path></svg>
            <span class="text-normal select-menu-item-text" data-menu-button-text="">CakePHP</span>
          </label>
          <label tabindex="0" class="select-menu-item" role="menuitemradio">
            <input type="radio" name="gitignore" id="gitignore_ChefCookbook" value="ChefCookbook" data-template-url="https://github.com/site/gitignore/ChefCookbook">
            <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M13.78 4.22a.75.75 0 010 1.06l-7.25 7.25a.75.75 0 01-1.06 0L2.22 9.28a.75.75 0 011.06-1.06L6 10.94l6.72-6.72a.75.75 0 011.06 0z"></path></svg>
            <span class="text-normal select-menu-item-text" data-menu-button-text="">ChefCookbook</span>
          </label>
          <label tabindex="0" class="select-menu-item" role="menuitemradio">
            <input type="radio" name="gitignore" id="gitignore_Clojure" value="Clojure" data-template-url="https://github.com/site/gitignore/Clojure">
            <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M13.78 4.22a.75.75 0 010 1.06l-7.25 7.25a.75.75 0 01-1.06 0L2.22 9.28a.75.75 0 011.06-1.06L6 10.94l6.72-6.72a.75.75 0 011.06 0z"></path></svg>
            <span class="text-normal select-menu-item-text" data-menu-button-text="">Clojure</span>
          </label>
          <label tabindex="0" class="select-menu-item" role="menuitemradio">
            <input type="radio" name="gitignore" id="gitignore_CodeIgniter" value="CodeIgniter" data-template-url="https://github.com/site/gitignore/CodeIgniter">
            <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M13.78 4.22a.75.75 0 010 1.06l-7.25 7.25a.75.75 0 01-1.06 0L2.22 9.28a.75.75 0 011.06-1.06L6 10.94l6.72-6.72a.75.75 0 011.06 0z"></path></svg>
            <span class="text-normal select-menu-item-text" data-menu-button-text="">CodeIgniter</span>
          </label>
          <label tabindex="0" class="select-menu-item" role="menuitemradio">
            <input type="radio" name="gitignore" id="gitignore_CommonLisp" value="CommonLisp" data-template-url="https://github.com/site/gitignore/CommonLisp">
            <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M13.78 4.22a.75.75 0 010 1.06l-7.25 7.25a.75.75 0 01-1.06 0L2.22 9.28a.75.75 0 011.06-1.06L6 10.94l6.72-6.72a.75.75 0 011.06 0z"></path></svg>
            <span class="text-normal select-menu-item-text" data-menu-button-text="">CommonLisp</span>
          </label>
          <label tabindex="0" class="select-menu-item" role="menuitemradio">
            <input type="radio" name="gitignore" id="gitignore_Composer" value="Composer" data-template-url="https://github.com/site/gitignore/Composer">
            <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M13.78 4.22a.75.75 0 010 1.06l-7.25 7.25a.75.75 0 01-1.06 0L2.22 9.28a.75.75 0 011.06-1.06L6 10.94l6.72-6.72a.75.75 0 011.06 0z"></path></svg>
            <span class="text-normal select-menu-item-text" data-menu-button-text="">Composer</span>
          </label>
          <label tabindex="0" class="select-menu-item" role="menuitemradio">
            <input type="radio" name="gitignore" id="gitignore_Concrete5" value="Concrete5" data-template-url="https://github.com/site/gitignore/Concrete5">
            <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M13.78 4.22a.75.75 0 010 1.06l-7.25 7.25a.75.75 0 01-1.06 0L2.22 9.28a.75.75 0 011.06-1.06L6 10.94l6.72-6.72a.75.75 0 011.06 0z"></path></svg>
            <span class="text-normal select-menu-item-text" data-menu-button-text="">Concrete5</span>
          </label>
          <label tabindex="0" class="select-menu-item" role="menuitemradio">
            <input type="radio" name="gitignore" id="gitignore_Coq" value="Coq" data-template-url="https://github.com/site/gitignore/Coq">
            <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M13.78 4.22a.75.75 0 010 1.06l-7.25 7.25a.75.75 0 01-1.06 0L2.22 9.28a.75.75 0 011.06-1.06L6 10.94l6.72-6.72a.75.75 0 011.06 0z"></path></svg>
            <span class="text-normal select-menu-item-text" data-menu-button-text="">Coq</span>
          </label>
          <label tabindex="0" class="select-menu-item" role="menuitemradio">
            <input type="radio" name="gitignore" id="gitignore_CraftCMS" value="CraftCMS" data-template-url="https://github.com/site/gitignore/CraftCMS">
            <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M13.78 4.22a.75.75 0 010 1.06l-7.25 7.25a.75.75 0 01-1.06 0L2.22 9.28a.75.75 0 011.06-1.06L6 10.94l6.72-6.72a.75.75 0 011.06 0z"></path></svg>
            <span class="text-normal select-menu-item-text" data-menu-button-text="">CraftCMS</span>
          </label>
          <label tabindex="0" class="select-menu-item" role="menuitemradio">
            <input type="radio" name="gitignore" id="gitignore_D" value="D" data-template-url="https://github.com/site/gitignore/D">
            <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M13.78 4.22a.75.75 0 010 1.06l-7.25 7.25a.75.75 0 01-1.06 0L2.22 9.28a.75.75 0 011.06-1.06L6 10.94l6.72-6.72a.75.75 0 011.06 0z"></path></svg>
            <span class="text-normal select-menu-item-text" data-menu-button-text="">D</span>
          </label>
          <label tabindex="0" class="select-menu-item" role="menuitemradio">
            <input type="radio" name="gitignore" id="gitignore_DM" value="DM" data-template-url="https://github.com/site/gitignore/DM">
            <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M13.78 4.22a.75.75 0 010 1.06l-7.25 7.25a.75.75 0 01-1.06 0L2.22 9.28a.75.75 0 011.06-1.06L6 10.94l6.72-6.72a.75.75 0 011.06 0z"></path></svg>
            <span class="text-normal select-menu-item-text" data-menu-button-text="">DM</span>
          </label>
          <label tabindex="0" class="select-menu-item" role="menuitemradio">
            <input type="radio" name="gitignore" id="gitignore_Dart" value="Dart" data-template-url="https://github.com/site/gitignore/Dart">
            <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M13.78 4.22a.75.75 0 010 1.06l-7.25 7.25a.75.75 0 01-1.06 0L2.22 9.28a.75.75 0 011.06-1.06L6 10.94l6.72-6.72a.75.75 0 011.06 0z"></path></svg>
            <span class="text-normal select-menu-item-text" data-menu-button-text="">Dart</span>
          </label>
          <label tabindex="0" class="select-menu-item" role="menuitemradio">
            <input type="radio" name="gitignore" id="gitignore_Delphi" value="Delphi" data-template-url="https://github.com/site/gitignore/Delphi">
            <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M13.78 4.22a.75.75 0 010 1.06l-7.25 7.25a.75.75 0 01-1.06 0L2.22 9.28a.75.75 0 011.06-1.06L6 10.94l6.72-6.72a.75.75 0 011.06 0z"></path></svg>
            <span class="text-normal select-menu-item-text" data-menu-button-text="">Delphi</span>
          </label>
          <label tabindex="0" class="select-menu-item" role="menuitemradio">
            <input type="radio" name="gitignore" id="gitignore_Drupal" value="Drupal" data-template-url="https://github.com/site/gitignore/Drupal">
            <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M13.78 4.22a.75.75 0 010 1.06l-7.25 7.25a.75.75 0 01-1.06 0L2.22 9.28a.75.75 0 011.06-1.06L6 10.94l6.72-6.72a.75.75 0 011.06 0z"></path></svg>
            <span class="text-normal select-menu-item-text" data-menu-button-text="">Drupal</span>
          </label>
          <label tabindex="0" class="select-menu-item" role="menuitemradio">
            <input type="radio" name="gitignore" id="gitignore_EPiServer" value="EPiServer" data-template-url="https://github.com/site/gitignore/EPiServer">
            <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M13.78 4.22a.75.75 0 010 1.06l-7.25 7.25a.75.75 0 01-1.06 0L2.22 9.28a.75.75 0 011.06-1.06L6 10.94l6.72-6.72a.75.75 0 011.06 0z"></path></svg>
            <span class="text-normal select-menu-item-text" data-menu-button-text="">EPiServer</span>
          </label>
          <label tabindex="0" class="select-menu-item" role="menuitemradio">
            <input type="radio" name="gitignore" id="gitignore_Eagle" value="Eagle" data-template-url="https://github.com/site/gitignore/Eagle">
            <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M13.78 4.22a.75.75 0 010 1.06l-7.25 7.25a.75.75 0 01-1.06 0L2.22 9.28a.75.75 0 011.06-1.06L6 10.94l6.72-6.72a.75.75 0 011.06 0z"></path></svg>
            <span class="text-normal select-menu-item-text" data-menu-button-text="">Eagle</span>
          </label>
          <label tabindex="0" class="select-menu-item" role="menuitemradio">
            <input type="radio" name="gitignore" id="gitignore_Elisp" value="Elisp" data-template-url="https://github.com/site/gitignore/Elisp">
            <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M13.78 4.22a.75.75 0 010 1.06l-7.25 7.25a.75.75 0 01-1.06 0L2.22 9.28a.75.75 0 011.06-1.06L6 10.94l6.72-6.72a.75.75 0 011.06 0z"></path></svg>
            <span class="text-normal select-menu-item-text" data-menu-button-text="">Elisp</span>
          </label>
          <label tabindex="0" class="select-menu-item" role="menuitemradio">
            <input type="radio" name="gitignore" id="gitignore_Elixir" value="Elixir" data-template-url="https://github.com/site/gitignore/Elixir">
            <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M13.78 4.22a.75.75 0 010 1.06l-7.25 7.25a.75.75 0 01-1.06 0L2.22 9.28a.75.75 0 011.06-1.06L6 10.94l6.72-6.72a.75.75 0 011.06 0z"></path></svg>
            <span class="text-normal select-menu-item-text" data-menu-button-text="">Elixir</span>
          </label>
          <label tabindex="0" class="select-menu-item" role="menuitemradio">
            <input type="radio" name="gitignore" id="gitignore_Elm" value="Elm" data-template-url="https://github.com/site/gitignore/Elm">
            <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M13.78 4.22a.75.75 0 010 1.06l-7.25 7.25a.75.75 0 01-1.06 0L2.22 9.28a.75.75 0 011.06-1.06L6 10.94l6.72-6.72a.75.75 0 011.06 0z"></path></svg>
            <span class="text-normal select-menu-item-text" data-menu-button-text="">Elm</span>
          </label>
          <label tabindex="0" class="select-menu-item" role="menuitemradio">
            <input type="radio" name="gitignore" id="gitignore_Erlang" value="Erlang" data-template-url="https://github.com/site/gitignore/Erlang">
            <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M13.78 4.22a.75.75 0 010 1.06l-7.25 7.25a.75.75 0 01-1.06 0L2.22 9.28a.75.75 0 011.06-1.06L6 10.94l6.72-6.72a.75.75 0 011.06 0z"></path></svg>
            <span class="text-normal select-menu-item-text" data-menu-button-text="">Erlang</span>
          </label>
          <label tabindex="0" class="select-menu-item" role="menuitemradio">
            <input type="radio" name="gitignore" id="gitignore_ExpressionEngine" value="ExpressionEngine" data-template-url="https://github.com/site/gitignore/ExpressionEngine">
            <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M13.78 4.22a.75.75 0 010 1.06l-7.25 7.25a.75.75 0 01-1.06 0L2.22 9.28a.75.75 0 011.06-1.06L6 10.94l6.72-6.72a.75.75 0 011.06 0z"></path></svg>
            <span class="text-normal select-menu-item-text" data-menu-button-text="">ExpressionEngine</span>
          </label>
          <label tabindex="0" class="select-menu-item" role="menuitemradio">
            <input type="radio" name="gitignore" id="gitignore_ExtJs" value="ExtJs" data-template-url="https://github.com/site/gitignore/ExtJs">
            <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M13.78 4.22a.75.75 0 010 1.06l-7.25 7.25a.75.75 0 01-1.06 0L2.22 9.28a.75.75 0 011.06-1.06L6 10.94l6.72-6.72a.75.75 0 011.06 0z"></path></svg>
            <span class="text-normal select-menu-item-text" data-menu-button-text="">ExtJs</span>
          </label>
          <label tabindex="0" class="select-menu-item" role="menuitemradio">
            <input type="radio" name="gitignore" id="gitignore_Fancy" value="Fancy" data-template-url="https://github.com/site/gitignore/Fancy">
            <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M13.78 4.22a.75.75 0 010 1.06l-7.25 7.25a.75.75 0 01-1.06 0L2.22 9.28a.75.75 0 011.06-1.06L6 10.94l6.72-6.72a.75.75 0 011.06 0z"></path></svg>
            <span class="text-normal select-menu-item-text" data-menu-button-text="">Fancy</span>
          </label>
          <label tabindex="0" class="select-menu-item" role="menuitemradio">
            <input type="radio" name="gitignore" id="gitignore_Finale" value="Finale" data-template-url="https://github.com/site/gitignore/Finale">
            <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M13.78 4.22a.75.75 0 010 1.06l-7.25 7.25a.75.75 0 01-1.06 0L2.22 9.28a.75.75 0 011.06-1.06L6 10.94l6.72-6.72a.75.75 0 011.06 0z"></path></svg>
            <span class="text-normal select-menu-item-text" data-menu-button-text="">Finale</span>
          </label>
          <label tabindex="0" class="select-menu-item" role="menuitemradio">
            <input type="radio" name="gitignore" id="gitignore_ForceDotCom" value="ForceDotCom" data-template-url="https://github.com/site/gitignore/ForceDotCom">
            <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M13.78 4.22a.75.75 0 010 1.06l-7.25 7.25a.75.75 0 01-1.06 0L2.22 9.28a.75.75 0 011.06-1.06L6 10.94l6.72-6.72a.75.75 0 011.06 0z"></path></svg>
            <span class="text-normal select-menu-item-text" data-menu-button-text="">ForceDotCom</span>
          </label>
          <label tabindex="0" class="select-menu-item" role="menuitemradio">
            <input type="radio" name="gitignore" id="gitignore_Fortran" value="Fortran" data-template-url="https://github.com/site/gitignore/Fortran">
            <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M13.78 4.22a.75.75 0 010 1.06l-7.25 7.25a.75.75 0 01-1.06 0L2.22 9.28a.75.75 0 011.06-1.06L6 10.94l6.72-6.72a.75.75 0 011.06 0z"></path></svg>
            <span class="text-normal select-menu-item-text" data-menu-button-text="">Fortran</span>
          </label>
          <label tabindex="0" class="select-menu-item" role="menuitemradio">
            <input type="radio" name="gitignore" id="gitignore_FuelPHP" value="FuelPHP" data-template-url="https://github.com/site/gitignore/FuelPHP">
            <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M13.78 4.22a.75.75 0 010 1.06l-7.25 7.25a.75.75 0 01-1.06 0L2.22 9.28a.75.75 0 011.06-1.06L6 10.94l6.72-6.72a.75.75 0 011.06 0z"></path></svg>
            <span class="text-normal select-menu-item-text" data-menu-button-text="">FuelPHP</span>
          </label>
          <label tabindex="0" class="select-menu-item" role="menuitemradio">
            <input type="radio" name="gitignore" id="gitignore_GWT" value="GWT" data-template-url="https://github.com/site/gitignore/GWT">
            <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M13.78 4.22a.75.75 0 010 1.06l-7.25 7.25a.75.75 0 01-1.06 0L2.22 9.28a.75.75 0 011.06-1.06L6 10.94l6.72-6.72a.75.75 0 011.06 0z"></path></svg>
            <span class="text-normal select-menu-item-text" data-menu-button-text="">GWT</span>
          </label>
          <label tabindex="0" class="select-menu-item" role="menuitemradio">
            <input type="radio" name="gitignore" id="gitignore_GitBook" value="GitBook" data-template-url="https://github.com/site/gitignore/GitBook">
            <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M13.78 4.22a.75.75 0 010 1.06l-7.25 7.25a.75.75 0 01-1.06 0L2.22 9.28a.75.75 0 011.06-1.06L6 10.94l6.72-6.72a.75.75 0 011.06 0z"></path></svg>
            <span class="text-normal select-menu-item-text" data-menu-button-text="">GitBook</span>
          </label>
          <label tabindex="0" class="select-menu-item" role="menuitemradio">
            <input type="radio" name="gitignore" id="gitignore_Go" value="Go" data-template-url="https://github.com/site/gitignore/Go">
            <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M13.78 4.22a.75.75 0 010 1.06l-7.25 7.25a.75.75 0 01-1.06 0L2.22 9.28a.75.75 0 011.06-1.06L6 10.94l6.72-6.72a.75.75 0 011.06 0z"></path></svg>
            <span class="text-normal select-menu-item-text" data-menu-button-text="">Go</span>
          </label>
          <label tabindex="0" class="select-menu-item" role="menuitemradio">
            <input type="radio" name="gitignore" id="gitignore_Godot" value="Godot" data-template-url="https://github.com/site/gitignore/Godot">
            <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M13.78 4.22a.75.75 0 010 1.06l-7.25 7.25a.75.75 0 01-1.06 0L2.22 9.28a.75.75 0 011.06-1.06L6 10.94l6.72-6.72a.75.75 0 011.06 0z"></path></svg>
            <span class="text-normal select-menu-item-text" data-menu-button-text="">Godot</span>
          </label>
          <label tabindex="0" class="select-menu-item" role="menuitemradio">
            <input type="radio" name="gitignore" id="gitignore_Gradle" value="Gradle" data-template-url="https://github.com/site/gitignore/Gradle">
            <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M13.78 4.22a.75.75 0 010 1.06l-7.25 7.25a.75.75 0 01-1.06 0L2.22 9.28a.75.75 0 011.06-1.06L6 10.94l6.72-6.72a.75.75 0 011.06 0z"></path></svg>
            <span class="text-normal select-menu-item-text" data-menu-button-text="">Gradle</span>
          </label>
          <label tabindex="0" class="select-menu-item" role="menuitemradio">
            <input type="radio" name="gitignore" id="gitignore_Grails" value="Grails" data-template-url="https://github.com/site/gitignore/Grails">
            <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M13.78 4.22a.75.75 0 010 1.06l-7.25 7.25a.75.75 0 01-1.06 0L2.22 9.28a.75.75 0 011.06-1.06L6 10.94l6.72-6.72a.75.75 0 011.06 0z"></path></svg>
            <span class="text-normal select-menu-item-text" data-menu-button-text="">Grails</span>
          </label>
          <label tabindex="0" class="select-menu-item" role="menuitemradio">
            <input type="radio" name="gitignore" id="gitignore_Haskell" value="Haskell" data-template-url="https://github.com/site/gitignore/Haskell">
            <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M13.78 4.22a.75.75 0 010 1.06l-7.25 7.25a.75.75 0 01-1.06 0L2.22 9.28a.75.75 0 011.06-1.06L6 10.94l6.72-6.72a.75.75 0 011.06 0z"></path></svg>
            <span class="text-normal select-menu-item-text" data-menu-button-text="">Haskell</span>
          </label>
          <label tabindex="0" class="select-menu-item" role="menuitemradio">
            <input type="radio" name="gitignore" id="gitignore_IGORPro" value="IGORPro" data-template-url="https://github.com/site/gitignore/IGORPro">
            <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M13.78 4.22a.75.75 0 010 1.06l-7.25 7.25a.75.75 0 01-1.06 0L2.22 9.28a.75.75 0 011.06-1.06L6 10.94l6.72-6.72a.75.75 0 011.06 0z"></path></svg>
            <span class="text-normal select-menu-item-text" data-menu-button-text="">IGORPro</span>
          </label>
          <label tabindex="0" class="select-menu-item" role="menuitemradio">
            <input type="radio" name="gitignore" id="gitignore_Idris" value="Idris" data-template-url="https://github.com/site/gitignore/Idris">
            <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M13.78 4.22a.75.75 0 010 1.06l-7.25 7.25a.75.75 0 01-1.06 0L2.22 9.28a.75.75 0 011.06-1.06L6 10.94l6.72-6.72a.75.75 0 011.06 0z"></path></svg>
            <span class="text-normal select-menu-item-text" data-menu-button-text="">Idris</span>
          </label>
          <label tabindex="0" class="select-menu-item" role="menuitemradio">
            <input type="radio" name="gitignore" id="gitignore_JENKINS_HOME" value="JENKINS_HOME" data-template-url="https://github.com/site/gitignore/JENKINS_HOME">
            <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M13.78 4.22a.75.75 0 010 1.06l-7.25 7.25a.75.75 0 01-1.06 0L2.22 9.28a.75.75 0 011.06-1.06L6 10.94l6.72-6.72a.75.75 0 011.06 0z"></path></svg>
            <span class="text-normal select-menu-item-text" data-menu-button-text="">JENKINS_HOME</span>
          </label>
          <label tabindex="0" class="select-menu-item" role="menuitemradio">
            <input type="radio" name="gitignore" id="gitignore_Java" value="Java" data-template-url="https://github.com/site/gitignore/Java">
            <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M13.78 4.22a.75.75 0 010 1.06l-7.25 7.25a.75.75 0 01-1.06 0L2.22 9.28a.75.75 0 011.06-1.06L6 10.94l6.72-6.72a.75.75 0 011.06 0z"></path></svg>
            <span class="text-normal select-menu-item-text" data-menu-button-text="">Java</span>
          </label>
          <label tabindex="0" class="select-menu-item" role="menuitemradio">
            <input type="radio" name="gitignore" id="gitignore_Jboss" value="Jboss" data-template-url="https://github.com/site/gitignore/Jboss">
            <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M13.78 4.22a.75.75 0 010 1.06l-7.25 7.25a.75.75 0 01-1.06 0L2.22 9.28a.75.75 0 011.06-1.06L6 10.94l6.72-6.72a.75.75 0 011.06 0z"></path></svg>
            <span class="text-normal select-menu-item-text" data-menu-button-text="">Jboss</span>
          </label>
          <label tabindex="0" class="select-menu-item" role="menuitemradio">
            <input type="radio" name="gitignore" id="gitignore_Jekyll" value="Jekyll" data-template-url="https://github.com/site/gitignore/Jekyll">
            <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M13.78 4.22a.75.75 0 010 1.06l-7.25 7.25a.75.75 0 01-1.06 0L2.22 9.28a.75.75 0 011.06-1.06L6 10.94l6.72-6.72a.75.75 0 011.06 0z"></path></svg>
            <span class="text-normal select-menu-item-text" data-menu-button-text="">Jekyll</span>
          </label>
          <label tabindex="0" class="select-menu-item" role="menuitemradio">
            <input type="radio" name="gitignore" id="gitignore_Joomla" value="Joomla" data-template-url="https://github.com/site/gitignore/Joomla">
            <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M13.78 4.22a.75.75 0 010 1.06l-7.25 7.25a.75.75 0 01-1.06 0L2.22 9.28a.75.75 0 011.06-1.06L6 10.94l6.72-6.72a.75.75 0 011.06 0z"></path></svg>
            <span class="text-normal select-menu-item-text" data-menu-button-text="">Joomla</span>
          </label>
          <label tabindex="0" class="select-menu-item" role="menuitemradio">
            <input type="radio" name="gitignore" id="gitignore_Julia" value="Julia" data-template-url="https://github.com/site/gitignore/Julia">
            <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M13.78 4.22a.75.75 0 010 1.06l-7.25 7.25a.75.75 0 01-1.06 0L2.22 9.28a.75.75 0 011.06-1.06L6 10.94l6.72-6.72a.75.75 0 011.06 0z"></path></svg>
            <span class="text-normal select-menu-item-text" data-menu-button-text="">Julia</span>
          </label>
          <label tabindex="0" class="select-menu-item" role="menuitemradio">
            <input type="radio" name="gitignore" id="gitignore_KiCAD" value="KiCAD" data-template-url="https://github.com/site/gitignore/KiCAD">
            <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M13.78 4.22a.75.75 0 010 1.06l-7.25 7.25a.75.75 0 01-1.06 0L2.22 9.28a.75.75 0 011.06-1.06L6 10.94l6.72-6.72a.75.75 0 011.06 0z"></path></svg>
            <span class="text-normal select-menu-item-text" data-menu-button-text="">KiCAD</span>
          </label>
          <label tabindex="0" class="select-menu-item" role="menuitemradio">
            <input type="radio" name="gitignore" id="gitignore_Kohana" value="Kohana" data-template-url="https://github.com/site/gitignore/Kohana">
            <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M13.78 4.22a.75.75 0 010 1.06l-7.25 7.25a.75.75 0 01-1.06 0L2.22 9.28a.75.75 0 011.06-1.06L6 10.94l6.72-6.72a.75.75 0 011.06 0z"></path></svg>
            <span class="text-normal select-menu-item-text" data-menu-button-text="">Kohana</span>
          </label>
          <label tabindex="0" class="select-menu-item" role="menuitemradio">
            <input type="radio" name="gitignore" id="gitignore_Kotlin" value="Kotlin" data-template-url="https://github.com/site/gitignore/Kotlin">
            <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M13.78 4.22a.75.75 0 010 1.06l-7.25 7.25a.75.75 0 01-1.06 0L2.22 9.28a.75.75 0 011.06-1.06L6 10.94l6.72-6.72a.75.75 0 011.06 0z"></path></svg>
            <span class="text-normal select-menu-item-text" data-menu-button-text="">Kotlin</span>
          </label>
          <label tabindex="0" class="select-menu-item" role="menuitemradio">
            <input type="radio" name="gitignore" id="gitignore_LabVIEW" value="LabVIEW" data-template-url="https://github.com/site/gitignore/LabVIEW">
            <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M13.78 4.22a.75.75 0 010 1.06l-7.25 7.25a.75.75 0 01-1.06 0L2.22 9.28a.75.75 0 011.06-1.06L6 10.94l6.72-6.72a.75.75 0 011.06 0z"></path></svg>
            <span class="text-normal select-menu-item-text" data-menu-button-text="">LabVIEW</span>
          </label>
          <label tabindex="0" class="select-menu-item" role="menuitemradio">
            <input type="radio" name="gitignore" id="gitignore_Laravel" value="Laravel" data-template-url="https://github.com/site/gitignore/Laravel">
            <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M13.78 4.22a.75.75 0 010 1.06l-7.25 7.25a.75.75 0 01-1.06 0L2.22 9.28a.75.75 0 011.06-1.06L6 10.94l6.72-6.72a.75.75 0 011.06 0z"></path></svg>
            <span class="text-normal select-menu-item-text" data-menu-button-text="">Laravel</span>
          </label>
          <label tabindex="0" class="select-menu-item" role="menuitemradio">
            <input type="radio" name="gitignore" id="gitignore_Leiningen" value="Leiningen" data-template-url="https://github.com/site/gitignore/Leiningen">
            <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M13.78 4.22a.75.75 0 010 1.06l-7.25 7.25a.75.75 0 01-1.06 0L2.22 9.28a.75.75 0 011.06-1.06L6 10.94l6.72-6.72a.75.75 0 011.06 0z"></path></svg>
            <span class="text-normal select-menu-item-text" data-menu-button-text="">Leiningen</span>
          </label>
          <label tabindex="0" class="select-menu-item" role="menuitemradio">
            <input type="radio" name="gitignore" id="gitignore_LemonStand" value="LemonStand" data-template-url="https://github.com/site/gitignore/LemonStand">
            <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M13.78 4.22a.75.75 0 010 1.06l-7.25 7.25a.75.75 0 01-1.06 0L2.22 9.28a.75.75 0 011.06-1.06L6 10.94l6.72-6.72a.75.75 0 011.06 0z"></path></svg>
            <span class="text-normal select-menu-item-text" data-menu-button-text="">LemonStand</span>
          </label>
          <label tabindex="0" class="select-menu-item" role="menuitemradio">
            <input type="radio" name="gitignore" id="gitignore_Lilypond" value="Lilypond" data-template-url="https://github.com/site/gitignore/Lilypond">
            <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M13.78 4.22a.75.75 0 010 1.06l-7.25 7.25a.75.75 0 01-1.06 0L2.22 9.28a.75.75 0 011.06-1.06L6 10.94l6.72-6.72a.75.75 0 011.06 0z"></path></svg>
            <span class="text-normal select-menu-item-text" data-menu-button-text="">Lilypond</span>
          </label>
          <label tabindex="0" class="select-menu-item" role="menuitemradio">
            <input type="radio" name="gitignore" id="gitignore_Lithium" value="Lithium" data-template-url="https://github.com/site/gitignore/Lithium">
            <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M13.78 4.22a.75.75 0 010 1.06l-7.25 7.25a.75.75 0 01-1.06 0L2.22 9.28a.75.75 0 011.06-1.06L6 10.94l6.72-6.72a.75.75 0 011.06 0z"></path></svg>
            <span class="text-normal select-menu-item-text" data-menu-button-text="">Lithium</span>
          </label>
          <label tabindex="0" class="select-menu-item" role="menuitemradio">
            <input type="radio" name="gitignore" id="gitignore_Lua" value="Lua" data-template-url="https://github.com/site/gitignore/Lua">
            <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M13.78 4.22a.75.75 0 010 1.06l-7.25 7.25a.75.75 0 01-1.06 0L2.22 9.28a.75.75 0 011.06-1.06L6 10.94l6.72-6.72a.75.75 0 011.06 0z"></path></svg>
            <span class="text-normal select-menu-item-text" data-menu-button-text="">Lua</span>
          </label>
          <label tabindex="0" class="select-menu-item" role="menuitemradio">
            <input type="radio" name="gitignore" id="gitignore_Magento" value="Magento" data-template-url="https://github.com/site/gitignore/Magento">
            <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M13.78 4.22a.75.75 0 010 1.06l-7.25 7.25a.75.75 0 01-1.06 0L2.22 9.28a.75.75 0 011.06-1.06L6 10.94l6.72-6.72a.75.75 0 011.06 0z"></path></svg>
            <span class="text-normal select-menu-item-text" data-menu-button-text="">Magento</span>
          </label>
          <label tabindex="0" class="select-menu-item" role="menuitemradio">
            <input type="radio" name="gitignore" id="gitignore_Maven" value="Maven" data-template-url="https://github.com/site/gitignore/Maven">
            <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M13.78 4.22a.75.75 0 010 1.06l-7.25 7.25a.75.75 0 01-1.06 0L2.22 9.28a.75.75 0 011.06-1.06L6 10.94l6.72-6.72a.75.75 0 011.06 0z"></path></svg>
            <span class="text-normal select-menu-item-text" data-menu-button-text="">Maven</span>
          </label>
          <label tabindex="0" class="select-menu-item" role="menuitemradio">
            <input type="radio" name="gitignore" id="gitignore_Mercury" value="Mercury" data-template-url="https://github.com/site/gitignore/Mercury">
            <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M13.78 4.22a.75.75 0 010 1.06l-7.25 7.25a.75.75 0 01-1.06 0L2.22 9.28a.75.75 0 011.06-1.06L6 10.94l6.72-6.72a.75.75 0 011.06 0z"></path></svg>
            <span class="text-normal select-menu-item-text" data-menu-button-text="">Mercury</span>
          </label>
          <label tabindex="0" class="select-menu-item" role="menuitemradio">
            <input type="radio" name="gitignore" id="gitignore_MetaProgrammingSystem" value="MetaProgrammingSystem" data-template-url="https://github.com/site/gitignore/MetaProgrammingSystem">
            <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M13.78 4.22a.75.75 0 010 1.06l-7.25 7.25a.75.75 0 01-1.06 0L2.22 9.28a.75.75 0 011.06-1.06L6 10.94l6.72-6.72a.75.75 0 011.06 0z"></path></svg>
            <span class="text-normal select-menu-item-text" data-menu-button-text="">MetaProgrammingSystem</span>
          </label>
          <label tabindex="0" class="select-menu-item" role="menuitemradio">
            <input type="radio" name="gitignore" id="gitignore_Nim" value="Nim" data-template-url="https://github.com/site/gitignore/Nim">
            <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M13.78 4.22a.75.75 0 010 1.06l-7.25 7.25a.75.75 0 01-1.06 0L2.22 9.28a.75.75 0 011.06-1.06L6 10.94l6.72-6.72a.75.75 0 011.06 0z"></path></svg>
            <span class="text-normal select-menu-item-text" data-menu-button-text="">Nim</span>
          </label>
          <label tabindex="0" class="select-menu-item" role="menuitemradio">
            <input type="radio" name="gitignore" id="gitignore_Node" value="Node" data-template-url="https://github.com/site/gitignore/Node">
            <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M13.78 4.22a.75.75 0 010 1.06l-7.25 7.25a.75.75 0 01-1.06 0L2.22 9.28a.75.75 0 011.06-1.06L6 10.94l6.72-6.72a.75.75 0 011.06 0z"></path></svg>
            <span class="text-normal select-menu-item-text" data-menu-button-text="">Node</span>
          </label>
          <label tabindex="0" class="select-menu-item" role="menuitemradio">
            <input type="radio" name="gitignore" id="gitignore_OCaml" value="OCaml" data-template-url="https://github.com/site/gitignore/OCaml">
            <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M13.78 4.22a.75.75 0 010 1.06l-7.25 7.25a.75.75 0 01-1.06 0L2.22 9.28a.75.75 0 011.06-1.06L6 10.94l6.72-6.72a.75.75 0 011.06 0z"></path></svg>
            <span class="text-normal select-menu-item-text" data-menu-button-text="">OCaml</span>
          </label>
          <label tabindex="0" class="select-menu-item" role="menuitemradio">
            <input type="radio" name="gitignore" id="gitignore_Objective-C" value="Objective-C" data-template-url="https://github.com/site/gitignore/Objective-C">
            <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M13.78 4.22a.75.75 0 010 1.06l-7.25 7.25a.75.75 0 01-1.06 0L2.22 9.28a.75.75 0 011.06-1.06L6 10.94l6.72-6.72a.75.75 0 011.06 0z"></path></svg>
            <span class="text-normal select-menu-item-text" data-menu-button-text="">Objective-C</span>
          </label>
          <label tabindex="0" class="select-menu-item" role="menuitemradio">
            <input type="radio" name="gitignore" id="gitignore_Opa" value="Opa" data-template-url="https://github.com/site/gitignore/Opa">
            <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M13.78 4.22a.75.75 0 010 1.06l-7.25 7.25a.75.75 0 01-1.06 0L2.22 9.28a.75.75 0 011.06-1.06L6 10.94l6.72-6.72a.75.75 0 011.06 0z"></path></svg>
            <span class="text-normal select-menu-item-text" data-menu-button-text="">Opa</span>
          </label>
          <label tabindex="0" class="select-menu-item" role="menuitemradio">
            <input type="radio" name="gitignore" id="gitignore_OracleForms" value="OracleForms" data-template-url="https://github.com/site/gitignore/OracleForms">
            <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M13.78 4.22a.75.75 0 010 1.06l-7.25 7.25a.75.75 0 01-1.06 0L2.22 9.28a.75.75 0 011.06-1.06L6 10.94l6.72-6.72a.75.75 0 011.06 0z"></path></svg>
            <span class="text-normal select-menu-item-text" data-menu-button-text="">OracleForms</span>
          </label>
          <label tabindex="0" class="select-menu-item" role="menuitemradio">
            <input type="radio" name="gitignore" id="gitignore_Packer" value="Packer" data-template-url="https://github.com/site/gitignore/Packer">
            <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M13.78 4.22a.75.75 0 010 1.06l-7.25 7.25a.75.75 0 01-1.06 0L2.22 9.28a.75.75 0 011.06-1.06L6 10.94l6.72-6.72a.75.75 0 011.06 0z"></path></svg>
            <span class="text-normal select-menu-item-text" data-menu-button-text="">Packer</span>
          </label>
          <label tabindex="0" class="select-menu-item" role="menuitemradio">
            <input type="radio" name="gitignore" id="gitignore_Perl" value="Perl" data-template-url="https://github.com/site/gitignore/Perl">
            <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M13.78 4.22a.75.75 0 010 1.06l-7.25 7.25a.75.75 0 01-1.06 0L2.22 9.28a.75.75 0 011.06-1.06L6 10.94l6.72-6.72a.75.75 0 011.06 0z"></path></svg>
            <span class="text-normal select-menu-item-text" data-menu-button-text="">Perl</span>
          </label>
          <label tabindex="0" class="select-menu-item" role="menuitemradio">
            <input type="radio" name="gitignore" id="gitignore_Perl6" value="Perl6" data-template-url="https://github.com/site/gitignore/Perl6">
            <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M13.78 4.22a.75.75 0 010 1.06l-7.25 7.25a.75.75 0 01-1.06 0L2.22 9.28a.75.75 0 011.06-1.06L6 10.94l6.72-6.72a.75.75 0 011.06 0z"></path></svg>
            <span class="text-normal select-menu-item-text" data-menu-button-text="">Perl6</span>
          </label>
          <label tabindex="0" class="select-menu-item" role="menuitemradio">
            <input type="radio" name="gitignore" id="gitignore_Phalcon" value="Phalcon" data-template-url="https://github.com/site/gitignore/Phalcon">
            <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M13.78 4.22a.75.75 0 010 1.06l-7.25 7.25a.75.75 0 01-1.06 0L2.22 9.28a.75.75 0 011.06-1.06L6 10.94l6.72-6.72a.75.75 0 011.06 0z"></path></svg>
            <span class="text-normal select-menu-item-text" data-menu-button-text="">Phalcon</span>
          </label>
          <label tabindex="0" class="select-menu-item" role="menuitemradio">
            <input type="radio" name="gitignore" id="gitignore_PlayFramework" value="PlayFramework" data-template-url="https://github.com/site/gitignore/PlayFramework">
            <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M13.78 4.22a.75.75 0 010 1.06l-7.25 7.25a.75.75 0 01-1.06 0L2.22 9.28a.75.75 0 011.06-1.06L6 10.94l6.72-6.72a.75.75 0 011.06 0z"></path></svg>
            <span class="text-normal select-menu-item-text" data-menu-button-text="">PlayFramework</span>
          </label>
          <label tabindex="0" class="select-menu-item" role="menuitemradio">
            <input type="radio" name="gitignore" id="gitignore_Plone" value="Plone" data-template-url="https://github.com/site/gitignore/Plone">
            <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M13.78 4.22a.75.75 0 010 1.06l-7.25 7.25a.75.75 0 01-1.06 0L2.22 9.28a.75.75 0 011.06-1.06L6 10.94l6.72-6.72a.75.75 0 011.06 0z"></path></svg>
            <span class="text-normal select-menu-item-text" data-menu-button-text="">Plone</span>
          </label>
          <label tabindex="0" class="select-menu-item" role="menuitemradio">
            <input type="radio" name="gitignore" id="gitignore_Prestashop" value="Prestashop" data-template-url="https://github.com/site/gitignore/Prestashop">
            <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M13.78 4.22a.75.75 0 010 1.06l-7.25 7.25a.75.75 0 01-1.06 0L2.22 9.28a.75.75 0 011.06-1.06L6 10.94l6.72-6.72a.75.75 0 011.06 0z"></path></svg>
            <span class="text-normal select-menu-item-text" data-menu-button-text="">Prestashop</span>
          </label>
          <label tabindex="0" class="select-menu-item" role="menuitemradio">
            <input type="radio" name="gitignore" id="gitignore_Processing" value="Processing" data-template-url="https://github.com/site/gitignore/Processing">
            <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M13.78 4.22a.75.75 0 010 1.06l-7.25 7.25a.75.75 0 01-1.06 0L2.22 9.28a.75.75 0 011.06-1.06L6 10.94l6.72-6.72a.75.75 0 011.06 0z"></path></svg>
            <span class="text-normal select-menu-item-text" data-menu-button-text="">Processing</span>
          </label>
          <label tabindex="0" class="select-menu-item" role="menuitemradio">
            <input type="radio" name="gitignore" id="gitignore_PureScript" value="PureScript" data-template-url="https://github.com/site/gitignore/PureScript">
            <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M13.78 4.22a.75.75 0 010 1.06l-7.25 7.25a.75.75 0 01-1.06 0L2.22 9.28a.75.75 0 011.06-1.06L6 10.94l6.72-6.72a.75.75 0 011.06 0z"></path></svg>
            <span class="text-normal select-menu-item-text" data-menu-button-text="">PureScript</span>
          </label>
          <label tabindex="0" class="select-menu-item" role="menuitemradio">
            <input type="radio" name="gitignore" id="gitignore_Python" value="Python" data-template-url="https://github.com/site/gitignore/Python">
            <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M13.78 4.22a.75.75 0 010 1.06l-7.25 7.25a.75.75 0 01-1.06 0L2.22 9.28a.75.75 0 011.06-1.06L6 10.94l6.72-6.72a.75.75 0 011.06 0z"></path></svg>
            <span class="text-normal select-menu-item-text" data-menu-button-text="">Python</span>
          </label>
          <label tabindex="0" class="select-menu-item" role="menuitemradio">
            <input type="radio" name="gitignore" id="gitignore_Qooxdoo" value="Qooxdoo" data-template-url="https://github.com/site/gitignore/Qooxdoo">
            <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M13.78 4.22a.75.75 0 010 1.06l-7.25 7.25a.75.75 0 01-1.06 0L2.22 9.28a.75.75 0 011.06-1.06L6 10.94l6.72-6.72a.75.75 0 011.06 0z"></path></svg>
            <span class="text-normal select-menu-item-text" data-menu-button-text="">Qooxdoo</span>
          </label>
          <label tabindex="0" class="select-menu-item" role="menuitemradio">
            <input type="radio" name="gitignore" id="gitignore_Qt" value="Qt" data-template-url="https://github.com/site/gitignore/Qt">
            <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M13.78 4.22a.75.75 0 010 1.06l-7.25 7.25a.75.75 0 01-1.06 0L2.22 9.28a.75.75 0 011.06-1.06L6 10.94l6.72-6.72a.75.75 0 011.06 0z"></path></svg>
            <span class="text-normal select-menu-item-text" data-menu-button-text="">Qt</span>
          </label>
          <label tabindex="0" class="select-menu-item" role="menuitemradio">
            <input type="radio" name="gitignore" id="gitignore_R" value="R" data-template-url="https://github.com/site/gitignore/R">
            <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M13.78 4.22a.75.75 0 010 1.06l-7.25 7.25a.75.75 0 01-1.06 0L2.22 9.28a.75.75 0 011.06-1.06L6 10.94l6.72-6.72a.75.75 0 011.06 0z"></path></svg>
            <span class="text-normal select-menu-item-text" data-menu-button-text="">R</span>
          </label>
          <label tabindex="0" class="select-menu-item" role="menuitemradio">
            <input type="radio" name="gitignore" id="gitignore_ROS" value="ROS" data-template-url="https://github.com/site/gitignore/ROS">
            <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M13.78 4.22a.75.75 0 010 1.06l-7.25 7.25a.75.75 0 01-1.06 0L2.22 9.28a.75.75 0 011.06-1.06L6 10.94l6.72-6.72a.75.75 0 011.06 0z"></path></svg>
            <span class="text-normal select-menu-item-text" data-menu-button-text="">ROS</span>
          </label>
          <label tabindex="0" class="select-menu-item" role="menuitemradio">
            <input type="radio" name="gitignore" id="gitignore_Rails" value="Rails" data-template-url="https://github.com/site/gitignore/Rails">
            <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M13.78 4.22a.75.75 0 010 1.06l-7.25 7.25a.75.75 0 01-1.06 0L2.22 9.28a.75.75 0 011.06-1.06L6 10.94l6.72-6.72a.75.75 0 011.06 0z"></path></svg>
            <span class="text-normal select-menu-item-text" data-menu-button-text="">Rails</span>
          </label>
          <label tabindex="0" class="select-menu-item" role="menuitemradio">
            <input type="radio" name="gitignore" id="gitignore_RhodesRhomobile" value="RhodesRhomobile" data-template-url="https://github.com/site/gitignore/RhodesRhomobile">
            <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M13.78 4.22a.75.75 0 010 1.06l-7.25 7.25a.75.75 0 01-1.06 0L2.22 9.28a.75.75 0 011.06-1.06L6 10.94l6.72-6.72a.75.75 0 011.06 0z"></path></svg>
            <span class="text-normal select-menu-item-text" data-menu-button-text="">RhodesRhomobile</span>
          </label>
          <label tabindex="0" class="select-menu-item" role="menuitemradio">
            <input type="radio" name="gitignore" id="gitignore_Ruby" value="Ruby" data-template-url="https://github.com/site/gitignore/Ruby">
            <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M13.78 4.22a.75.75 0 010 1.06l-7.25 7.25a.75.75 0 01-1.06 0L2.22 9.28a.75.75 0 011.06-1.06L6 10.94l6.72-6.72a.75.75 0 011.06 0z"></path></svg>
            <span class="text-normal select-menu-item-text" data-menu-button-text="">Ruby</span>
          </label>
          <label tabindex="0" class="select-menu-item" role="menuitemradio">
            <input type="radio" name="gitignore" id="gitignore_Rust" value="Rust" data-template-url="https://github.com/site/gitignore/Rust">
            <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M13.78 4.22a.75.75 0 010 1.06l-7.25 7.25a.75.75 0 01-1.06 0L2.22 9.28a.75.75 0 011.06-1.06L6 10.94l6.72-6.72a.75.75 0 011.06 0z"></path></svg>
            <span class="text-normal select-menu-item-text" data-menu-button-text="">Rust</span>
          </label>
          <label tabindex="0" class="select-menu-item" role="menuitemradio">
            <input type="radio" name="gitignore" id="gitignore_SCons" value="SCons" data-template-url="https://github.com/site/gitignore/SCons">
            <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M13.78 4.22a.75.75 0 010 1.06l-7.25 7.25a.75.75 0 01-1.06 0L2.22 9.28a.75.75 0 011.06-1.06L6 10.94l6.72-6.72a.75.75 0 011.06 0z"></path></svg>
            <span class="text-normal select-menu-item-text" data-menu-button-text="">SCons</span>
          </label>
          <label tabindex="0" class="select-menu-item" role="menuitemradio">
            <input type="radio" name="gitignore" id="gitignore_Sass" value="Sass" data-template-url="https://github.com/site/gitignore/Sass">
            <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M13.78 4.22a.75.75 0 010 1.06l-7.25 7.25a.75.75 0 01-1.06 0L2.22 9.28a.75.75 0 011.06-1.06L6 10.94l6.72-6.72a.75.75 0 011.06 0z"></path></svg>
            <span class="text-normal select-menu-item-text" data-menu-button-text="">Sass</span>
          </label>
          <label tabindex="0" class="select-menu-item" role="menuitemradio">
            <input type="radio" name="gitignore" id="gitignore_Scala" value="Scala" data-template-url="https://github.com/site/gitignore/Scala">
            <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M13.78 4.22a.75.75 0 010 1.06l-7.25 7.25a.75.75 0 01-1.06 0L2.22 9.28a.75.75 0 011.06-1.06L6 10.94l6.72-6.72a.75.75 0 011.06 0z"></path></svg>
            <span class="text-normal select-menu-item-text" data-menu-button-text="">Scala</span>
          </label>
          <label tabindex="0" class="select-menu-item" role="menuitemradio">
            <input type="radio" name="gitignore" id="gitignore_Scheme" value="Scheme" data-template-url="https://github.com/site/gitignore/Scheme">
            <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M13.78 4.22a.75.75 0 010 1.06l-7.25 7.25a.75.75 0 01-1.06 0L2.22 9.28a.75.75 0 011.06-1.06L6 10.94l6.72-6.72a.75.75 0 011.06 0z"></path></svg>
            <span class="text-normal select-menu-item-text" data-menu-button-text="">Scheme</span>
          </label>
          <label tabindex="0" class="select-menu-item" role="menuitemradio">
            <input type="radio" name="gitignore" id="gitignore_Scrivener" value="Scrivener" data-template-url="https://github.com/site/gitignore/Scrivener">
            <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M13.78 4.22a.75.75 0 010 1.06l-7.25 7.25a.75.75 0 01-1.06 0L2.22 9.28a.75.75 0 011.06-1.06L6 10.94l6.72-6.72a.75.75 0 011.06 0z"></path></svg>
            <span class="text-normal select-menu-item-text" data-menu-button-text="">Scrivener</span>
          </label>
          <label tabindex="0" class="select-menu-item" role="menuitemradio">
            <input type="radio" name="gitignore" id="gitignore_Sdcc" value="Sdcc" data-template-url="https://github.com/site/gitignore/Sdcc">
            <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M13.78 4.22a.75.75 0 010 1.06l-7.25 7.25a.75.75 0 01-1.06 0L2.22 9.28a.75.75 0 011.06-1.06L6 10.94l6.72-6.72a.75.75 0 011.06 0z"></path></svg>
            <span class="text-normal select-menu-item-text" data-menu-button-text="">Sdcc</span>
          </label>
          <label tabindex="0" class="select-menu-item" role="menuitemradio">
            <input type="radio" name="gitignore" id="gitignore_SeamGen" value="SeamGen" data-template-url="https://github.com/site/gitignore/SeamGen">
            <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M13.78 4.22a.75.75 0 010 1.06l-7.25 7.25a.75.75 0 01-1.06 0L2.22 9.28a.75.75 0 011.06-1.06L6 10.94l6.72-6.72a.75.75 0 011.06 0z"></path></svg>
            <span class="text-normal select-menu-item-text" data-menu-button-text="">SeamGen</span>
          </label>
          <label tabindex="0" class="select-menu-item" role="menuitemradio">
            <input type="radio" name="gitignore" id="gitignore_SketchUp" value="SketchUp" data-template-url="https://github.com/site/gitignore/SketchUp">
            <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M13.78 4.22a.75.75 0 010 1.06l-7.25 7.25a.75.75 0 01-1.06 0L2.22 9.28a.75.75 0 011.06-1.06L6 10.94l6.72-6.72a.75.75 0 011.06 0z"></path></svg>
            <span class="text-normal select-menu-item-text" data-menu-button-text="">SketchUp</span>
          </label>
          <label tabindex="0" class="select-menu-item" role="menuitemradio">
            <input type="radio" name="gitignore" id="gitignore_Smalltalk" value="Smalltalk" data-template-url="https://github.com/site/gitignore/Smalltalk">
            <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M13.78 4.22a.75.75 0 010 1.06l-7.25 7.25a.75.75 0 01-1.06 0L2.22 9.28a.75.75 0 011.06-1.06L6 10.94l6.72-6.72a.75.75 0 011.06 0z"></path></svg>
            <span class="text-normal select-menu-item-text" data-menu-button-text="">Smalltalk</span>
          </label>
          <label tabindex="0" class="select-menu-item" role="menuitemradio">
            <input type="radio" name="gitignore" id="gitignore_SugarCRM" value="SugarCRM" data-template-url="https://github.com/site/gitignore/SugarCRM">
            <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M13.78 4.22a.75.75 0 010 1.06l-7.25 7.25a.75.75 0 01-1.06 0L2.22 9.28a.75.75 0 011.06-1.06L6 10.94l6.72-6.72a.75.75 0 011.06 0z"></path></svg>
            <span class="text-normal select-menu-item-text" data-menu-button-text="">SugarCRM</span>
          </label>
          <label tabindex="0" class="select-menu-item" role="menuitemradio">
            <input type="radio" name="gitignore" id="gitignore_Swift" value="Swift" data-template-url="https://github.com/site/gitignore/Swift">
            <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M13.78 4.22a.75.75 0 010 1.06l-7.25 7.25a.75.75 0 01-1.06 0L2.22 9.28a.75.75 0 011.06-1.06L6 10.94l6.72-6.72a.75.75 0 011.06 0z"></path></svg>
            <span class="text-normal select-menu-item-text" data-menu-button-text="">Swift</span>
          </label>
          <label tabindex="0" class="select-menu-item" role="menuitemradio">
            <input type="radio" name="gitignore" id="gitignore_Symfony" value="Symfony" data-template-url="https://github.com/site/gitignore/Symfony">
            <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M13.78 4.22a.75.75 0 010 1.06l-7.25 7.25a.75.75 0 01-1.06 0L2.22 9.28a.75.75 0 011.06-1.06L6 10.94l6.72-6.72a.75.75 0 011.06 0z"></path></svg>
            <span class="text-normal select-menu-item-text" data-menu-button-text="">Symfony</span>
          </label>
          <label tabindex="0" class="select-menu-item" role="menuitemradio">
            <input type="radio" name="gitignore" id="gitignore_SymphonyCMS" value="SymphonyCMS" data-template-url="https://github.com/site/gitignore/SymphonyCMS">
            <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M13.78 4.22a.75.75 0 010 1.06l-7.25 7.25a.75.75 0 01-1.06 0L2.22 9.28a.75.75 0 011.06-1.06L6 10.94l6.72-6.72a.75.75 0 011.06 0z"></path></svg>
            <span class="text-normal select-menu-item-text" data-menu-button-text="">SymphonyCMS</span>
          </label>
          <label tabindex="0" class="select-menu-item" role="menuitemradio">
            <input type="radio" name="gitignore" id="gitignore_TeX" value="TeX" data-template-url="https://github.com/site/gitignore/TeX">
            <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M13.78 4.22a.75.75 0 010 1.06l-7.25 7.25a.75.75 0 01-1.06 0L2.22 9.28a.75.75 0 011.06-1.06L6 10.94l6.72-6.72a.75.75 0 011.06 0z"></path></svg>
            <span class="text-normal select-menu-item-text" data-menu-button-text="">TeX</span>
          </label>
          <label tabindex="0" class="select-menu-item" role="menuitemradio">
            <input type="radio" name="gitignore" id="gitignore_Terraform" value="Terraform" data-template-url="https://github.com/site/gitignore/Terraform">
            <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M13.78 4.22a.75.75 0 010 1.06l-7.25 7.25a.75.75 0 01-1.06 0L2.22 9.28a.75.75 0 011.06-1.06L6 10.94l6.72-6.72a.75.75 0 011.06 0z"></path></svg>
            <span class="text-normal select-menu-item-text" data-menu-button-text="">Terraform</span>
          </label>
          <label tabindex="0" class="select-menu-item" role="menuitemradio">
            <input type="radio" name="gitignore" id="gitignore_Textpattern" value="Textpattern" data-template-url="https://github.com/site/gitignore/Textpattern">
            <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M13.78 4.22a.75.75 0 010 1.06l-7.25 7.25a.75.75 0 01-1.06 0L2.22 9.28a.75.75 0 011.06-1.06L6 10.94l6.72-6.72a.75.75 0 011.06 0z"></path></svg>
            <span class="text-normal select-menu-item-text" data-menu-button-text="">Textpattern</span>
          </label>
          <label tabindex="0" class="select-menu-item" role="menuitemradio">
            <input type="radio" name="gitignore" id="gitignore_TurboGears2" value="TurboGears2" data-template-url="https://github.com/site/gitignore/TurboGears2">
            <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M13.78 4.22a.75.75 0 010 1.06l-7.25 7.25a.75.75 0 01-1.06 0L2.22 9.28a.75.75 0 011.06-1.06L6 10.94l6.72-6.72a.75.75 0 011.06 0z"></path></svg>
            <span class="text-normal select-menu-item-text" data-menu-button-text="">TurboGears2</span>
          </label>
          <label tabindex="0" class="select-menu-item" role="menuitemradio">
            <input type="radio" name="gitignore" id="gitignore_Typo3" value="Typo3" data-template-url="https://github.com/site/gitignore/Typo3">
            <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M13.78 4.22a.75.75 0 010 1.06l-7.25 7.25a.75.75 0 01-1.06 0L2.22 9.28a.75.75 0 011.06-1.06L6 10.94l6.72-6.72a.75.75 0 011.06 0z"></path></svg>
            <span class="text-normal select-menu-item-text" data-menu-button-text="">Typo3</span>
          </label>
          <label tabindex="0" class="select-menu-item" role="menuitemradio">
            <input type="radio" name="gitignore" id="gitignore_Umbraco" value="Umbraco" data-template-url="https://github.com/site/gitignore/Umbraco">
            <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M13.78 4.22a.75.75 0 010 1.06l-7.25 7.25a.75.75 0 01-1.06 0L2.22 9.28a.75.75 0 011.06-1.06L6 10.94l6.72-6.72a.75.75 0 011.06 0z"></path></svg>
            <span class="text-normal select-menu-item-text" data-menu-button-text="">Umbraco</span>
          </label>
          <label tabindex="0" class="select-menu-item" role="menuitemradio">
            <input type="radio" name="gitignore" id="gitignore_Unity" value="Unity" data-template-url="https://github.com/site/gitignore/Unity">
            <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M13.78 4.22a.75.75 0 010 1.06l-7.25 7.25a.75.75 0 01-1.06 0L2.22 9.28a.75.75 0 011.06-1.06L6 10.94l6.72-6.72a.75.75 0 011.06 0z"></path></svg>
            <span class="text-normal select-menu-item-text" data-menu-button-text="">Unity</span>
          </label>
          <label tabindex="0" class="select-menu-item" role="menuitemradio">
            <input type="radio" name="gitignore" id="gitignore_UnrealEngine" value="UnrealEngine" data-template-url="https://github.com/site/gitignore/UnrealEngine">
            <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M13.78 4.22a.75.75 0 010 1.06l-7.25 7.25a.75.75 0 01-1.06 0L2.22 9.28a.75.75 0 011.06-1.06L6 10.94l6.72-6.72a.75.75 0 011.06 0z"></path></svg>
            <span class="text-normal select-menu-item-text" data-menu-button-text="">UnrealEngine</span>
          </label>
          <label tabindex="0" class="select-menu-item" role="menuitemradio">
            <input type="radio" name="gitignore" id="gitignore_VVVV" value="VVVV" data-template-url="https://github.com/site/gitignore/VVVV">
            <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M13.78 4.22a.75.75 0 010 1.06l-7.25 7.25a.75.75 0 01-1.06 0L2.22 9.28a.75.75 0 011.06-1.06L6 10.94l6.72-6.72a.75.75 0 011.06 0z"></path></svg>
            <span class="text-normal select-menu-item-text" data-menu-button-text="">VVVV</span>
          </label>
          <label tabindex="0" class="select-menu-item" role="menuitemradio">
            <input type="radio" name="gitignore" id="gitignore_VisualStudio" value="VisualStudio" data-template-url="https://github.com/site/gitignore/VisualStudio">
            <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M13.78 4.22a.75.75 0 010 1.06l-7.25 7.25a.75.75 0 01-1.06 0L2.22 9.28a.75.75 0 011.06-1.06L6 10.94l6.72-6.72a.75.75 0 011.06 0z"></path></svg>
            <span class="text-normal select-menu-item-text" data-menu-button-text="">VisualStudio</span>
          </label>
          <label tabindex="0" class="select-menu-item" role="menuitemradio">
            <input type="radio" name="gitignore" id="gitignore_Waf" value="Waf" data-template-url="https://github.com/site/gitignore/Waf">
            <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M13.78 4.22a.75.75 0 010 1.06l-7.25 7.25a.75.75 0 01-1.06 0L2.22 9.28a.75.75 0 011.06-1.06L6 10.94l6.72-6.72a.75.75 0 011.06 0z"></path></svg>
            <span class="text-normal select-menu-item-text" data-menu-button-text="">Waf</span>
          </label>
          <label tabindex="0" class="select-menu-item" role="menuitemradio">
            <input type="radio" name="gitignore" id="gitignore_WordPress" value="WordPress" data-template-url="https://github.com/site/gitignore/WordPress">
            <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M13.78 4.22a.75.75 0 010 1.06l-7.25 7.25a.75.75 0 01-1.06 0L2.22 9.28a.75.75 0 011.06-1.06L6 10.94l6.72-6.72a.75.75 0 011.06 0z"></path></svg>
            <span class="text-normal select-menu-item-text" data-menu-button-text="">WordPress</span>
          </label>
          <label tabindex="0" class="select-menu-item" role="menuitemradio">
            <input type="radio" name="gitignore" id="gitignore_Xojo" value="Xojo" data-template-url="https://github.com/site/gitignore/Xojo">
            <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M13.78 4.22a.75.75 0 010 1.06l-7.25 7.25a.75.75 0 01-1.06 0L2.22 9.28a.75.75 0 011.06-1.06L6 10.94l6.72-6.72a.75.75 0 011.06 0z"></path></svg>
            <span class="text-normal select-menu-item-text" data-menu-button-text="">Xojo</span>
          </label>
          <label tabindex="0" class="select-menu-item" role="menuitemradio">
            <input type="radio" name="gitignore" id="gitignore_Yeoman" value="Yeoman" data-template-url="https://github.com/site/gitignore/Yeoman">
            <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M13.78 4.22a.75.75 0 010 1.06l-7.25 7.25a.75.75 0 01-1.06 0L2.22 9.28a.75.75 0 011.06-1.06L6 10.94l6.72-6.72a.75.75 0 011.06 0z"></path></svg>
            <span class="text-normal select-menu-item-text" data-menu-button-text="">Yeoman</span>
          </label>
          <label tabindex="0" class="select-menu-item" role="menuitemradio">
            <input type="radio" name="gitignore" id="gitignore_Yii" value="Yii" data-template-url="https://github.com/site/gitignore/Yii">
            <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M13.78 4.22a.75.75 0 010 1.06l-7.25 7.25a.75.75 0 01-1.06 0L2.22 9.28a.75.75 0 011.06-1.06L6 10.94l6.72-6.72a.75.75 0 011.06 0z"></path></svg>
            <span class="text-normal select-menu-item-text" data-menu-button-text="">Yii</span>
          </label>
          <label tabindex="0" class="select-menu-item" role="menuitemradio">
            <input type="radio" name="gitignore" id="gitignore_ZendFramework" value="ZendFramework" data-template-url="https://github.com/site/gitignore/ZendFramework">
            <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M13.78 4.22a.75.75 0 010 1.06l-7.25 7.25a.75.75 0 01-1.06 0L2.22 9.28a.75.75 0 011.06-1.06L6 10.94l6.72-6.72a.75.75 0 011.06 0z"></path></svg>
            <span class="text-normal select-menu-item-text" data-menu-button-text="">ZendFramework</span>
          </label>
          <label tabindex="0" class="select-menu-item" role="menuitemradio">
            <input type="radio" name="gitignore" id="gitignore_Zephir" value="Zephir" data-template-url="https://github.com/site/gitignore/Zephir">
            <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M13.78 4.22a.75.75 0 010 1.06l-7.25 7.25a.75.75 0 01-1.06 0L2.22 9.28a.75.75 0 011.06-1.06L6 10.94l6.72-6.72a.75.75 0 011.06 0z"></path></svg>
            <span class="text-normal select-menu-item-text" data-menu-button-text="">Zephir</span>
          </label>
          <label tabindex="0" class="select-menu-item" role="menuitemradio">
            <input type="radio" name="gitignore" id="gitignore_gcov" value="gcov" data-template-url="https://github.com/site/gitignore/gcov">
            <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M13.78 4.22a.75.75 0 010 1.06l-7.25 7.25a.75.75 0 01-1.06 0L2.22 9.28a.75.75 0 011.06-1.06L6 10.94l6.72-6.72a.75.75 0 011.06 0z"></path></svg>
            <span class="text-normal select-menu-item-text" data-menu-button-text="">gcov</span>
          </label>
          <label tabindex="0" class="select-menu-item" role="menuitemradio">
            <input type="radio" name="gitignore" id="gitignore_nanoc" value="nanoc" data-template-url="https://github.com/site/gitignore/nanoc">
            <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M13.78 4.22a.75.75 0 010 1.06l-7.25 7.25a.75.75 0 01-1.06 0L2.22 9.28a.75.75 0 011.06-1.06L6 10.94l6.72-6.72a.75.75 0 011.06 0z"></path></svg>
            <span class="text-normal select-menu-item-text" data-menu-button-text="">nanoc</span>
          </label>
          <label tabindex="0" class="select-menu-item" role="menuitemradio">
            <input type="radio" name="gitignore" id="gitignore_opencart" value="opencart" data-template-url="https://github.com/site/gitignore/opencart">
            <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M13.78 4.22a.75.75 0 010 1.06l-7.25 7.25a.75.75 0 01-1.06 0L2.22 9.28a.75.75 0 011.06-1.06L6 10.94l6.72-6.72a.75.75 0 011.06 0z"></path></svg>
            <span class="text-normal select-menu-item-text" data-menu-button-text="">opencart</span>
          </label>
          <label tabindex="0" class="select-menu-item" role="menuitemradio">
            <input type="radio" name="gitignore" id="gitignore_stella" value="stella" data-template-url="https://github.com/site/gitignore/stella">
            <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M13.78 4.22a.75.75 0 010 1.06l-7.25 7.25a.75.75 0 01-1.06 0L2.22 9.28a.75.75 0 011.06-1.06L6 10.94l6.72-6.72a.75.75 0 011.06 0z"></path></svg>
            <span class="text-normal select-menu-item-text" data-menu-button-text="">stella</span>
          </label>
      </div>

      <div class="select-menu-no-results">Nothing to show</div>
    </div>
  </details-menu>
</details>

      </div>
        <div class="js-template-suggestion d-flex flex-shrink-0 flex-justify-end hide-sm hide-md  d-none" data-template-suggestion-pattern="^(.+\/)?(licen[sc]e|copying)($|\.)">
            <a class="btn btn-sm" data-template-button="" href="https://github.com/99002786/act2/community/license/new?branch=main">Choose a license template</a>
        </div>

        <div class="js-template-suggestion d-flex flex-auto flex-justify-end hide-sm hide-md  d-none" data-template-suggestion-pattern="^(code.?of.?conduct|coc)($|\.)">
          <a class="btn btn-sm" data-template-button="" href="https://github.com/99002786/act2/community/code-of-conduct/new">Choose a code of conduct template</a>
        </div>

      <input id="blob-edit-path" type="hidden" name="new_filename" class="js-new-filename-field" value="calci-main/calci-main/function.h" data-default-value="calci-main/calci-main/function.h">
      <div class="d-none">
        <span class="js-crumb-template js-path-segment"><a href="https://github.com/99002786/act2/edit/main/calci-main/calci-main/function.h" data-pjax="true"><span>REPLACEME</span></a></span>
        <span class="separator js-crumb-separator">/</span>
      </div>

  </div>

    <div class="js-template-suggestion px-3 mt-3 hide-sm hide-md d-none" data-template-suggestion-pattern="^FUNDING\.yml$">
      <div class="flash ">
  
  
        <p>
          <code>.github/FUNDING.yml</code> shows the community how to support this project.

          Please see our
          <a href="https://docs.github.com/articles/displaying-a-sponsor-button-in-your-repository">repository funding links documentation</a>
          for more information on formatting and what is and isn't allowed in this file.
        </p>

          <p>
            Please note that funding links are currently <em>disabled</em> on this repository. Visit
            <a href="https://github.com/99002786/act2/settings">repository settings</a>
            to enable display of your funding links.
          </p>

</div>    </div>

  <div class="js-template-suggestion px-3 mt-3 hide-sm hide-md d-none" data-template-suggestion-pattern="^(\.github\/ISSUE_TEMPLATE\/(?!config))">
    <div class="flash ">
  
  
      <p>
        Looks like this file is an <b>issue template</b>. Need help? Check out the <a href="https://docs.github.com/articles/about-issue-and-pull-request-templates">documentation.</a>
      </p>

</div>  </div>

  <div class="js-template-suggestion px-3 mt-3 hide-sm hide-md d-none" data-template-suggestion-pattern="^(\.github\/ISSUE_TEMPLATE\/config)">
    <div class="flash ">
  
  
      <p>
        Looks like this file is an <b>issue template config</b>. Need help? Check out the <a href="https://docs.github.com/articles/configuring-issue-templates-for-your-repository#configuring-the-template-chooser">documentation.</a>
      </p>

</div>  </div>



    
<div class="file js-code-editor container-preview show-code   mx-lg-3" data-github-confirm-unload="false">
  <div class="file-header mb-2 d-flex flex-items-center pr-0">

      <div class="tabnav-tabs js-file-editor-nav d-flex flex-auto d-md-block">
        <button type="button" class="btn-link code px-3 px-sm-6 px-lg-3 flex-1 flex-md-auto selected tabnav-tab js-blob-edit-code js-blob-edit-tab" aria-current="true" data-tab="show-code">
          <svg class="octicon octicon-code" viewBox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M4.72 3.22a.75.75 0 011.06 1.06L2.06 8l3.72 3.72a.75.75 0 11-1.06 1.06L.47 8.53a.75.75 0 010-1.06l4.25-4.25zm6.56 0a.75.75 0 10-1.06 1.06L13.94 8l-3.72 3.72a.75.75 0 101.06 1.06l4.25-4.25a.75.75 0 000-1.06l-4.25-4.25z"></path></svg>
          Edit file
        </button>
        <button type="button" class="flex-1 flex-md-auto btn-link preview tabnav-tab js-blob-edit-preview js-blob-edit-tab" data-tab="preview">
          <svg class="octicon octicon-eye" viewBox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M1.679 7.932c.412-.621 1.242-1.75 2.366-2.717C5.175 4.242 6.527 3.5 8 3.5c1.473 0 2.824.742 3.955 1.715 1.124.967 1.954 2.096 2.366 2.717a.119.119 0 010 .136c-.412.621-1.242 1.75-2.366 2.717C10.825 11.758 9.473 12.5 8 12.5c-1.473 0-2.824-.742-3.955-1.715C2.92 9.818 2.09 8.69 1.679 8.068a.119.119 0 010-.136zM8 2c-1.981 0-3.67.992-4.933 2.078C1.797 5.169.88 6.423.43 7.1a1.619 1.619 0 000 1.798c.45.678 1.367 1.932 2.637 3.024C4.329 13.008 6.019 14 8 14c1.981 0 3.67-.992 4.933-2.078 1.27-1.091 2.187-2.345 2.637-3.023a1.619 1.619 0 000-1.798c-.45-.678-1.367-1.932-2.637-3.023C11.671 2.992 9.981 2 8 2zm0 8a2 2 0 100-4 2 2 0 000 4z"></path></svg>
          Preview changes
        </button>
      </div>

      <div class="file-actions d-none d-md-flex px-3 pr-md-6 px-lg-2">
        <select id="indent-mode" class="form-select select-sm js-code-indent-mode" aria-label="Indent mode">
          <optgroup label="Indent mode">
            <option selected="selected" value="space">Spaces</option>
<option value="tab">Tabs</option>
          </optgroup>
        </select>

        <select id="indent-size" class="form-select select-sm js-code-indent-width" aria-label="Indent size">
          <optgroup label="Indent size">
            <option selected="selected" value="2">2</option>
<option value="4">4</option>
<option value="8">8</option>
          </optgroup>
        </select>

        <select id="line-wrap-mode" class="form-select select-sm js-code-wrap-mode" aria-label="Line wrap mode">
          <optgroup label="Line wrap mode">
            <option selected="selected" value="off">No wrap</option>
<option value="on">Soft wrap</option>
          </optgroup>
        </select>
      </div>
  </div>

  <input type="hidden" name="content_changed" class="js-blob-contents-changed" value="true" data-default-value="">

  <div class="commit-create  position-relative ">
    <textarea class="form-control file-editor-textarea js-blob-contents js-code-textarea " rows="35" name="value" data-filename="function.h" data-codemirror-mode="text/x-csrc" data-allow-unchanged="" placeholder="Enter file contents here" aria-label="Enter file contents here" spellcheck="false" autofocus="" style="display: none;">#ifndef __FUNCTION_H__
#define __FUNCTION_H__

#include &lt;stdio.h&gt;
int add(int, int);
int sub(int, int);
int mul(int, int);
int Div(int, int);
#endif
</textarea>
  <div class="CodeMirror cm-s-github-light CodeMirror-focused" style="height: 646px;"><div class="CodeMirror-vscrollbar" tabindex="-1" cm-not-content="true"><div style="min-width: 1px; height: 0px;"></div></div><div class="CodeMirror-hscrollbar" tabindex="-1" cm-not-content="true"><div style="height: 100%; min-height: 1px; width: 0px;"></div></div><div class="CodeMirror-scrollbar-filler" cm-not-content="true"></div><div class="CodeMirror-gutter-filler" cm-not-content="true"></div><div class="CodeMirror-scroll" tabindex="-1"><div class="CodeMirror-sizer" style="margin-left: 53px; margin-bottom: -17px; border-right-width: 13px; min-height: 224px; min-width: 211px; padding-right: 0px; padding-bottom: 0px;"><div style="position: relative; top: 0px;"><div class="CodeMirror-lines" role="presentation"><div role="presentation" style="position: relative; outline: none;"><div class="CodeMirror-measure"></div><div class="CodeMirror-measure"></div><div style="position: relative; z-index: 1;"></div><div class="CodeMirror-cursors" style="visibility: hidden;"></div><div class="CodeMirror-code" role="presentation" autocorrect="off" autocapitalize="off" spellcheck="false" contenteditable="true" tabindex="0" style=""><div style="position: relative;"><div class="CodeMirror-gutter-wrapper" contenteditable="false" style="left: -53px;"><div class="CodeMirror-linenumber CodeMirror-gutter-elt" style="left: 0px; width: 21px;">1</div></div><pre class=" CodeMirror-line " role="presentation"><span role="presentation" style="padding-right: 0.1px;"><span class="cm-meta">#ifndef __FUNCTION_H__</span></span></pre></div><div style="position: relative;"><div class="CodeMirror-gutter-wrapper" contenteditable="false" style="left: -53px;"><div class="CodeMirror-linenumber CodeMirror-gutter-elt" style="left: 0px; width: 21px;">2</div></div><pre class=" CodeMirror-line " role="presentation"><span role="presentation" style="padding-right: 0.1px;"><span class="cm-meta">#define __FUNCTION_H__</span></span></pre></div><div style="position: relative;"><div class="CodeMirror-gutter-wrapper" contenteditable="false" style="left: -53px;"><div class="CodeMirror-linenumber CodeMirror-gutter-elt" style="left: 0px; width: 21px;">3</div></div><pre class=" CodeMirror-line " role="presentation"><span role="presentation" style="padding-right: 0.1px;"><span cm-text="">​</span></span></pre></div><div style="position: relative;"><div class="CodeMirror-gutter-wrapper" contenteditable="false" style="left: -53px;"><div class="CodeMirror-linenumber CodeMirror-gutter-elt" style="left: 0px; width: 21px;">4</div></div><pre class=" CodeMirror-line " role="presentation"><span role="presentation" style="padding-right: 0.1px;"><span class="cm-meta">#include &lt;stdio.h&gt;</span></span></pre></div><div style="position: relative;"><div class="CodeMirror-gutter-wrapper" contenteditable="false" style="left: -53px;"><div class="CodeMirror-linenumber CodeMirror-gutter-elt" style="left: 0px; width: 21px;">5</div></div><pre class=" CodeMirror-line " role="presentation"><span role="presentation" style="padding-right: 0.1px;"><span class="cm-type">int</span> <span class="cm-def">add</span>(<span class="cm-type">int</span>, <span class="cm-type">int</span>);</span></pre></div><div style="position: relative;"><div class="CodeMirror-gutter-wrapper" contenteditable="false" style="left: -53px;"><div class="CodeMirror-linenumber CodeMirror-gutter-elt" style="left: 0px; width: 21px;">6</div></div><pre class=" CodeMirror-line " role="presentation"><span role="presentation" style="padding-right: 0.1px;"><span class="cm-type">int</span> <span class="cm-def">sub</span>(<span class="cm-type">int</span>, <span class="cm-type">int</span>);</span></pre></div><div style="position: relative;"><div class="CodeMirror-gutter-wrapper" contenteditable="false" style="left: -53px;"><div class="CodeMirror-linenumber CodeMirror-gutter-elt" style="left: 0px; width: 21px;">7</div></div><pre class=" CodeMirror-line " role="presentation"><span role="presentation" style="padding-right: 0.1px;"><span class="cm-type">int</span> <span class="cm-def">mul</span>(<span class="cm-type">int</span>, <span class="cm-type">int</span>);</span></pre></div><div style="position: relative;"><div class="CodeMirror-gutter-wrapper" contenteditable="false" style="left: -53px;"><div class="CodeMirror-linenumber CodeMirror-gutter-elt" style="left: 0px; width: 21px;">8</div></div><pre class=" CodeMirror-line " role="presentation"><span role="presentation" style="padding-right: 0.1px;"><span class="cm-type">int</span> <span class="cm-def">Div</span>(<span class="cm-type">int</span>, <span class="cm-type">int</span>);</span></pre></div><div style="position: relative;"><div class="CodeMirror-gutter-wrapper" contenteditable="false" style="left: -53px;"><div class="CodeMirror-linenumber CodeMirror-gutter-elt" style="left: 0px; width: 21px;">9</div></div><pre class=" CodeMirror-line " role="presentation"><span role="presentation" style="padding-right: 0.1px;"><span class="cm-type">int</span> <span class="cm-def">factorial_func</span>(<span class="cm-type">int</span> <span class="cm-variable">factin</span>);</span></pre></div><div style="position: relative;"><div class="CodeMirror-gutter-wrapper" contenteditable="false" style="left: -53px;"><div class="CodeMirror-linenumber CodeMirror-gutter-elt" style="left: 0px; width: 21px;">10</div></div><pre class=" CodeMirror-line " role="presentation"><span role="presentation" style="padding-right: 0.1px;"><span class="cm-type">int</span> <span class="cm-def">prime_func</span>(<span class="cm-type">int</span> <span class="cm-variable">primein</span>);</span></pre></div><div style="position: relative;"><div class="CodeMirror-gutter-wrapper" contenteditable="false" style="left: -53px;"><div class="CodeMirror-linenumber CodeMirror-gutter-elt" style="left: 0px; width: 21px;">11</div></div><pre class=" CodeMirror-line " role="presentation"><span role="presentation" style="padding-right: 0.1px;"><span class="cm-meta">#endif</span></span></pre></div><div style="position: relative;"><div class="CodeMirror-gutter-wrapper" contenteditable="false" style="left: -53px;"><div class="CodeMirror-linenumber CodeMirror-gutter-elt" style="left: 0px; width: 21px;">12</div></div><pre class=" CodeMirror-line " role="presentation"><span role="presentation" style="padding-right: 0.1px;"><span cm-text="">​</span></span></pre></div></div></div></div></div></div><div style="position: absolute; height: 13px; width: 1px; border-bottom: 0px solid transparent; top: 224px;"></div><div class="CodeMirror-gutters" style="height: 237px;"><div class="CodeMirror-gutter CodeMirror-linenumbers" style="width: 53px;"></div></div></div></div></div>


  <div class="loading-preview-msg"><p class="preview-msg text-gray">Loading preview…</p></div>
  <div class="no-changes-preview-msg"><p class="preview-msg text-gray">No changes to display.</p></div>
  <div class="error-preview-msg"><p class="preview-msg text-gray">Unable to load this preview, sorry.</p></div>
  <div class="js-commit-preview commit-preview   ">
  </div>
</div>



  
  <div class="d-flex flex-column d-md-block col-lg-11 offset-lg-1 pr-lg-3 js-file-commit-form">





  <span class="commit-form-avatar hide-sm hide-md ">
    <a class="d-inline-block" data-hovercard-type="user" data-hovercard-url="/users/99002786/hovercard" data-octo-click="hovercard-link-click" data-octo-dimensions="link_type:self" href="https://github.com/99002786"><img class="float-left rounded-1 avatar-user" src="./function_files/72496123(2)" width="48" height="48" alt="@99002786"></a>
  </span>

  <div class="commit-form position-relative  mb-2 p-3 border-0 border-lg-top border-lg-right border-lg-left border-lg-bottom rounded-1">
    <h3>Commit changes</h3>

    <div class="text-orange js-too-long-error d-none">
      <svg height="16" class="octicon octicon-light-bulb" viewBox="0 0 16 16" version="1.1" width="16" aria-hidden="true"><path fill-rule="evenodd" d="M8 1.5c-2.363 0-4 1.69-4 3.75 0 .984.424 1.625.984 2.304l.214.253c.223.264.47.556.673.848.284.411.537.896.621 1.49a.75.75 0 01-1.484.211c-.04-.282-.163-.547-.37-.847a8.695 8.695 0 00-.542-.68c-.084-.1-.173-.205-.268-.32C3.201 7.75 2.5 6.766 2.5 5.25 2.5 2.31 4.863 0 8 0s5.5 2.31 5.5 5.25c0 1.516-.701 2.5-1.328 3.259-.095.115-.184.22-.268.319-.207.245-.383.453-.541.681-.208.3-.33.565-.37.847a.75.75 0 01-1.485-.212c.084-.593.337-1.078.621-1.489.203-.292.45-.584.673-.848.075-.088.147-.173.213-.253.561-.679.985-1.32.985-2.304 0-2.06-1.637-3.75-4-3.75zM6 15.25a.75.75 0 01.75-.75h2.5a.75.75 0 010 1.5h-2.5a.75.75 0 01-.75-.75zM5.75 12a.75.75 0 000 1.5h4.5a.75.75 0 000-1.5h-4.5z"></path></svg>
      <strong>ProTip!</strong> Great commit summaries contain fewer than 50 characters. Place extra information in the extended description.
    </div>

    <label for="commit-summary-input" class="sr-only">
      Commit summary
    </label>
    <input id="commit-summary-input" type="text" class="form-control input-block input-contrast js-new-blob-commit-summary" placeholder="Update function.h" name="message" value="" autocomplete="off">
    <input type="hidden" class="js-commit-message-fallback" name="placeholder_message" value="Update function.h" data-default-value="Update function.h">

    <label for="commit-description-textarea" class="sr-only">
      Optional extended description
    </label>

    <div class="position-relative">
      <text-expander keys=": @ #" data-issue-url="/suggestions?issue_suggester=1&amp;repository=act2&amp;user_id=99002786" data-mention-url="/suggestions?mention_suggester=1&amp;repository=act2&amp;user_id=99002786" data-emoji-url="/autocomplete/emoji">
        <textarea id="commit-description-textarea" name="description" class="form-control input-block input-contrast comment-form-textarea js-quick-submit" placeholder="Add an optional extended description…"></textarea>
      </text-expander>
    </div>


    
<div class="form-group mb-0" role="radiogroup" aria-label="Commit choice">
  <div class="form-checkbox pl-4 mt-0 mb-2">
    <label class="text-normal">
      <input type="radio" class="js-quick-pull-choice-option" name="commit-choice" value="direct" autocomplete="off" checked="">
        <svg class="octicon octicon-git-commit text-gray mr-1 text-center" height="16" viewBox="0 0 16 16" version="1.1" width="16" aria-hidden="true"><path fill-rule="evenodd" d="M10.5 7.75a2.5 2.5 0 11-5 0 2.5 2.5 0 015 0zm1.43.75a4.002 4.002 0 01-7.86 0H.75a.75.75 0 110-1.5h3.32a4.001 4.001 0 017.86 0h3.32a.75.75 0 110 1.5h-3.32z"></path></svg>
        Commit directly to the <strong class="branch-name">main</strong> branch.
    </label>
  </div>
  <div class="form-checkbox pl-4 my-0">
    <label class="text-normal" aria-live="polite">
      <input type="radio" class="form-checkbox-details-trigger js-quick-pull-choice-option" name="commit-choice" value="quick-pull" autocomplete="off">
      <svg class="octicon octicon-git-pull-request text-gray mr-1 text-center" height="16" viewBox="0 0 16 16" version="1.1" width="16" aria-hidden="true"><path fill-rule="evenodd" d="M7.177 3.073L9.573.677A.25.25 0 0110 .854v4.792a.25.25 0 01-.427.177L7.177 3.427a.25.25 0 010-.354zM3.75 2.5a.75.75 0 100 1.5.75.75 0 000-1.5zm-2.25.75a2.25 2.25 0 113 2.122v5.256a2.251 2.251 0 11-1.5 0V5.372A2.25 2.25 0 011.5 3.25zM11 2.5h-1V4h1a1 1 0 011 1v5.628a2.251 2.251 0 101.5 0V5A2.5 2.5 0 0011 2.5zm1 10.25a.75.75 0 111.5 0 .75.75 0 01-1.5 0zM3.75 12a.75.75 0 100 1.5.75.75 0 000-1.5z"></path></svg>
      Create a <strong>new branch</strong> for this commit and start a pull request.
      <a href="https://docs.github.com/articles/using-pull-requests" target="_blank">
        Learn more about pull requests.
      </a>

      <div class="form-checkbox-details mt-2">
        <div class="position-relative mt-2 ">
          <svg class="octicon octicon-git-branch quick-pull-new-branch-icon text-gray-light position-absolute text-center" height="16" viewBox="0 0 16 16" version="1.1" width="16" aria-hidden="true"><path fill-rule="evenodd" d="M11.75 2.5a.75.75 0 100 1.5.75.75 0 000-1.5zm-2.25.75a2.25 2.25 0 113 2.122V6A2.5 2.5 0 0110 8.5H6a1 1 0 00-1 1v1.128a2.251 2.251 0 11-1.5 0V5.372a2.25 2.25 0 111.5 0v1.836A2.492 2.492 0 016 7h4a1 1 0 001-1v-.628A2.25 2.25 0 019.5 3.25zM4.25 12a.75.75 0 100 1.5.75.75 0 000-1.5zM3.5 3.25a.75.75 0 111.5 0 .75.75 0 01-1.5 0z"></path></svg>
          <input type="text" value="99002786-patch-1" class="form-control input-contrast mr-1 pl-5 input-monospace js-quick-pull-new-branch-name" placeholder="New branch name" aria-label="New branch name" aria-describedby="quick-pull-normalization-info" data-generated-branch="99002786-patch-1" data-check-url="https://github.com/99002786/act2/ref_check">
          <input type="hidden" value="3aCJIegywXNV4yHXsW0eK9lsTwKNmHeXo8b9yQ9SMquzE5KnhHeMoYycDTYUTKSwbr5fUtXFV/sMgy/tRHsJZw==" data-csrf="true" class="js-data-check-url-csrf" data-default-value="3aCJIegywXNV4yHXsW0eK9lsTwKNmHeXo8b9yQ9SMquzE5KnhHeMoYycDTYUTKSwbr5fUtXFV/sMgy/tRHsJZw==">
          <span class="text-gray js-quick-pull-normalization-info" id="quick-pull-normalization-info"></span>
        </div>
      </div>
    </label>
  </div>
</div>

<input type="hidden" name="target_branch" class="js-quick-pull-target-branch" value="main" data-default-value="main" autocomplete="off">
<input type="hidden" name="quick_pull" class="js-quick-pull-choice-value" value="" autocomplete="off" data-default-value="">


  </div>

  <input type="hidden" name="commit" class="js-commit-oid" value="d0736440af6f63110534d1a408d2a474c3e68b23" data-default-value="d0736440af6f63110534d1a408d2a474c3e68b23">
    <input type="hidden" name="same_repo" value="1">
  <input type="hidden" name="pr" value="">

  <button type="submit" class="btn btn-primary js-blob-submit flex-auto mx-3 ml-md-3 mr-md-0 ml-lg-0 mb-3 mb-md-0" id="submit-file" data-edit-text="Commit changes" data-pull-text="Propose changes">
    Commit changes
  </button>

    <a class="btn btn-danger flex-auto text-center mx-3 mx-md-0" href="https://github.com/99002786/act2/blob/main/calci-main/calci-main/function.h">Cancel</a>


  </div>

</div>

</form>    </div>
  


  </div>
</div>

    </main>
  </div>

  </div>

        
<div class="footer container-xl width-full p-responsive" role="contentinfo">
    <div class="position-relative d-flex flex-row-reverse flex-lg-row flex-wrap flex-lg-nowrap flex-justify-center flex-lg-justify-between flex-sm-items-center pt-6 pb-2 mt-6 f6 text-gray border-top border-gray-light ">
      <a aria-label="Homepage" title="GitHub" class="footer-octicon d-none d-lg-block mr-lg-4" href="https://github.com/">
        <svg height="24" class="octicon octicon-mark-github" viewBox="0 0 16 16" version="1.1" width="24" aria-hidden="true"><path fill-rule="evenodd" d="M8 0C3.58 0 0 3.58 0 8c0 3.54 2.29 6.53 5.47 7.59.4.07.55-.17.55-.38 0-.19-.01-.82-.01-1.49-2.01.37-2.53-.49-2.69-.94-.09-.23-.48-.94-.82-1.13-.28-.15-.68-.52-.01-.53.63-.01 1.08.58 1.23.82.72 1.21 1.87.87 2.33.66.07-.52.28-.87.51-1.07-1.78-.2-3.64-.89-3.64-3.95 0-.87.31-1.59.82-2.15-.08-.2-.36-1.02.08-2.12 0 0 .67-.21 2.2.82.64-.18 1.32-.27 2-.27.68 0 1.36.09 2 .27 1.53-1.04 2.2-.82 2.2-.82.44 1.1.16 1.92.08 2.12.51.56.82 1.27.82 2.15 0 3.07-1.87 3.75-3.65 3.95.29.25.54.73.54 1.48 0 1.07-.01 1.93-.01 2.2 0 .21.15.46.55.38A8.013 8.013 0 0016 8c0-4.42-3.58-8-8-8z"></path></svg>
</a>
      <ul class="list-style-none d-flex flex-wrap col-12 flex-justify-center flex-lg-justify-between mb-2 mb-lg-0">
        <li class="mr-3 mr-lg-0">© 2020 GitHub, Inc.</li>
          <li class="mr-3 mr-lg-0"><a data-ga-click="Footer, go to terms, text:terms" href="https://github.com/site/terms">Terms</a></li>
          <li class="mr-3 mr-lg-0"><a data-ga-click="Footer, go to privacy, text:privacy" href="https://github.com/site/privacy">Privacy</a></li>
            <li class="js-cookie-consent-preferences-link-container mr-3 mr-lg-0" hidden="hidden">
  <button data-ga-click="Footer, go to cookie preferences, text:cookie preferences" class="btn-link js-cookie-consent-preferences-link" type="button">Cookie Preferences</button>
</li>
          <li class="mr-3 mr-lg-0"><a data-ga-click="Footer, go to security, text:security" href="https://github.com/security">Security</a></li>
          <li class="mr-3 mr-lg-0"><a href="https://githubstatus.com/" data-ga-click="Footer, go to status, text:status">Status</a></li>
          <li class="mr-3 mr-lg-0"><a data-ga-click="Footer, go to help, text:help" href="https://docs.github.com/">Help</a></li>
          <li class="mr-3 mr-lg-0"><a data-ga-click="Footer, go to contact, text:contact" href="https://github.com/contact">Contact GitHub</a></li>
          <li class="mr-3 mr-lg-0"><a href="https://github.com/pricing" data-ga-click="Footer, go to Pricing, text:Pricing">Pricing</a></li>
        <li class="mr-3 mr-lg-0"><a href="https://docs.github.com/" data-ga-click="Footer, go to api, text:api">API</a></li>
        <li class="mr-3 mr-lg-0"><a href="https://services.github.com/" data-ga-click="Footer, go to training, text:training">Training</a></li>
          <li class="mr-3 mr-lg-0"><a href="https://github.blog/" data-ga-click="Footer, go to blog, text:blog">Blog</a></li>
          <li class="mr-3 mr-lg-0"><a data-ga-click="Footer, go to about, text:about" href="https://github.com/about">About</a></li>
      </ul>
    </div>
  <div class="d-flex flex-justify-center pb-6">
    <span class="f6 text-gray-light"></span>
  </div>
</div>



  <div id="ajax-error-message" class="ajax-error-message flash flash-error">
    <svg class="octicon octicon-alert" viewBox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M8.22 1.754a.25.25 0 00-.44 0L1.698 13.132a.25.25 0 00.22.368h12.164a.25.25 0 00.22-.368L8.22 1.754zm-1.763-.707c.659-1.234 2.427-1.234 3.086 0l6.082 11.378A1.75 1.75 0 0114.082 15H1.918a1.75 1.75 0 01-1.543-2.575L6.457 1.047zM9 11a1 1 0 11-2 0 1 1 0 012 0zm-.25-5.25a.75.75 0 00-1.5 0v2.5a.75.75 0 001.5 0v-2.5z"></path></svg>
    <button type="button" class="flash-close js-ajax-error-dismiss" aria-label="Dismiss error">
      <svg class="octicon octicon-x" viewBox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M3.72 3.72a.75.75 0 011.06 0L8 6.94l3.22-3.22a.75.75 0 111.06 1.06L9.06 8l3.22 3.22a.75.75 0 11-1.06 1.06L8 9.06l-3.22 3.22a.75.75 0 01-1.06-1.06L6.94 8 3.72 4.78a.75.75 0 010-1.06z"></path></svg>
    </button>
    You can’t perform that action at this time.
  </div>


    <script src="./function_files/clike.js.download" crossorigin="anonymous"></script><script crossorigin="anonymous" async="async" integrity="sha512-O8GTqkyR57l/sxhU8bdDyhNYweSdc6TzDwJ7JvY4SJpZye2+L5ayXb5dDiHo45PLT+boMpfMts4kmDzwuv6ZBQ==" type="application/javascript" id="js-conditional-compat" data-src="https://github.githubassets.com/assets/compat-3bc193aa.js"></script>
    <script crossorigin="anonymous" integrity="sha512-qBeyRIjDR3DFKTE2D3j4NncHH72scmqyompBxHHrg7D5+rWW8q2xTxXbF7Z2g8Jx7UNpXfM+3R/FVU0SLgFrgw==" type="application/javascript" src="./function_files/environment-a817b244.js.download"></script>
    <script crossorigin="anonymous" async="async" integrity="sha512-bQN7lkdk+ipFPj01p+l+PVcCMMzdIVa8vAeJKv75R1eQv6+vO1x+XynzAHv0ONQW1vERNnfnnMl0ophD3LHJlA==" type="application/javascript" src="./function_files/vendor-6d037b96.js.download"></script>
    <script crossorigin="anonymous" async="async" integrity="sha512-wKa7myhlUJA97gy3QUo/UmvYtSw0bPY0TuEa142dUdr5fUVRzFekRsIlOYe9aG27Jwn0+62YreFFc8pJl5NeVw==" type="application/javascript" src="./function_files/frameworks-c0a6bb9b.js.download"></script>
    
    <script crossorigin="anonymous" async="async" integrity="sha512-eHS7xXNZPjtXO2GRKEzRYYel7VAHlbyZHsvyhVnnjhFDkcWQAhxf0v6iCOuhBXP4Hh0Hl8OIZYGJkqEGCA1XnA==" type="application/javascript" src="./function_files/behaviors-7874bbc5.js.download"></script>
    
      <script crossorigin="anonymous" async="async" integrity="sha512-Fa5pI4GzvUUIlRlCXYXGH3k9FIAi6uWKe+/QEXeLtNzE9COiS3l5SMQt9YLVrXQhe9pQykLWMuOpkMUkqsfc2w==" type="application/javascript" data-module-id="./contributions-spider-graph.js" data-src="https://github.githubassets.com/assets/contributions-spider-graph-15ae6923.js"></script>
      <script crossorigin="anonymous" async="async" integrity="sha512-gRWMBXifsI3QQuW9ZhfvZcOu0aA+/XmBnoE8dNHxszlOu5DTE9vQJToKI7Y4CF/51ZdqSSpx+4auFPl4ixhGKQ==" type="application/javascript" data-module-id="./drag-drop.js" data-src="https://github.githubassets.com/assets/drag-drop-81158c05.js"></script>
      <script crossorigin="anonymous" async="async" integrity="sha512-aS9dRiKuyInmHMdwiM6O8170rd5Nlk8rL3BbUZkshtt43FLC0RTRNVki0zgaXAnl/RBqg5Dd/i2gSxcVHGorbw==" type="application/javascript" data-module-id="./jump-to.js" data-src="https://github.githubassets.com/assets/jump-to-692f5d46.js"></script>
      <script crossorigin="anonymous" async="async" integrity="sha512-WOR+F21pMDHA970j37hzMyp1qluNZ0TQIdtNY7bHcwWPUU3IXxBqMSsAm3+h/A5KcfKeyHTXH/w6+i4sq/YofQ==" type="application/javascript" data-module-id="./profile-pins-element.js" data-src="https://github.githubassets.com/assets/profile-pins-element-58e47e17.js"></script>
      <script crossorigin="anonymous" async="async" integrity="sha512-mGhHrE0HJ7vEibXJt/Agfu9Gd7z9PpvEiRthudiS5f0WZMyO6PvVmdN9pVZsQEybIa4wKuiSeHBh5LGE/AqKwg==" type="application/javascript" data-module-id="./randomColor.js" data-src="https://github.githubassets.com/assets/randomColor-986847ac.js"></script>
      <script crossorigin="anonymous" async="async" integrity="sha512-PulklwTNjJArlDqvCysC0AKYETVeAa1gJlPSSwR/CinO1u09p8B8vtwVwiTdeutKpU7PP0cWWxuFDOZcdor/Ww==" type="application/javascript" data-module-id="./sortable-behavior.js" data-src="https://github.githubassets.com/assets/sortable-behavior-3ee96497.js"></script>
      <script crossorigin="anonymous" async="async" integrity="sha512-oGXvq8sa+RZSzTBYJO5ANAq6wuhwiZbLXMDisi8OjgoarOvLv+jjOG4u0WHYSpr55DUVER6Vkl8w9EcnfMvuOQ==" type="application/javascript" data-module-id="./tweetsodium.js" data-src="https://github.githubassets.com/assets/tweetsodium-a065efab.js"></script>
      <script crossorigin="anonymous" async="async" integrity="sha512-WxzjxL8Ygim8demYcSckvmOJ8pmQO2xqNYWVYgpQL2hc4bFm5BsiZbh6rozANN2/mInrOqelXdtxm0cSb04GOg==" type="application/javascript" data-module-id="./user-status-submit.js" data-src="https://github.githubassets.com/assets/user-status-submit-5b1ce3c4.js"></script>
          <script crossorigin="anonymous" async="async" integrity="sha512-jwYMQv9Xp1eIMG4mEgiu1BYl3O8DuY1BYmGJWCCsEj9gNNmU47qAYU2/TwzTQxUW0u8i9kiC2pQQSkGCUVMveQ==" type="application/javascript" src="./function_files/editor-8f060c42.js.download"></script>

    <script crossorigin="anonymous" async="async" integrity="sha512-vWZwOAWkVZsugWq/ozc9rzR/C+JiDtC+k7R+AcMCYy6XpjLROPT3gmZ3G6R6o/fnYTMXTplQBdAxRZWmaudjxg==" type="application/javascript" src="./function_files/repositories-bd667038.js.download"></script>
<script crossorigin="anonymous" async="async" integrity="sha512-Kn7A71E6OHc4ChHC8r3084lYwtSuEv3vkO3Bdyj5kY5JxdH5fucdoviTJtoY/MaNbDFwIj5pjgY9WFSEf1dzmQ==" type="application/javascript" src="./function_files/diffs-2a7ec0ef.js.download"></script>
<script crossorigin="anonymous" async="async" integrity="sha512-BbUNZSYlRGiyhUfFor8UVvzwyP46sWS6bNyOkQBThi+HNWD8b31kPBTN9fmfbnZB0XcX5JetEaydBL4YL1mhaw==" type="application/javascript" src="./function_files/github-05b50d65.js.download"></script>
  <div class="js-stale-session-flash flash flash-warn flash-banner" hidden="">
    <svg class="octicon octicon-alert" viewBox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M8.22 1.754a.25.25 0 00-.44 0L1.698 13.132a.25.25 0 00.22.368h12.164a.25.25 0 00.22-.368L8.22 1.754zm-1.763-.707c.659-1.234 2.427-1.234 3.086 0l6.082 11.378A1.75 1.75 0 0114.082 15H1.918a1.75 1.75 0 01-1.543-2.575L6.457 1.047zM9 11a1 1 0 11-2 0 1 1 0 012 0zm-.25-5.25a.75.75 0 00-1.5 0v2.5a.75.75 0 001.5 0v-2.5z"></path></svg>
    <span class="js-stale-session-flash-signed-in" hidden="">You signed in with another tab or window. <a href="https://github.com/99002786/act2/edit/main/calci-main/calci-main/function.h">Reload</a> to refresh your session.</span>
    <span class="js-stale-session-flash-signed-out" hidden="">You signed out in another tab or window. <a href="https://github.com/99002786/act2/edit/main/calci-main/calci-main/function.h">Reload</a> to refresh your session.</span>
  </div>
  <template id="site-details-dialog"></template>

  <div class="Popover js-hovercard-content position-absolute" style="display: none; outline: none;" tabindex="0">
  <div class="Popover-message Popover-message--bottom-left Popover-message--large Box box-shadow-large" style="width:360px;">
  </div>
</div>

    <div class="js-cookie-consent-banner" hidden="">
  <div class="hx_cookie-banner p-2 p-sm-3 p-md-4">
    <div style="max-width: 1194px;" class="Box hx_cookie-banner-box box-shadow-medium mx-auto">
    <div class="Box-body border-0 py-0 px-3 px-md-4">
      <div class="js-main-cookie-banner hx_cookie-banner-main">
          <div class="d-md-flex flex-items-center py-3">
            <p class="f5 flex-1 mb-3 mb-md-0">
              
  We use cookies and similar technologies ("cookies") to provide and secure our websites, as well as to analyze the usage of our websites, in order to offer you a great user experience. To learn more about our use of cookies see our <a href="https://docs.github.com/en/github/site-policy/github-privacy-statement#our-use-of-cookies-and-tracking">Privacy Statement</a>.

              <br><br>
              Select <span class="text-bold">Accept all</span> to consent to this use, <span class="text-bold">Reject all</span> to decline this use, or <span class="text-bold">More info</span> to control your cookie preferences. You can always update your selection by clicking <span class="text-bold">Cookie Preferences</span> at the bottom of the page. 
            </p>
            <div class="d-flex d-md-block flex-wrap flex-sm-nowrap">
              <button class="btn btn-outline flex-sm-1 width-full width-sm-auto mb-2 mb-sm-0 mr-sm-1 m-md-0 ml-md-3 js-cookie-consent-more-info">More info</button>
              <button class="btn btn-outline flex-1 mr-1 mx-sm-1 m-md-0 ml-md-2 js-cookie-consent-accept-all">Accept all</button>
              <button class="btn btn-outline flex-1 ml-1 m-md-0 ml-md-2 js-cookie-consent-reject-all">Reject all</button>
            </div>
          </div>
        </div>

        <div class="js-cookie-details hx_cookie-banner-details" hidden="">
          <div class="d-md-flex flex-items-center py-3">
            <p class="f5 flex-1 mb-2 mb-md-0">
              
  We use cookies and similar technologies ("cookies") to provide and secure our websites, as well as to analyze the usage of our websites, in order to offer you a great user experience. To learn more about our use of cookies see our <a href="https://docs.github.com/en/github/site-policy/github-privacy-statement#our-use-of-cookies-and-tracking">Privacy Statement</a>.

            </p>
            <div class="d-flex d-md-block flex-wrap flex-sm-nowrap">
              <button class="btn btn-outline flex-sm-1 width-full width-sm-auto mb-2 mb-sm-0 mr-sm-1 m-md-0 ml-md-3 js-cookie-consent-less-info">Less info</button>
              <button class="btn btn-outline flex-1 mr-1 mx-sm-1 m-md-0 ml-md-2 js-cookie-consent-accept-all" aria-disabled="true">Accept all</button>
              <button class="btn btn-outline flex-1 ml-1 m-md-0 ml-md-2 js-cookie-consent-reject-all" aria-disabled="true">Reject all</button>
            </div>
          </div>

          <div class="d-md-flex flex-items-center py-3 border-top">
            <div class="f5 flex-1 mb-2 mb-md-0">
              <h5 class="mb-1">Essential cookies</h5>
              <p class="f6 mb-md-0">We use essential cookies to perform essential website functions, e.g. they're used to log you in. 
                <a href="https://docs.github.com/en/github/site-policy/github-subprocessors-and-cookies">Learn more</a>
              </p>
            </div>
            <div class="text-right">
              <h5 class="text-blue">Always active</h5>
            </div>
          </div>

          <div class="d-md-flex flex-items-center py-3 border-top">
            <div class="f5 flex-1 mb-2 mb-md-0">
              <h5 class="mb-1">Analytics cookies</h5>
              <p class="f6 mb-md-0">We use analytics cookies to understand how you use our websites so we can make them better, e.g. they're used to gather information about the pages you visit and how many clicks you need to accomplish a task. 
                <a href="https://docs.github.com/en/github/site-policy/github-subprocessors-and-cookies">Learn more</a>
              </p>
            </div>
            <div class="text-right">
              <div class="BtnGroup mt-1 mt-md-0 ml-2">
                <button class="btn btn-outline BtnGroup-item js-accept-analytics-cookies" type="button">Accept</button>
                <button class="btn btn-outline BtnGroup-item js-reject-analytics-cookies" type="button">Reject</button>
              </div>
            </div>
          </div>

          <div class="text-right py-3 border-top">
            <button class="btn btn-primary js-save-cookie-preferences" type="button" disabled="">Save preferences</button>
          </div>
        </div>
</div></div>  </div>
</div>


  


<div aria-live="polite" class="sr-only"></div></body></html>