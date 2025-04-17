#include <stdio.h>
#include <stdlib.h>

int main() {
    char inputFileName[100];
    // Можем да зададем изходния файл с фиксирано име или да го попитаме също
    char outputFileName[100] = "encoded.txt";
    int key;
    
    // Четене на името на файла, който ще бъде кодираният
    printf("Въведете името на файла, който ще се кодира: ");
    scanf("%s", inputFileName);
    
    // Четене на ключа (между 2 и 10)
    printf("Въведете ключ (между 2 и 10): ");
    scanf("%d", &key);
    
    if (key < 2 || key > 10) {
        printf("Невалиден ключ. Трябва да бъде между 2 и 10.\n");
        return 1;
    }
    
    // Отваряне на входния файл
    FILE *in = fopen(inputFileName, "r");
    if (!in) {
        printf("Не може да се отвори файлът %s\n", inputFileName);
        return 1;
    }
    
    // Отваряне/създаване на изходния файл
    FILE *out = fopen(outputFileName, "w");
    if (!out) {
        printf("Не може да се отвори файлът %s за запис\n", outputFileName);
        fclose(in);
        return 1;
    }
    
    // Четене и кодиране символ по символ: прилагаме проста Caesar шифър техника
    int ch;
    while ((ch = fgetc(in)) != EOF) {
        // Всеки символ се кодира чрез добавяне на ключа към неговата ASCII стойност
        fputc(ch + key, out);
    }
    
    fclose(in);
    fclose(out);
    
    printf("Файлът беше успешно кодиран.\nРезултатът е записан в %s\n", outputFileName);
    
    return 0;
}
