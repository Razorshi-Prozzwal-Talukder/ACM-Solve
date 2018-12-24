#include<bits/stdc++.h>
using namespace std;
main()
{
    long count, Mod4, Mod100, Mod400, Mod15, Mod55, i, Len, leap;
    char year[1000000];
    int print = 0;

    while (cin >> year){

        if ( print != 0 )
           cout<<endl;
        print = 1;

        leap = count = Mod4 = Mod100 = Mod400 = Mod15 = Mod55 = 0;

        Len = strlen (year);

        for (i=0; i< Len; i++) {

            Mod4 = ((Mod4 * 10) + (year[i]-'0')) % 4;
            Mod100 = ((Mod100 * 10) + (year[i]-'0')) % 100;
            Mod400 = ((Mod400 * 10) + (year[i]-'0')) % 400;
            Mod15 = ((Mod15 * 10) + (year[i]-'0')) % 15;
            Mod55 = ((Mod55 * 10) + (year[i]-'0')) % 55;
        }

        if ((Mod4==0 && Mod100!=0) || Mod400==0){
            cout<<"This is leap year."<<endl ;
            leap = 1;
            count = 1;
        }

        if (Mod15==0){
            cout<<"This is huluculu festival year."<<endl;
            count = 1;
        }

        if (leap==1 && Mod55==0)
            cout<<"This is bulukulu festival year."<<endl;

        if (count==0)
            cout<<"This is an ordinary year."<<endl;
    }
    return 0;
}
