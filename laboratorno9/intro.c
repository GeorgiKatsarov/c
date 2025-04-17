#include<stdio.h>

int main(){
    char str[]="This is a file system test. \n";
    FILE *fp;
    fp=fopen("test.txt","w+");
    if(fp==NULL){
        printf("Error opening file!\n");
        return 1;
    }
    fprintf(fp,"%s",str);
    fclose(fp);
    fp=fopen("test.txt","r+");
    if(fp==NULL){
        printf("Error opening file!\n");
        return 1;
    }
    char ch;
    while((ch=fgetc(fp))!=EOF){
        printf("%c",ch);
    }
}