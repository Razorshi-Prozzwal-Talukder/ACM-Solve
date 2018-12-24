#include<bits/stdc++.h>
using namespace std;
int max(int a, int b)
{
    if(a>b)return a;
    else
        return b;
}
void knapsack(int m, int n, int w[], int p[])
{
    int v[100][200], x[10], i, j, sum=0;
    for(i=0; i<=m; i++)v[0][i]=0;
    for(j=0; j<=n; j++)v[j][0]=0;
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=m; j++)
        {
            if(j<w[i])
                v[i][j] = v[i-1][j];
            else
                v[i][j] = max(v[i-1][j], v[i-1][j-w[i]] + p[i]);
        }
    }
    for(i=1; i<=n; i++)x[i]=0;
    i=n;
    j=m;
    while(i>0 && j>0)
    {
        if(v[i][j] != v[i-1][j])
        {
            x[i]=1;
            j = j-w[i];
            i--;
        }
        else
        i--;
    }
    printf("The Optimal Set of Weight is : ");
    for(i=1; i<=n; i++)
    {
        if(x[i]==1)
        {
            printf("X_%d = 1\t",i);
            sum=sum+p[i];
        }
        else
            printf("X_%d = 0\t",i);
    }
    printf("\nTotal profit = %d\n", sum);
}
main()
{
    int w[10], p[10], i, m, n;
    printf("Enter the Number of Item: ");
    cin>>n;

    printf("\nENTER THE WEIGHTS OF THE ITEMS: ");
    for(i=1; i<=n; i++)cin>>w[i];

    printf("\nENTER THE PROFITS OF THE ITEMS: ");
    for(i=1; i<=n; i++)cin>>p[i];

    cout<<"Capacity of Knapsack: ";
    cin>>m;
    knapsack(m, n, w, p);
}
