#include<bits/stdc++.h>
using namespace std;
void knapsack(int n, float weight[], float profit[], float capacity)
{
    float x[200], tp=0;
    int i, j, u;
    u = capacity;

    for(i=0; i<n; i++)x[i]= 0.0;
    for(i=0; i<n; i++)
    {
        if(u<weight[i])break;
        else
        {
            x[i] = 1.0;
            tp = tp + profit[i];
            u = u - weight[i];
        }
    }
    if(i<n)x[i] = u/weight[i];
    tp = tp + (x[i]*profit[i]);

    printf("The result is : ");
    for(i=0; i<n; i++)cout<<x[i]<<" ";
    cout<<endl;
    cout<<"Maximum Profit: "<<tp<<endl;
}
main()
{
    float weight[100], profit[100], capacity, ration[100], temp;
    int num, i , j;
    printf("Number of object: ");
    cin>>num;
    printf("Weight & Profit of each item :");
    for(i=0; i<num; i++)cin>>weight[i]>>profit[i];
    printf("Capacity of Object: ");
    cin>>capacity;
    for(i=0; i<num; i++)ration[i] = profit[i]/weight[i];

    for(i=0; i<num; i++)
    {
        for(j=i+1; j<num; j++)
        {
            if(ration[i]<ration[j])
            {
                temp = ration[j];
                ration[j] = ration[i];
                ration[i] = temp;

                temp = weight[j];
                weight[j] = weight[i];
                weight[i] = temp;

                temp = profit[j];
                profit[j] = profit[i];
                profit[i] = temp;
            }
        }
    }
    knapsack(num, weight, profit, capacity);
    return 0;
}
