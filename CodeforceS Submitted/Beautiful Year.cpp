#include<bits/stdc++.h>
using namespace std;
main()
{
    int year, arr[1000];
    while(cin>>year)
    {
        int k, count=1, y, x=1, b;
        while(count==1)
        {
            k=0, b=0;
            y = year + x;

            //cout<<y<< endl;

            while(y!=0)
            {
                arr[k]=(y%10);
                k++;
                y = y/10;
            }

           /* for(int a=0; a<k; a++)
                cout<<arr[a]<<" "<<endl;*/

            for(int i=0; i<k-1; i++)
            {
                for(int j=i+1; j<k; j++)
                {
                    if(arr[i]==arr[j])
                        b=1;

                    if(b==1)break;
                }
                if(b==1)break;
            }
            if(b==1)
                x++;

            else
               count=0;

        }
        cout<<year+x<<endl;
    }
    return 0;
}
