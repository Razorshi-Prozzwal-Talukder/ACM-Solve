#include<stdio.h>
int main()
{
    int i,n,x;
    printf("Here You Can Know any Kind Of Namota. There is some condition.\nYou can choose anyOne as you wish.\nok...Lets check in: ");
    printf("Please Read the whole direction sincerely.\n");
    printf("Your Namota is start now. First Press any Number: ");
    i=1;
    scanf("%d", &n);
    while(i<=10)
        {
            printf("%d * %d = %d\n", i,n,i*n);
            i++;


        }
        printf("If you wish the next one press 1. Or For going out press 2.\n");
       printf("Enter your Code: ");
       scanf("%d", &x);

       if(x<=0 || x>2 )
       {
           printf("Sorry Boss. Do Not press the Other Code. \n");
           printf("Press the Right Number: ");
           scanf("%d", &x);


        if(x==1)
        {

        i=1;
        printf("Ok. Now Press Your Number: ");
        scanf("%d",&n);
         while(i<=10)
        {
            printf("%d * %d = %d\n", i,n,i*n);
            i++;


        }



         i=1;
        printf("Here is another, SIR!...Press another: ");
        scanf("%d",&n);
         while(i<=10)
        {
            printf("%d * %d = %d\n", i,n,i*n);
            i++;


        }
        printf("THNK YOU SIR. TAKE CARE & BYE.");

        }
        else if(x==2)
        {
            printf("Thank You :-)\tBYE.");
        }



       }

       else if(x==1 || x==2)
       {
           printf("You Press the Wright Code.\nPlease repress the same Code. >> ");
           scanf("%d", &x);



        if(x==1)
        {

        i=1;
        printf("Ok. Now Press Your another Number: ");
        scanf("%d",&n);
         while(i<=10)
        {
            printf("%d * %d = %d\n", i,n,i*n);
            i++;


        }



        i=1;
        printf("Here is another, SIR!...Press another: ");
        scanf("%d",&n);
         while(i<=10)
        {
            printf("%d * %d = %d\n", i,n,i*n);
            i++;


        }
        printf("THNK YOU SIR. TAKE CARE & BYE.");

        }
        else if(x==2)
        {
            printf("Thank You :-)\tBYE.");
        }

       }







    return 0;
}
