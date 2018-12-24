#include<bits/stdc++.h>
using namespace std;
main()
{
    char main[100], s1[100], s2[100], s3[100], s4[100];
    int test, i, j, m, len2;
    while(scanf("%d",&test)==1)
    {
        getchar();
        for(i=1; i<=test; i++)
        {
            //int k=0;
            int l=0;
             int sum1=0;
            gets(main);
            for(j=0; main[j]!='\0'; j++)
            {
                if(j==0||j==2||j==5||j==7||j==10||j==12||j==15||j==17)
                {
                    main[j] = (main[j]-48)*2;
                    if(main[j]>=10)
                        main[j]=(main[j]%10)+1;

                    sum1 = sum1 + main[j];
                }
                else if(j==1||j==3||j==6||j==8||j==11||j==13||j==16||j==18)
                {
                    s2[l]= main[j];
                    l++;
                }
            }
           // s1[k]='\0';
            s2[l]='\0';
            //len1 = strlen(s1);
            len2 = strlen(s2);
            //cout<<s1<<endl<<s2<<endl;
           /* for(k=0; k<len1; k++)
            {
                sum1 += (s1[k]-48);
            }*/
             int sum2=0;
            for(l=0; l<len2; l++)
            {
                sum2 += (s2[l]-48);
            }
            int sum3 = sum1+sum2;
           // cout<<sum1<<endl;
               if(sum3%10==0)
                   cout<<"Valid"<<endl;
               else
                   cout<<"Invalid"<<endl;
        }
    }
    return 0;
}
