#include<bits/stdc++.h>
using namespace std;
main()
{
    int arr[5][5], i, j, row, coloum;

    for(i=0; i<5; i++)
    {
        for(j=0; j<5; j++)
        {
            cin>>arr[i][j];
            if(arr[i][j]==1)
            {
                row = i;
                coloum = j;
            }
        }
    }
    int sum = abs(2-row) + abs(2-coloum);
    cout<<sum<<endl;
    return 0;
}
