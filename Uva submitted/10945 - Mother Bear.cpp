#include<bits/stdc++.h>
using namespace std;
main()
{
    char line[150], line2[150];
    int i,j,k,l,m,n, len;
    while(gets(line))
    {
        if(!(strcmp(line, "DONE"))) break;
        else
        {
            for(i=0; line[i]!='\0'; i++)
            {
                while (!((line[i]>='a' && line[i]<='z') || (line[i]>='A' && line[i]<='Z' || line[i]=='\0')))
                {
                    for(j=i; line[j]!='\0'; ++j)
                    {
                        line[j]=line[j+1];
                    }
                    line[j]='\0';
                }
            }
            /*puts(line);
            cout<<len;*/
            for(k=0; line[k]!='\0'; k++)
            {
                if(line[k]>='A' && line[k]<='Z')
                    line[k]=line[k]+32;
            }
            //puts(line);
            for(k=0,n=0; line[k]!='\0';n++, k++)
            {
                line2[n]=line[k];
            }
            line2[n]='\0';
            //strcpy(line2,line);
           // puts(line2);
            //strrev(line2);
             len=strlen(line2);

            for(l=0,k=len-1; l<k ;l++,k--)
            {
                m=line2[k];
                line[k]=line2[l];
                line2[l]=m;
            }
            //puts(line2);
            if(strcmp(line,line2)==0)
                printf("You won't be eaten!\n");
            else
                printf("Uh oh..\n");
        }
    }
    return 0;
}
