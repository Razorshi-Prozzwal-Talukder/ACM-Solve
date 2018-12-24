#include<bits/stdc++.h>
using namespace std;
//string s1, s2;
int dist(string s1, string s2)
{
    int m, n, i, j, v[100][100];
    m = s1.length();
    n = s2.length();
   //  cout<<m<<" "<<n<<endl;
    for(i=0; i<=m; i++)v[i][0] = i;
    for(j=0; j<=n; j++)v[0][j] = j;

    for(i=1; i<=m; i++)
    {
        for(j=1; j<=n; j++)
        {
            if(s1[i-1]==s2[j-1])v[i][j] = v[i-1][j-1];
            else
                v[i][j] = 1 + min(v[i-1][j-1], min(v[i][j-1], v[i-1][j]));
        }
    }
    return v[m][n];
}
main()
{
    string s1, s2;
    cin>>s1>>s2;
    int dis;
    dis = dist(s1, s2);
    cout<<"Minimum Distance is : "<<dis<<endl;
    return 0;
}
