#include<bits/stdc++.h>
using namespace std;
main()
{
    int n, t, i, j, k, m;
    char line[200], temp;
    while(cin>>n>>t)
    {
        getchar();
        gets(line);
        int len = strlen(line);

        for(i=0; i<t; i++)
        {
            for(k=0; k<len-1; k++)
            {
                if(line[k]=='B' && line[k+1]=='G')
                {
                    temp = line[k];
                    line[k] = line[k+1];
                    line[k+1] = temp;
                    k++;
                }
            }
        }
        puts(line);
    }
    return 0;
}
