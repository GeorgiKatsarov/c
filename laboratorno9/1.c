#include<stdio.h>
#include<stdlib.h>
int createFile();
int findEvenAndOddCount();
int sortArrayAndWriteInFile();
int main(){
    int choice;
    do{
        printf("1. Create file\n");
        printf("2. Find even and odd count\n");
        printf("3. Sort array and write in file\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        switch(choice){
            case 1:
                createFile();
                break;
            case 2:
                findEvenAndOddCount();
                break;
            case 3:
                sortArrayAndWriteInFile();
                break;
            case 4:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    } while(choice != 4);
}

createFile(){
    FILE *fp;
    fp=fopen("test.txt","w+");
    if(fp==NULL){
        printf("Error opening file!\n");
        return 1;
    }
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int *arr = (int*)malloc(n * sizeof(int));
    if(arr == NULL){
        printf("Memory allocation failed!\n");
        fclose(fp);
        return 1;
    }
    printf("Enter %d integers:\n", n);
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    fwrite(arr, sizeof(int), n, fp);
    fclose(fp);
    free(arr);
    printf("File created successfully!\n");
    return 0;
}
findEvenAndOddCount(){
    FILE *fp;
    fp=fopen("test.txt","r");
    if(fp==NULL){
        printf("Error opening file!\n");
        return 1;
    }
    int n;
    fread(&n, sizeof(int), 1, fp);
    int *arr = (int*)malloc(n * sizeof(int));
    if(arr == NULL){
        printf("Memory allocation failed!\n");
        fclose(fp);
        return 1;
    }
    fread(arr, sizeof(int), n, fp);
    fclose(fp);
    
    int evenCount = 0, oddCount = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] % 2 == 0){
            evenCount++;
        } else {
            oddCount++;
        }
    }
    
    printf("Even count: %d\n", evenCount);
    printf("Odd count: %d\n", oddCount);
    
    free(arr);
    return 0;
}
sortArrayAndWriteInFile(){
    FILE *fp;
    fp=fopen("test.txt","r+");
    if(fp==NULL){
        printf("Error opening file!\n");
        return 1;
    }
    int n;
    fread(&n, sizeof(int), 1, fp);
    int *arr = (int*)malloc(n * sizeof(int));
    if(arr == NULL){
        printf("Memory allocation failed!\n");
        fclose(fp);
        return 1;
    }
    fread(arr, sizeof(int), n, fp);
    

    for(int i = 0; i < n-1; i++){
        for(int j = 0; j < n-i-1; j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    
    
    fseek(fp, sizeof(int), SEEK_SET); 
    fwrite(arr, sizeof(int), n, fp);
    
    fclose(fp);
    free(arr);
    
    printf("Array sorted and written to file successfully!\n");
    return 0;
}

