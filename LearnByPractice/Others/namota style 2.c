#include<stdio.h>
int main()
{
    int i,n;
     printf("Press any Number:\n( ");
     scanf("%d", &n);
     printf(")");

      for(; ; )
      {
          printf("%d * %d = %d\n", n,i,n*i);
          i++;
          if(i>10)
          {
              break;
          }
      }
      return 0;
}
