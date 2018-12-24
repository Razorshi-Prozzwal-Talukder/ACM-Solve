#include<stdio.h>
int main()
{
   int ft_marks[10]= {83,86,97,100,54,69,48,45,1,6},
   st_marks[10]= {89,78,45,12,65,32,45,16,2,3},
   final_marks[10]={98,80,90,78,98,78,79,94,90,100};
   int i;
   double total_marks[10];

   for(i=0; i<10; i++)
   {
       total_marks[i]=ft_marks[i]/4.0 + st_marks[i]/4.0 + final_marks[i]/2.0;
   }

   for(i=1; i<=10; i++)
   {
      printf("Roll No: %d\tTotal Marks: %0.0lf\n",i,total_marks[i-1]);
   }



    return 0;
}

