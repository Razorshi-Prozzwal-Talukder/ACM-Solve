#include<stdio.h>
int main()
{
    int i, j, n, arr[100],k,temp;
    printf("How many: ");
    scanf("%d", &n);
    printf("Numbers are: ");
    for(i=0; i<n; i++)
        scanf("%d", &arr[i]);

    for(i=0; i<n; i++)
    {
        for(j=0; j<n-i-1; j++)
        {
            if(arr[j]>=arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    printf("\nSorted numbers: ");
    for(k=0; k<n; k++)
        printf("%d ", arr[k]);
    return 0;
}
