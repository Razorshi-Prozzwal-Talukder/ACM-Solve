#include<bits/stdc++.h>
using namespace std;
main()
{
    int test, amount, total=0;
   string word;
    scanf("%d",&test);
    getchar();
    while(test--)
    {
      cin>>word;
         if(word=="donate")
        {
            scanf("%d",&amount);
            total+=amount;
        }
        else
            printf("%d\n",total);
    }
    return 0;
}

