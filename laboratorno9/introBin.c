#include<stdio.h>
#include<stdlib.h>

int main(){
    FILE *fp;
    fp=fopen("test.bin","w");
    if(fp==NULL){
        printf("Error opening file!\n");
        return 1;
    }
    int a=5;
    float b=3.14;
    char c='A';
    fwrite(&a,sizeof(int),1,fp);
    fwrite(&b,sizeof(float),1,fp);
    fwrite(&c,sizeof(char),1,fp);
    fclose(fp);
    fp=fopen("test.bin","r");
    if(fp==NULL){
        printf("Error opening file!\n");
        return 1;
    }
    int x;
    float y;
    char z;
    fread(&x,sizeof(int),1,fp);
    fread(&y,sizeof(float),1,fp);
    fread(&z,sizeof(char),1,fp);
    printf("Read values: %d, %f, %c\n", x, y, z);
    fclose(fp);
    return 0;
}