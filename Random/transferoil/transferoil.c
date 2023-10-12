#include <stdio.h>
#include <stdlib.h>

void efficientDelivery(int* capacities, int numTankers, int remainingOil, int* currentDelivery, int index) {
    if (remainingOil == 0) {
        printf("[");
        for (int i = 0; i < numTankers; i++) {
            printf("%d", currentDelivery[i]);
            if (!(i == numTankers - 1)) {
                printf(", ");
            }
        }
        printf("] ");
        return;
    }

    if (index < 0) {
        return;
    }

    for (int i = remainingOil / capacities[index]; i >= 0; i--) {
        currentDelivery[index] = i;
        efficientDelivery(capacities, numTankers, remainingOil - i * capacities[index], currentDelivery, index - 1);
    }
}

void findEfficientDelivery(int* capacities, int numTankers, int totalOil) {
    int* currentDelivery = (int*)malloc(numTankers * sizeof(int));
    efficientDelivery(capacities, numTankers, totalOil, currentDelivery, numTankers - 1);
    free(currentDelivery);
}

int smallest(int *capacities, int numTankers, int totalOil){
    int transferAble[300005];
    for(int i = 0; i <= 300000; i++){
        transferAble[i] = 0;
    }
    for(int i = 0; i<numTankers; i++){
        transferAble[capacities[i]] = 1;
    }
    for(int i = 1; i<= 300000; i++){
        if(transferAble[i] == 1)
            continue;
        for(int j = 0; j<numTankers; j++){
            if(i > capacities[j] && transferAble[i - capacities[j]])
                transferAble[i] = 1;
        }
        if(i >= totalOil && transferAble[i]){
            return i - totalOil;
        }
    }
}

int input(int capacities[], int* totalOil) {
    char tmp;
    int num;
    int i = 0;
    while (1) {
        scanf("%c", &tmp);
        if (tmp == '(' || tmp == ',') {
            scanf("%d", &num);
            capacities[i] = num;
            i++;
        } else if (tmp == ')') {
            break;
        }
    }
    scanf("%d", totalOil);
    return i;
}

int main() {
    int capacities[1000];
    int totalOil;
    int numTankers = input(capacities, &totalOil);
    int efficient = smallest(capacities, numTankers, totalOil);
    if(efficient > 0){
        printf("%d\n", efficient);
        totalOil += efficient;
    }
    findEfficientDelivery(capacities, numTankers, totalOil);
    return 0;
}