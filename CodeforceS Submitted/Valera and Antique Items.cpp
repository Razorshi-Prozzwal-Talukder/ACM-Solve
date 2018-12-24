#include<bits/stdc++.h>
using namespace std;
int as[1000000], deal[100000];
main()
{
    int n, v;
    while(cin>>n>>v)
    {
        int i, seller_item, j, prize, k=1, g;
        for(i=1; i<=n; i++)
        {
            g=0;
            cin>>seller_item;
            for(j=1; j<=seller_item; j++)
            {
                cin>>prize;
                if(prize<v && g==0)
                {
                    deal[k] = i;
                    k++, g++;
                }
            }
        }
        sort(deal, deal+k);
        printf("%d\n", k-1);
        for(i=1; i<k; i++)
            printf("%d ", deal[i]);

            printf("\n");
    }
    return 0;
}
