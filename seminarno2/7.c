#include <stdio.h>

int main() {
    int n;
    char period;
    double price;

    printf("Въведете брой километри и период (D за ден, N за нощ): ");
    if (scanf("%d %c", &n, &period) != 2) {
        printf("Невалиден вход.\n");
        return 1;
    }

    double taxi_start = 0.70;
    double taxi_day_rate = 0.79;
    double taxi_night_rate = 0.90;
    double bus_rate = 0.09;
    double train_rate = 0.06;

    if (n >= 100) {
        price = n * train_rate;
    } else if (n >= 20) {
        price = n * bus_rate;
    } else {
        price = taxi_start + n * (period == 'D' ? taxi_day_rate : taxi_night_rate);
    }
    
    printf("%.2f\n", price);
    
    return 0;
}
