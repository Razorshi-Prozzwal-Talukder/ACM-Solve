#include<bits/stdc++.h>
using namespace std;
main()
{
  int test, t=1, tc;
  cin>>test;
  while(test--)
  {
      string a, b, c = "wine";
      cin>>tc;
      int ok = 1;
      for(int i=1; i<=tc; i++)
      {
          cin>> a >> b;
          if(a==c)
              if(b!=c)ok=2;

              else if()

      }
      if(ok==2)cout<<"Case "<<t<<": "<<"No"<<endl;
      else
        cout<<"Case "<<t<<": "<<"Yes"<<endl;
      t++;
  }
  return 0;
}
