#include<stdio.h>

struct contestants{
    char name[31];
    int total;
}contestant[9];

int main(){
    int n, vote;
    for(int i=1;i<=8;i++){
        scanf("%s", contestant[i].name);
        contestant[i].total = 0;
    }
    scanf("%d", &n);
    for(int i=0;i<n;i++){
        scanf("%d", &vote);
        for(int j=1;j<=8;j++){
            if(vote == j){
                contestant[j].total += 1;
            }
        }
    }
    int min = 200000000;
    for(int i=1;i<=8;i++){
        if(contestant[i].total < min){
            min = contestant[i].total;
        }
    }
    for(int i=1;i<=8;i++){
        if(contestant[i].total > min){
            printf("%s\n", contestant[i].name);
        }
    }
    return 0;
}
/* test case 1 
A B C D E F G H
20
2 1 1 3 4 5 6 2 3 4 5 6 1 7 2 3 4 1 2 3
expected output : A B C D E F G
*/
/* test case 2 
A B C D E F G H
30
1 1 1 1 1 1 2 2 2 2 3 3 3 3 3 4 4 4 4 4 5 5 5 6 6 6 7 7 8 8
expected output : A B C D E F
*/
/* test case 3 
Tony Van Deisel Rock Yamada Jame Nadej Newton
100
2 2 2 3 6 8 1 6 5 5 7 8 7 6 5 3 3 7 7 2 6 1 3 8 5 1 6 3 8 3 3 1 8 2 2 2 7 8 5 1 8 5 7 6 5 4 3 2 4 6 8 4 7 8 6 5 5 8 7 7 8 6 3 2 8 2 5 3 7 5 8 2 7 7 8 3 2 5 8 7 5 8 1 7 5 6 4 7 7 5 7 1 5 5 5 2 8 2 5 4 
expected output : Tony Van Deisel Yamada Jame Nadej Newton
*/