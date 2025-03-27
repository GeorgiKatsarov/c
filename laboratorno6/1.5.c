#include<stdio.h>
#include<stdlib.h>
int main(){
    int first[5][5];
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            first[i][j] = rand() % 100;
        }
    }
    int second[5][5];
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            second[i][j] = rand() % 100;
        }
    }
    int third[50];
    //pulnim tretiq masiv s elementite na purvite dva
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            third[i*5+j] = first[i][j];
            third[i*5+j+25] = second[i][j];
        }
    }
    printf("First matrix:\n");
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            printf("%d ", first[i][j]);
        }
        printf("\n");
    }
    printf("Second matrix:\n");
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            printf("%d ", second[i][j]);
        }
        printf("\n");
    }
    printf("Third matrix:\n");
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            printf("%d ", third[i*5+j]);
        }
        printf("\n");
    }
    return 0;
    

}