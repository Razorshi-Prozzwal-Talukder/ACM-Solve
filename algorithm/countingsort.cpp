#include<bits/stdc++.h>
using namespace std;
void CountingSort(int a[], int sort_arr[], int maximum_number, int n)
{
    int ax[maximum_number];
    int i, j;

    for(i=0; i<=maximum_number; i++)
        ax[i]=0;

    for(j=1; j<=n; j++)
        ax[a[j]] = ax[a[j]] + 1;

    for(i=1; i<=maximum_number; i++)
        ax[i] = ax[i] + ax[i-1];

    for(j=n; j>=1; j--)
    {
        sort_arr[ax[a[j]]] = a[j];
        ax[a[j]] = ax[a[j]]-1;
    }

}
main()
{
    int n, i, j, k, a[100], sort_arr[100];
    cout<<"How many number: ";
    cin>>n;
    cout<<"Numbers are: ";

    for(i=1; i<=n; i++)
        cin>>a[i];

    int maximum_number = a[1];
    for(i=2; i<=n; i++)
    {
        if(a[i]> maximum_number)
            maximum_number = a[i];
    }
    CountingSort(a, sort_arr, maximum_number, n);
    cout<<"After Sorting : ";
    for(j=1; j<=n; j++)
        cout<<sort_arr[j]<<" ";

    return 0;
}
