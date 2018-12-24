#include<bits/stdc++.h>
using namespace std;
int a[200];
void print_arr(int i, int j)
{
    if(i<=j)
    {
        printf("%d %d\n", a[i],a[j]);
        print_arr(i+1, j-1);
    }
}
main()
{
    int i, c;
    cin>>c;
    for(i=0; i<c; i++)
        cin>>a[i];

    print_arr(0, c-1);
    return 0;
}
