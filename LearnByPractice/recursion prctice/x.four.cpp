#include<bits/stdc++.h>
using namespace std;
int a[200];
void print_poly(int i, int c)
{
    if(i<c)
    {
        if(i==0) printf("1");
        else
        {
            printf(" + x");
            if(i>1)
                printf("^%d", i);
        }
        print_poly(i+1, c);
    }
}
main()
{
    int i, c;
    cin>>c;
    for(i=0; i<c; i++)
        cin>>a[i];
    print_poly(0, c);
    printf("\n");
    return 0;
}
