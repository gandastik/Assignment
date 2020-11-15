#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdbool.h>
/*
63010035
for Profund weekly assignment at week 13 (13 Nov. 2020)
*/
struct contestantInfo
{
    char id[10];
    float score;
    bool isPass;
};

void sum(int* a, int n);

int main()
{
    int n, counter, index;
    float avg, totalScore;
    scanf("%d", &n);
    struct contestantInfo examinee[n];
    counter = 0;
    totalScore = 0;
    for(int i=0;i<n;i++)
    {
        scanf("%s %f", examinee[i].id, &examinee[i].score);
        totalScore += examinee[i].score;
        examinee[i].isPass = false;
    }
    avg = totalScore / n;
    for(int i=0;i<n;i++)
    {
        if(examinee[i].score > avg)
        {
            sum(&counter, 1);
            examinee[i].isPass = true;
            index = i;
        }
    }
    printf("%d\n", counter);
    for(int i=0;i<n;i++)
    {
        if(examinee[i].isPass)
        {
            printf("%s", examinee[i].id);
            if(i!=index)
            {
                printf("\n");
            }
        }
    }
    return 0;
}

void sum(int* a, int n)
{
    *a += n;
}