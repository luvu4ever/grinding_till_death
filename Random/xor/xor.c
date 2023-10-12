#include<stdio.h>

char a, b;

int main(){
    a = getchar();
    getchar();
    b = getchar();
    printf("%c", (int) a^ (int) b);
}