#include <stdio.h>
#include <stdlib.h>

#define MAX_EMPLOYEES 30
#define OVERTIME_THRESHOLD 40
#define OVERTIME_RATE 1.5
#define TAX_RATE 0.0365

// Структура за данни на сътрудник
struct Employee {
    int id;               // Идентификационен номер
    float hourlyRate;     // Почасова ставка
    float hoursWorked;    // Часове отработени за седмица
    float weeklySalary;   // Изчислена седмична заплата
};

// Функция за изчисляване на седмичната заплата
float calculateWeeklySalary(float hourlyRate, float hoursWorked) {
    float overtimeHours = 0;
    if (hoursWorked > OVERTIME_THRESHOLD) {
        overtimeHours = hoursWorked - OVERTIME_THRESHOLD;
        hoursWorked = OVERTIME_THRESHOLD;
    }
    float salary = (hoursWorked * hourlyRate) + (overtimeHours * hourlyRate * OVERTIME_RATE);
    salary = salary * (1 - TAX_RATE); // Приложение на данъка
    return salary;
}

// Функция за добавяне на нов сътрудник
void addEmployee(FILE *file) {
    struct Employee emp;
    
    printf("Въведи ID на сътрудника: ");
    scanf("%d", &emp.id);
    printf("Въведи почасова ставка: ");
    scanf("%f", &emp.hourlyRate);
    printf("Въведи отработени часове: ");
    scanf("%f", &emp.hoursWorked);
    
    // Изчисляваме заплатата
    emp.weeklySalary = calculateWeeklySalary(emp.hourlyRate, emp.hoursWorked);

    // Записваме сътрудника в двоичния файл
    fseek(file, 0, SEEK_END); // Преместваме курсора в края на файла
    fwrite(&emp, sizeof(struct Employee), 1, file);

    printf("Сътрудник с ID %d добавен успешно.\n", emp.id);
}

// Функция за извеждане на всички сътрудници
void displayEmployees(FILE *file) {
    struct Employee emp;
    fseek(file, 0, SEEK_SET); // Преместваме курсора в началото на файла

    printf("\nСписък на сътрудниците:\n");
    while (fread(&emp, sizeof(struct Employee), 1, file)) {
        printf("ID: %d, Почасова ставка: %.2f, Отработени часове: %.2f, Седмична заплата: %.2f лв\n", 
               emp.id, emp.hourlyRate, emp.hoursWorked, emp.weeklySalary);
    }
}

// Главна функция
int main() {
    FILE *file;
    int choice;
    
    // Отваряме или създаваме двоичен файл
    file = fopen("employees.dat", "rb+");
    if (file == NULL) {
        file = fopen("employees.dat", "wb+");
        if (file == NULL) {
            printf("Грешка при отваряне на файла.\n");
            return 1;
        }
    }

    // Меню
    while (1) {
        printf("\nМеню:\n");
        printf("1. Добави сътрудник\n");
        printf("2. Покажи всички сътрудници\n");
        printf("3. Изход\n");
        printf("Въведи избор: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addEmployee(file);
                break;
            case 2:
                displayEmployees(file);
                break;
            case 3:
                fclose(file);
                printf("Изход от програмата.\n");
                return 0;
            default:
                printf("Невалиден избор. Моля опитай отново.\n");
        }
    }
}
