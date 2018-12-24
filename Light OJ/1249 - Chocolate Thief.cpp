#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>

using namespace std;

bool comp(pair<int, string>a,pair<int,string>b)
{
    return a.first < b.first;
}
main()
{
    vector<pair<int, string> >v;
    int wide, length, height, i, test, n, cou=1;
    string name;
    cin>>test;
    while(test--)
    {
        cin>>n;
        v.clear();
        for(i=0; i<n; i++)
        {
            cin>>name;
            cin>>wide;
            cin>>length;
            cin>>height;

            v.push_back(make_pair((wide*length*height),name));

        }

        sort(v.begin(), v.end(),comp);
        printf("Case %d:",cou++);
        if(v[0].first<v[n-1].first)
            printf("%s took chocolate from %s\n",(v[n-1].second).c_str(),(v[0].second).c_str());
        else
            printf("no thief\n");
    }
    return 0;
}
