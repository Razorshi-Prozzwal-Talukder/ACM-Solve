#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int Z,I,M,L;

int f(int x)
{
    return (Z*x + I)%M;
}

int floydCycleFinding(int x0)
{
    int tortoise = f(x0), hare = f(f(x0));
    while (tortoise != hare)
    {
        tortoise = f(tortoise);
        hare = f(f(hare));
    }
    int mu = 0;
    hare = x0;
    while (tortoise != hare)
    {
        tortoise = f(tortoise);
        hare = f(hare);
        mu++;
    }
    int lambda = 1;
    hare = f(tortoise);
    while (tortoise != hare)
    {
        hare = f(hare);
        lambda++;
    }
    return lambda;
}

int main()
{
    int cas = 1;
    while(cin >> Z >> I >> M >> L)
    {

        if(Z==0 && I==0 && M==0 && L==0)
        {
            break;
        }
        cout<<"Case"<<" "<<cas++<<":"<<" "<< floydCycleFinding(L) << endl;
    }
    return 0;
}
