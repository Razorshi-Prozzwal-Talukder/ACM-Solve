#include<bits/stdc++.h>
using namespace std;
main()
{
    int n, reverse=0, temp;
    scanf("%d",&n);
    temp=n;
    while(temp!=0)
    {
        reverse = reverse*10;
        reverse = reverse+temp%10;
        temp = temp/10;
    }
    if(n==reverse)
        printf("%d is Palindrome.\n",n);
    else
        printf("This is noT Palindrome.\n");

    return 0;
}
