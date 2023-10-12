#include<stdio.h>

int main(){
    int a, b, c, d;
    int count = 0;
    for(int i1 = 1; i1 < 10; i1++){
        for(int i2 = 1; i2 < 10; i2++){
            for(int i3 = 1; i3<10; i3++){
                for(int i4 = 1; i4 < 10; i4 ++)
                {
                    if(i1 + i2 + i3 + i4 > 10) continue;
                    if(7 * i1 + 4 * i2 + 6 * i3 + 5 * i4 == 60)
                        printf("%d %d %d %d\n", i1, i2, i3, i4);
                }
            }
        }
    }
    printf("%d", count);
}