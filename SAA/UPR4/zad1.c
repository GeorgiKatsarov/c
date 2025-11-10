/*kursovite raboti sedmicata ot 24noemvri 2025 da predadat raboti. Kraen srok 15dec.
alchni algoritmi.
*/

/*razbivane na stotinki*/
//itterative and recursive
#include <stdio.h>
void itterative(int cents){
    int coins[4] = {50, 20, 10, 5};
    int count = 0;
    for(int i = 0; i < 4; i++){
        while(cents >= coins[i]){
            cents -= coins[i];
            count++;
        }
    }
    printf("Itterative: %d coins\n", count);
}
int recursive(int cents, int index){
    int coins[4] = {50, 20, 10, 5};
    if(cents == 0){
        return 0;
    }
    if(cents >= coins[index]){
        return 1 + recursive(cents - coins[index], index);
    } else {
        return recursive(cents, index + 1);
    }
}
