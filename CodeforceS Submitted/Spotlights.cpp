#include <bits/stdc++.h>
using namespace std;
int ara[1010][1010];
main()
{
    int row, coloum, one, count=0, i, j;
    while(cin>>row>>coloum)
    {

        for (i=0; i<row; i++)
        {
            for (j=0; j<coloum; j++)
                cin>>ara[i][j];
        }
///left 2 r8(coloum)
        for (i=0; i<row; i++)
        {
            one=0;
            for (j=0; j<coloum; j++)
            {
                if (ara[i][j]==0)
                {
                    if (one==1)
                        count++;
                }
                else
                    one=1;
            }
        }
///r8 2 left
        for (i=0; i<row; i++)
        {
            one=0;
            for (j=coloum-1; j>=0; j--)
            {
                if (ara[i][j]==0)
                {
                    if (one==1)
                        count++;

                }
                else
                    one=1;
            }
        }
        ///r8 2 left(row)
        for (i=coloum-1; i>=0; i--)
        {
            one=0;
            for (j=row-1; j>=0; j--)
            {
                if (ara[j][i]==0)
                {
                    if (one==1)
                        count++;
                }
                else
                    one=1;
            }
        }
///left 2 r8
        for (i=coloum-1; i>=0; i--)
        {
            one=0;

            for (j=0; j<row; j++)
            {
                if (ara[j][i]==0)
                {
                    if (one==1)
                        count++;

                }
                else
                    one=1;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}
