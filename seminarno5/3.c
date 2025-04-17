#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX_WORD_LEN 51
#define MAX_WORDS 1000

int main() {
    FILE *in = fopen("input.txt", "r");
    if (!in) {
        printf("Не може да се отвори файлът input.txt\n");
        return 1;
    }

    char *validWords[MAX_WORDS];
    int count = 0;
    char word[MAX_WORD_LEN];
    char lastChar = 0;

    while (fscanf(in, "%50s", word) == 1) {
        if (count == 0) {
            validWords[count++] = strdup(word);
            lastChar = tolower(word[strlen(word) - 1]);
        } else {
            if (tolower(word[0]) == lastChar) {
                validWords[count++] = strdup(word);
                lastChar = tolower(word[strlen(word) - 1]);
            }
        }
    }

    fclose(in);

    FILE *out = fopen("output.bin", "wb");
    if (!out) {
        printf("Не може да се отвори файлът output.bin\n");
        return 1;
    }

    for (int i = 0; i < count; i++) {
        fwrite(validWords[i], sizeof(char), strlen(validWords[i]), out);
        if (i < count - 1) {
            fwrite(" ", sizeof(char), 1, out);
        }
        free(validWords[i]); // освобождаваме паметта
    }

    fclose(out);

    // Прочитане на съдържанието на output.bin
    FILE *readOut = fopen("output.bin", "rb");
    if (!readOut) {
        printf("Не може да се отвори файлът output.bin за четене\n");
        return 1;
    }

    printf("Съдържание на бинарния файл:\n");
    char ch;
    while (fread(&ch, sizeof(char), 1, readOut) == 1) {
        putchar(ch);
    }

    fclose(readOut);
    return 0;
}
