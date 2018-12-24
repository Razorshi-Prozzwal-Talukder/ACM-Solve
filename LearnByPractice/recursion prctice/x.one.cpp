#include<bits/stdc++.h>
using namespace std;
int a[1000];
void print_reverse(int i, int n)
{
    if(i<n)
    {
        print_reverse(i+1, n);
        printf("%d ", a[i]);
    }
}
main()
{
    int i, n;
    cout<<"How Many Numbers: "<<endl;
    cin>>n;
    for(i=0; i<n; i++)
        cin>>a[i];
    print_reverse(0, n);
    return 0;
}
