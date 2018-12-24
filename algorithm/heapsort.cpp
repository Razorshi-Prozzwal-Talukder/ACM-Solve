#include<bits/stdc++.h>
using namespace std;
void build_heap(int arr[], int n)
{
    int i,j,k,v, heap;
    for(i=n/2; i>=1; i--)
    {
        k = i;
        v = arr[k];
        heap = 0;
        while(heap==0 && (2*k)<=n)
        {
            j = 2*k;
            if(j<n)
            {
                if(arr[j]<arr[j+1])
                    j++;
            }
            if(v>=arr[j])
                heap=1;
            else
            {
                arr[k] = arr[j];
                k = j;
            }
        }
        arr[k]=v;
    }
}

void heapsort(int arr[], int n)
{
    int temp, i;
    for(i=n; i>=1; i--)
    {
        build_heap(arr, i);
        temp = arr[1];
        arr[1] = arr[i];
        arr[i] = temp;

        cout<<"position - "<<i<<" value-"<<arr[i]<<endl;
    }
}
main()
{
    int arr[500], n, i;
    cout<<"How Many numbers: ";
    cin>>n;
    cout<<endl;
    cout<<"Numbers are: ";
    for(i=1; i<=n; i++)
        cin>>arr[i];

    heapsort(arr, n);

    cout<<endl;

    cout<<"Sorted array is: ";
    for(i=1; i<=n; i++)
        cout<<arr[i]<<" ";
    return 0;
}
