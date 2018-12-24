#include<bits/stdc++.h>
using namespace std;
main()
{
   char str1[1000], str2[1000], str3[1000], str4[1000];
   while(cin>>str1>>str2>>str3)
   {
       int i,j, k=0;
       int l1 = strlen(str1);
       int l2 = strlen(str2);
       int l3 = strlen(str3);
       for(i=0; i<l1; i++)
       {
           str4[k]=str1[i];
           k++;
       }
       for(j=0; j<l2; j++)
       {
           str4[k]=str2[j];
           k++;
       }
       str4[k] = '\0';
       int l4= strlen(str4);
       sort(str3, str3+l3);
       sort(str4, str4+l4);
       if(strcmp(str4, str3)==0)cout<<"YES"<<endl;
       else
        cout<<"NO"<<endl;
   }
   return 0;
}
