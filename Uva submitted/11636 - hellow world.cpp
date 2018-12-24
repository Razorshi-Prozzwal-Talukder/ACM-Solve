#include<bits/stdc++.h>
using namespace std;
main()
{

int number, test = 1;
    while(cin >> number && number > 0)
    {
        int hello = 1, count = 0;
        while(hello < number)
        {
            hello+=hello;
            count++;
        }
        cout << "Case " << test++ << ": " << count << endl;
    }
    return 0;
}
