#include<bits/stdc++.h>
using namespace std;
int sum_poly(int i, int n, int x)
{
    if(n==0)
        return 1;
    if(i<n)
        return (int)pow(x,i)+sum_poly(i+1, n, x);
    return 0;
}
main()
{
    int n, v, x;
    cin>>x>>n;
    v= sum_poly(0, n, x);
    cout<<v<<endl;
    return 0;
}
