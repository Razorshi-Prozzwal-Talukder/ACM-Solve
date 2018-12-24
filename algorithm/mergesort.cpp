#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int arr1[123456];
int arr2[123456];

void merge(int left, int mid, int right)
{
    int x=left, y=mid+1, index = 0;
    while(x<=mid && y<=right)
    {
        if(arr1[x]<arr1[y])
            arr2[index]=arr1[x], x++;
        else
            arr2[index]=arr1[y], y++;

        index++;
    }
    while(x<=mid)
        arr2[index]=arr1[x], x++, index++;
    while(y<=right)
        arr2[index]=arr1[y], y++, index++;

    for(int k=0; k<index; k++)
    {
        arr1[left] = arr2[k];
        left++;
    }
}
void mergesort(int left, int right)
{
    if(left<right)
    {
        int mid = (left + right)/2;
        mergesort(left, mid);
        mergesort(mid+1, right);
        merge(left, mid, right);
    }
}
main()
{
    int n, i, j;
    cout<<"How Many: ";
    cin>>n;
    cout<<"Numbers are: ";
    for(i=0; i<n; i++)
        cin>>arr1[i];

    mergesort(0, n-1);
    cout<<"Sorted Sequence is: ";
    for(j=0; j<n; j++)
        cout<<arr1[j]<<" ";
    return 0;
}
