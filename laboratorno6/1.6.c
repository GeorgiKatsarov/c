#include<stdio.h>
#include<stdlib.h>
int main(){
    int arr[20][30];
//pulnim s random chisla ot -20 do 20
    for(int i=0; i<20; i++){
        for(int j=0; j<30; j++){
            arr[i][j] = rand() % 41 - 20;
        }
    }
    //printirame go
    for(int i=0; i<20; i++){
        for(int j=0; j<30; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    //vtori masiv ot vsicki polojitelni elementi na purviq
    int arr2[600];
    int k = 0;
    for(int i=0; i<20; i++){
        for(int j=0; j<30; j++){
            if(arr[i][j] > 0){
                arr2[k] = arr[i][j];
                k++;
            }
        }
    }
    //printirame go
    for(int i=0; i<k; i++){
        printf("%d ", arr2[i]);
    }
    //treti masiv ot vsichki otricatelni elementi na purviq
    int arr3[600];
    k = 0;
    for(int i=0; i<20; i++){
        for(int j=0; j<30; j++){
            if(arr[i][j] < 0){
                arr3[k] = arr[i][j];
                k++;
            }
        }
    }
    //printirame go
    for(int i=0; i<k; i++){
        printf("%d ", arr3[i]);
    }
    
    return 0;
}