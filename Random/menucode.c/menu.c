//----------------LuvU4ever-------------
#include<stdio.h>

void ReadInput(int *a, int *b){
    printf("Enter 2 numbers: \n");
    scanf("%d", a);
    scanf("%d", b);

    printf("Done\n");
    return;
}

void Add(int a, int b){
    printf("Sum = %d", a+b);
    return;
}
void Mul(int a, int b){
    printf("Mul = %d", a*b);
    return;
}

int main(){
    char order;
    int a, b;
    while(1){

        printf("-----------Menu-----------\n");
        printf("1. Read int a and int b.\n");
        printf("2. Add a and b.\n");
        printf("3. Multiply a and b.\n");
        printf("4. Exit.\n");
        printf("Press 1 - 4 to choose one option from the list\n");

        order = getchar();
        if(order == '4') return 0;
        if(order == '1') ReadInput(&a, &b);
        else if(order == '2') Add(a, b);
        else if(order == '3') Mul(a, b);
        printf("\n-----------------------\n");
        getchar();
    }
    return 0;
}