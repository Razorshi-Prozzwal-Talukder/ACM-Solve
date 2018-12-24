#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{

    unsigned number,i ;

    cin>>number;

    int digits = floor(log10(abs(number))) + 1;
    cout << number << " has " << digits << " digits" << endl;

char array[digits];

   for(i = digits - 1,number ;number > 0; i--)
    {
        int digit = number % 10;
        array[i] = 48 + digit;
        number /= 10;

    }


    cout << "String: " << array << endl;

    return 0;
}

