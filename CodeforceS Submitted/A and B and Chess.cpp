#include<bits/stdc++.h>
using namespace std;
main()
{
    char as[10][10];
    int i, j, white=0, black=0;
    for(i=0; i<8; i++)
        for(j=0; j<8; j++){
            cin>>as[i][j];
                 if(as[i][j]=='Q')white+=9;
            else if(as[i][j]=='R')white+=5;
            else if(as[i][j]=='B')white+=3;
            else if(as[i][j]=='N')white+=3;
            else if(as[i][j]=='P')white+=1;

            else if(as[i][j]=='q')black+=9;
            else if(as[i][j]=='r')black+=5;
            else if(as[i][j]=='b')black+=3;
            else if(as[i][j]=='n')black+=3;
            else if(as[i][j]=='p')black+=1;
        }
        if(white==black)printf("Draw\n");
        else if(white>black)printf("White\n");
        else if(white<black)printf("Black\n");

}
