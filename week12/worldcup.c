#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
/*
63010035
A problem from https://beta.programming.in.th/tasks/0028 (100 points)
for Profund weekly assignment at week 12 (30 Oct. 2020)
*/

struct teamInfo{
    char name[100];
    int scoreTo[5];
    int dai; //made goals
    int seay; //lose goals
    int daiSeay; //+- of goals
    int point;
}team[5];

void swap(int *a, int *b);

int main()
{
    char placeHolder[20];
    for(int i=1;i<=4;i++)
    {
        scanf("%s", team[i].name);
    }
    for(int i=1;i<=4;i++)
    {
        for(int j=1;j<=4;j++)
        {
            scanf("%d", &team[i].scoreTo[j]);
            team[i].dai += team[i].scoreTo[j];
            team[i].seay += team[j].scoreTo[i];
            team[i].daiSeay += team[i].dai - team[i].seay;
        }
    }
    for(int i=1;i<=4;i++)
    {
        for(int j=1;j<=4;j++)
        {
            if( i == j)
                continue;
            if(team[i].scoreTo[j] > team[j].scoreTo[i])
            {
                team[i].point += 3;
            }
            else if(team[i].scoreTo[j] == team[j].scoreTo[i])
            {
                team[i].point += 1;
            }
        }
    }
    for(int i=1;i<=4;i++)
    {
        for(int j=i;j<=4;j++)
        {
            if(team[i].point < team[j].point)
            {
                swap(&team[i].point, &team[j].point);
                strcpy(placeHolder, team[i].name);
                strcpy(team[i].name, team[j].name);
                strcpy(team[j].name, placeHolder);
            }
            else if(team[i].point == team[j].point)
            {
                if(team[i].daiSeay < team[j].daiSeay)
                {
                    swap(&team[i].point, &team[j].point);
                    strcpy(placeHolder, team[i].name);
                    strcpy(team[i].name, team[j].name);
                    strcpy(team[j].name, placeHolder);
                }
                else if(team[i].daiSeay == team[j].daiSeay)
                    if(team[i].dai < team[j].dai)
                    {
                    swap(&team[i].point, &team[j].point);
                    strcpy(placeHolder, team[i].name);
                    strcpy(team[i].name, team[j].name);
                    strcpy(team[j].name, placeHolder);
                    }
            }
        }
    }
    for(int i=1;i<=4;i++)
    {
        printf("%s %d\n", team[i].name, team[i].point);
    }
    return 0;
}

void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}