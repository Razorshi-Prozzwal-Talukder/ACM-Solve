#include<bits/stdc++.h>
using namespace std;
char x[1000], y[1000], L[100][100], lcs[1000];

void f_lcs(int m, int n)
{
    int i, j, indx;
    for(i=0; i<=m; i++)
    {
        for(j=0; j<=n; j++)
        {
            if(i==0 || j==0)L[i][j] = 0;
            else if(x[i-1]==y[j-1])L[i][j] = L[i-1][j-1]+1;
            else
                L[i][j] =  max(L[i][j-1], L[i-1][j]);
        }
    }
    indx = L[m][n], i=m, j=n;
    lcs[indx] = '\0';
    while(i>0 && j>0)
    {
        if(x[i-1]==y[j-1]){
            lcs[indx-1] = x[i-1];
            i--, j--, indx--;
        }
        else if(L[i-1][j] > L[i][j-1])i--;
        else
            j--;
    }

    cout<<"LCS is : "<<lcs<<endl;
}

main()
{
    cout<<"First Sequence: ";
    cin>>x;
    cout<<"Second Sequence: ";
    cin>>y;
    int n, m;
    m = strlen(x);
    n = strlen(y);
    f_lcs(m, n);

    return 0;
}
