#include <stdio.h>
#include <math.h>

int main() {
    float w, h;
    int columns, rows;

    printf("Enter width (m): ");
    scanf("%f", &w);

    printf("Enter height (m): ");
    scanf("%f", &h);

    columns = (int)((w-1) / 1.2);
    rows = (int)(h / 0.7);

    int seats = (columns * rows) - 3;

    printf("Seats: %d", seats);

    return 0;
}
