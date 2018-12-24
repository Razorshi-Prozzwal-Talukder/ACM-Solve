#include<bits/stdc++.h>
using namespace std;
int max(int a, int b)
{
    if(a>b)return a;
    else
        return b;
}
void knapsack(int n, int wt[], int val[], int cap)
{
    int i, j, v[100][100], x[100];
    for(i=0; i<=n; i++)v[i][0] = 0;
    for(i=0; i<=cap; i++)v[0][i] = 0;
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=cap; j++)
        {
            if(wt[i]>j)v[i][j]=v[i-1][j];
            else
                v[i][j] = max(v[i-1][j], val[i]+v[i-1][j-wt[i]]);
        }
    }
    cout<<"Profit is: "<<v[n][cap]<<endl;
    for(i=1; i<=n; i++)x[i]=0;
    i=n, j=cap;
    while(i>0 && j>0)
    {
        if(v[i][j]!=v[i-1][j])
        {
            x[i]=1, i--, j=j-wt[i];
        }
        else
            i--;
    }
    for(i=1; i<=n; i++)cout<<x[i]<<" ";
    cout<<endl;
}
main()
{
    int n, val[100], wt[100], cap, i;
    cout<<"Item: ";
    cin>>n;
    cout<<"Their's weight: ";
    for(i=1; i<=n; i++)cin>>wt[i];
    cout<<"their's value: ";
    for(i=1; i<=n; i++)cin>>val[i];
    cout<<"capacity: ";
    cin>>cap;
    knapsack(n, wt, val, cap);
}
