#include<stdio.h>
int main()
{

   int num[4], sum=0, i;
   float avg;
   for(i=1; i<=4; i++)
   {
       scanf("%d", &num[i]);
       sum+=i;
   }

   avg = sum/2;
   printf("Average Number is: %f", avg);
   return 0;

}

