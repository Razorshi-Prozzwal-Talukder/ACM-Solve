/*Here you type 6 letter of name. Thats should be print.*/

#include<stdio.h>
int main()
{

   char i,j,type[6];
   for(i=0; i<6; i++)
   {
       scanf("%c", &type[i]);
   }
   for(j=0; j<6; j++)
   {
       printf("%c", type[j]);
   }
   return 0;
}

