#include<stdio.h>
#include<string.h>
void displayStr(char str[]){
    printf("%s\n", str);
}
int main(){
    char fname[20]; //= "Georgi";
    scanf("%s", fname);//separator " "
    fgets(fname, 20, stdin);//separator \n
    printf("%s\n", fname);
    char s[6];
    // s = "Georgi"; ne moje
    char s1[6] = "Georgi";
    displayStr(s1);
    displayStr(s);

}