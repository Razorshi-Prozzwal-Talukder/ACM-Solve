#include<bits/stdc++.h>
using namespace std;
main()
{
    double balance,sum = 0.0,avg=0.0,ad;
     int total,i,test_case=1,coma;
    cin >> total;
    while(total--)
    {
        for(i=1; i<=12; i++)
        {
            cin >> balance;
            sum += balance;
            avg = sum/12.0;
            coma = avg/1000.0;
            ad = fmod(avg,1000.00);
        }
        if(avg < 999.00)
            printf("%d $%.2lf\n",test_case,avg);

        else
            printf("%d $%d,%.2lf\n",test_case,coma,ad);
        test_case++;

        avg = 0;
        sum = 0;

    }

    return 0;
}

