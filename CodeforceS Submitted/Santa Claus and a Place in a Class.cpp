#include<bits/stdc++.h>
using namespace std;
main()
{
    int len_colm, desk_row, place;
    while(cin>>len_colm>>desk_row>>place)
    {
        int i, j, l, number=0;
        for(i=1; i<=len_colm; i++)
        {
            for(j=1; j<=desk_row; j++)
            {
                number++;
                if(number==place)break;
                else
                    number++;
                if(number==place)break;
            }
            if(number==place)break;
        }
        if(place%2==0)
            cout<<i<<" "<<j<<" "<<"R"<<endl;
        else
            cout<<i<<" "<<j<<" "<<"L"<<endl;
    }
    return 0;
}
