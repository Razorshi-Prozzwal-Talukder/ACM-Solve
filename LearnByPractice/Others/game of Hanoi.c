#include<stdio.h>
void transfer(int n, char from, char to, char temp);/*function prototype*/
main()
{
    int n;
    printf("Welcome to the The Tower of Hanoi\n \n");
    printf("How many disk? :");
    scanf("%d", &n);
    printf("\n");
    transfer(n,'L','R','C');
}

void transfer(int n, char from, char to, char temp)
/*transfer n disk from one pole to another*/
/* n = number of disk
from = origin
to = destination
temp = temporary storage*/

{
    if (n>0)
    {
      transfer(n-1, from, temp, to);/*move n-1 disks from origin to temporary*/
      printf("Move disk %d from %c to %c\n",n,from,to);/*move the nth disk from origin to destination*/
      transfer(n-1, temp,to,from);/*move n-1 disks from temporary to destination */
    }
    return;
}

