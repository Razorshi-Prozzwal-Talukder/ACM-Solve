#include<bits/stdc++.h>
using namespace std;
main()
{
    int s, v1, v2, t1, t2;
    while(cin>>s>>v1>>v2>>t1>>t2)
    {
        int first , second;
       first = (s*v1) + (2*t1);
       second = (s*v2)+ (2*t2);
       if(first<second)printf("First\n");
       else if(first>second)printf("Second\n");
       else
        printf("Friendship\n");
    }
    return 0;
}
