#include<bits/stdc++.h>
using namespace std;
queue<int>Q;
queue<int>Q1;
main()
{
    int n, m, a, i, index;
    while(cin>>n>>m)
    {
      for(i=1; i<=n; i++)
      {
          cin>>a;
          Q.push(a);
          Q1.push(i);
      }
      while(!Q.empty())
      {
          a= Q.front();
          if(a<=m)
          {
              Q.pop();
              index = Q1.front();
              Q1.pop();
          }
          else
          {
              Q.pop();
              a = a-m;
              Q.push(a);
              i = Q1.front();
              Q1.pop();
              Q1.push(i);
          }
      }
      cout<<index<<endl;
    }
    return 0;
}
