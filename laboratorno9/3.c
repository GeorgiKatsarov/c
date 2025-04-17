#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct {
    char marka[20];
    char model[6];
    float obem;
    char registraciya; // 'Y' или 'N'
} Avtomobil;
void addCar() {
    Avtomobil car;
    FILE *binFile = fopen("cars.bin", "ab");
    FILE *txtFile = fopen("cars.txt", "a");

    if (!binFile || !txtFile) {
        printf("Грешка при отваряне на файловете!\n");
        return;
    }

    printf("Въведете марка на автомобила: ");
    scanf("%s", car.marka);

    printf("Въведете модел (до 5 символа): ");
    scanf("%s", car.model);
    car.model[5] = '\0'; // За сигурност

    printf("Въведете обем на двигателя (напр. 1.6): ");
    scanf("%f", &car.obem);

    printf("Регистриран ли е автомобилът? (Y/N): ");
    scanf(" %c", &car.registraciya);

    fwrite(&car, sizeof(Avtomobil), 1, binFile);
    fprintf(txtFile, "%s %s %.2f %c\n", car.marka, car.model, car.obem, car.registraciya);

    fclose(binFile);
    fclose(txtFile);
    printf("Записът е добавен успешно.\n");
}

void readAndCompare() {
    Avtomobil car;
    FILE *binFile = fopen("cars.bin", "rb");
    FILE *txtFile = fopen("cars.txt", "r");

    if (!binFile || !txtFile) {
        printf("Грешка при отваряне на файловете за четене!\n");
        return;
    }

    printf("\n--- Данни от бинарния файл ---\n");
    while (fread(&car, sizeof(Avtomobil), 1, binFile)) {
        printf("Марка: %s, Модел: %s, Обем: %.2f, Регистрация: %c\n",
               car.marka, car.model, car.obem, car.registraciya);
    }

    printf("\n--- Данни от текстовия файл ---\n");
    char line[100];
    while (fgets(line, sizeof(line), txtFile)) {
        printf("%s", line);
    }

    fclose(binFile);
    fclose(txtFile);
}

int main() {
    int izbor;
    do {
        printf("\n1. Добави автомобил\n2. Покажи файловете\n0. Изход\nИзбор: ");
        scanf("%d", &izbor);

        switch (izbor) {
            case 1:
                addCar();
                break;
            case 2:
                readAndCompare();
                break;
            case 0:
                printf("Край на програмата.\n");
                break;
            default:
                printf("Невалиден избор.\n");
        }
    } while (izbor != 0);

    return 0;
}