/*Calculate the factorial of an integer quantity*/

#include<stdio.h>
 long int factorial(int n)/*function prototype*/
 /*calculate the factorial of n*/
 {
     int i;
     long int j=1;
     if(n>1)
     {
         for(i=2; i<=n; i++)
            j*=i;
     }
     return(j);
 }
 main()
 {
     int n;

     printf("Number = ");
     scanf("%d", &n);
     /*calculate and display the factorial*/
     printf("\n n! = %d", factorial(n));
 }
