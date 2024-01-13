//22.1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct item {
    char id[10];
    char name[102];
    char unit[12];
    int price_buy;
    int price_sell;
    int profit;
};

int compare(const void *a, const void *b) {
    struct item *item1 = (struct item*) a;
    struct item *item2 = (struct item*) b;
    if (item1->profit != item2->profit) {
        return item2->profit - item1->profit;
    } else {
        return strcmp(item1->id, item2->id);
    }
}

void inputItems(item &items) {
	static int id = 0;
    // Tính toán mã m?t hàng
//    int id = i + 1;
//    int a = id / 1000;
//    int b = (id / 100) % 10;
//    int c = (id / 10) % 10;
//    int d = id % 10;
    sprintf(items.id, "MH%0004d", ++id);

    // Nh?p thông tin c?a m?t hàng
    fgets(items.name, sizeof(items.name), stdin);
    items.name[strcspn(items.name, "\n")] = '\0';

    fgets(items.unit, sizeof(items.unit), stdin);
    items.unit[strcspn(items.unit, "\n")] = '\0';

    scanf("%d", &items.price_buy);

    scanf("%d", &items.price_sell);
    getchar();
    
    items.profit = items.price_sell - items.price_buy;
}

void printfItem(struct item items) {
    printf("%s %s %s %d %d %d\n", items.id, items.name, items.unit, items.price_buy, items.price_sell, items.profit);
}


int main() {
    int n;
    scanf("%d", &n);
    getchar();

    struct item items[n];

    for (int i = 0; i < n; i++) {
        inputItems(items[i]);
    }

    qsort(items, n, sizeof(struct item), compare);

    for (int i = 0; i < n; i++) {
        printfItem(items[i]);
    }
}
