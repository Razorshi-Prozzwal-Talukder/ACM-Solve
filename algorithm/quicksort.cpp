#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int arr[123456], n;

/*void swp(int& a, int& b)
{
    int temp = a;
    a = b;
    b = temp;
}*/

int partition(int left, int right)
{
    int pivot = arr[right], index = left, wall = left;
    while(index < right)
    {
        if(pivot > arr[index])
        {
            swap(arr[index], arr[wall]);
            wall++;
        }
        index++;
    }
    swap(arr[wall], arr[right]);
    return wall;
}

void quicksort(int left, int right)
{
   /* for(int tt=0;tt<n;tt++)
        printf("%d ", arr[tt]);*/
    if(left<right)
    {
        int part_index = partition(left, right);
        quicksort(left, part_index-1);
        quicksort(part_index+1, right);
    }
}

main()
{
    int i, n, index_partition;
    cout<<"How many: ";
    cin>>n;
    cout<<"Press Numbers: ";
    for(i=0; i<n; i++)
        cin>>arr[i];

    quicksort(0, n-1);

    cout<<"Sorted numbers: ";
    for(i=0; i<n; i++)
        printf("%d ",arr[i]);

    return 0;
}
