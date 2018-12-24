#include<bits/stdc++.h>
using namespace std;
main()
{
    char a[100], b[100];
    printf("Please write a word or sentence: ");
    gets(a);
    strcpy(b,a);
    strrev(b);
    if(strcmp(a,b)==0)
        printf("This is Palindrome.\n");
    else
        printf("This is not Palindrome.\n");

    return 0;
}
