#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_PRODUCTS 100
#define MAX_ORDERS 100
#define NAME_LEN 50
#define ADDR_LEN 100

typedef struct {
    char name[NAME_LEN];
    float price;
    int id;
    int exists;
} Product;

typedef struct {
    char address[ADDR_LEN];
    int productId;
} Order;

Product products[MAX_PRODUCTS];
Order waitingOrders[MAX_ORDERS];
int productCount = 0;
int orderCount = 0;

int findProductIndexById(int id) {
    for (int i = 0; i < productCount; i++) {
        if (products[i].id == id && products[i].exists)
            return i;
    }
    return -1;
}

void executeWaitingOrders() {
    for (int i = 0; i < orderCount; ) {
        int productIndex = findProductIndexById(waitingOrders[i].productId);
        if (productIndex != -1) {
            printf("Client %s ordered %s\n", waitingOrders[i].address, products[productIndex].name);
            for (int j = i; j < orderCount - 1; j++) {
                waitingOrders[j] = waitingOrders[j + 1];
            }
            orderCount--;
        } else {
            i++;
        }
    }
}

int main() {
    char command[20];

    while (1) {
        scanf("%s", command);

        if (strcmp(command, "END") == 0)
            break;

        if (strcmp(command, "Product") == 0) {
            Product p;
            scanf("%s %f %d", p.name, &p.price, &p.id);
            p.exists = 1;
            products[productCount++] = p;
            executeWaitingOrders();
        } else if (strcmp(command, "Order") == 0) {
            Order o;
            scanf("%s %d", o.address, &o.productId);

            int productIndex = findProductIndexById(o.productId);
            if (productIndex != -1) {
                printf("Client %s ordered %s\n", o.address, products[productIndex].name);
            } else {
                waitingOrders[orderCount++] = o;
            }
        }
    }

    return 0;
}
