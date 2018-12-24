#include<bits/stdc++.h>
using namespace std;
main()
{
    int n;
    while(cin>>n)
    {
        int sum=0;
        string name;
        for(int i=1; i<=n; i++)
        {
            cin>>name;
            if(name=="Icosahedron")sum+=20;
            else  if(name=="Dodecahedron")sum+=12;
            else  if(name=="Octahedron")sum+=8;
            else  if(name=="Cube")sum+=6;
            else  if(name=="Tetrahedron")sum+=4;
        }
        cout<<sum<<endl;
    }
    return 0;
}
