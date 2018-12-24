#define COLMAX 10
#define ROWMAX 12
main()
{
    int row, colum, y;
    row = 1;
    printf("                     MULTIPLICATION TABLE       \n");
    printf("____________________________________________________________\n\n");

    do
    {
    colum = 1;
        do
        {
            y = row*colum;
            printf("%4d",y);
            colum = colum + 1;

        }
        while (colum<= COLMAX);
        printf("\n");
        row=row+1;
    }
    while(row<=ROWMAX);
    printf("_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _");




}

