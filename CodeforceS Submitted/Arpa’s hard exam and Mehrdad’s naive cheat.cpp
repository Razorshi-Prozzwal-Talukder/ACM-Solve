#include<bits/stdc++.h>
using namespace std;
main()
{
  int n;
  while(cin>>n)
  {
      int r;
      r = n%4;
      if(n==0)
        cout<<"1"<<endl;
      else if(r==1)
        cout<<"8"<<endl;
      else if(r==2)
      cout<<"4"<<endl;
      else if(r==3)
        cout<<"2"<<endl;
      else if(r==0 && n!=0)
        cout<<"6"<<endl;
  }
  return 0;
}
