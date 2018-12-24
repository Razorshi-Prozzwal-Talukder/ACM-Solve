#include<stdio.h>
#include<math.h>
#include<stdlib.h>///this header file use to define abs
main()
{
    int i,j,k,d,e,f,g;
    scanf("%d %d %d",&i,&j,&k);

    d = (i+j+abs(i-j))/2;

    e = (k+d+abs(k-d))/2;

    printf("%d is the Greatest Number\n",e);

    return 0;

}

