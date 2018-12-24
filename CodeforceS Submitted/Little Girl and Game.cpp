#include<bits/stdc++.h>
using namespace std;
char a[10000];
int as[10000], i;
main()
{
   while(cin>>a)
   {
     for(i=0; i<strlen(a); i++)as[a[i]]++;
   int k=0;
     for(i='a'; i<='z'; i++)if(as[i]%2!=0)k++;
     if(k==0 || k%2!=0)printf("First\n");
     else
        printf("Second\n");
   }
   return 0;
}
