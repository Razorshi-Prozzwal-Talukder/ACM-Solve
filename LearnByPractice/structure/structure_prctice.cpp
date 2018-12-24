#include<bits/stdc++.h>
using namespace std;
struct cse12
{
    char name[100];
    int sid;
    double cgpa;
};
void input(struct cse12 student[])
{
    int i;
    cout<<".......... INPUT .........."<<endl;
    for(i=0; i<10; i++)
        scanf("%s %d %lf", student[i].name, &student[i].sid, &student[i].cgpa);

}
void namesort(struct cse12 student[])
{
    int i,j;
    for(i=0; i<9; i++)
    {
        for(j=i+1; j<10; j++)
        {
            if(strcmp(student[i].name, student[j].name)>0)
            {
                struct cse12 temp;

                strcpy(temp.name, student[i].name);
                temp.sid = student[i].sid;
                temp.cgpa = student[i].cgpa;

                strcpy(student[i].name, student[j].name);
                student[i].sid = student[j].sid;
                student[i].cgpa = student[j].cgpa;

                strcpy(student[j].name, temp.name);
                student[j].sid = temp.sid;
                student[j].cgpa = temp.cgpa;
            }
        }
    }
}
void idsort(struct cse12 student[])
{
    int i,j;
    for(i=0; i<9; i++)
    {
        for(j=i+1; j<10; j++)
        {
            if(student[i].name>student[j].name)
            {
                struct cse12 temp;

                strcpy(temp.name, student[i].name);
                temp.sid = student[i].sid;
                temp.cgpa = student[i].cgpa;

                strcpy(student[i].name, student[j].name);
                student[i].sid = student[j].sid;
                student[i].cgpa = student[j].cgpa;

                strcpy(student[j].name, temp.name);
                student[j].sid = temp.sid;
                student[j].cgpa = temp.cgpa;
            }
        }
    }
}
void cgpasort(struct cse12 student[])
{
    int i,j;
    for(i=0; i<9; i++)
    {
        for(j=i+1; j<10; j++)
        {
            if(student[i].cgpa<student[j].cgpa)
            {
                struct cse12 temp;

                strcpy(temp.name, student[i].name);
                temp.sid = student[i].sid;
                temp.cgpa = student[i].cgpa;

                strcpy(student[i].name, student[j].name);
                student[i].sid = student[j].sid;
                student[i].cgpa = student[j].cgpa;

                strcpy(student[j].name, temp.name);
                student[j].sid = temp.sid;
                student[j].cgpa = temp.cgpa;
            }
        }
    }
}

void output(struct cse12 student[])
{
    int i;
    cout<<endl;
    cout<<".......... OUTPUT ..........."<<endl;
    for(i=0; i<10; i++)
        printf("%s\t %d\t %0.2lf\n", student[i].name, student[i].sid, student[i].cgpa);
}
main()
{
    struct cse12 student[10];
    int choice;
    cout<<"Make Choice: 1. NameSort wise 2. IdSort wise 3. CgpaSort wise"<<endl;
    cin>>choice;
    if(choice==1)
    {
        input(student);
        namesort(student);
        output(student);
    }
    if(choice==2)
    {
        input(student);
        idsort(student);
        output(student);
    }
    if(choice==3)
    {
        input(student);
        cgpasort(student);
        output(student);
    }

    return 0;
}
