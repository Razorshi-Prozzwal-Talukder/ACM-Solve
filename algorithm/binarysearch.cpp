#include<bits/stdc++.h>
using namespace std;
int binarySearch(int a[], int n, int key)
{
    int start=0, end=n-1, mid=(start+end)/2;
    while(start<=end && a[mid]!=key)
    {
        if(key<a[mid])
            end = mid-1;
        else
            start = mid+1;

        mid = (start+end)/2;

        //if(a[mid]==key)break;
    }
    if(start>end)
        return -1;
    return mid;
}
main()
{
    int a[10], i, key;
    cout<<"Press Your Elements: ";
    for(i=0; i<10; i++)
        cin>>a[i];

    cout<<"Enter Your Key: ";
    cin>>key;
    i = binarySearch(a, 10, key);
    if(i==-1)cout<<"The Key Is Not Found"<<endl;
    else
        cout<<"Your Key is at "<<i<<" index"<<endl;

    return 0;
}
