#include<stdio.h>

struct Date {
    int day;
    int month;
    int year;
};


void Inp(struct Date *today){
    int monthday[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    //do{
        printf("Nhap nam: ");
        scanf("%d",today.year);
    //}
    //while(today.year <= 0 || today.year >= 30);
    do{
        printf("Nhap thang: ");
        scanf("%d",today.month);
    }
    while(*today.month <= 0 || *today.month > 12);
    do{
        printf("Nhap ngay: ");
        scanf("%d",today.day);
    }
    while(*today.day <= 0 || *today.day > monthday[today.month-1]);
}

int cmpDate(struct Date *a, struct Date *b){
    // if(a.year < b.year)
    //     return -1;
    // if(a.year > b.year)
    //     return 1;
    // if(a.month < b.month)
    //     return -1;
    // if(a.month > b.month)
    //     return 1;
    // if(a.day < b.day)
    //     return -1;
    // if(a.day > b.day)
    //     return 1;
    // return 0;
}

int main()
{
    struct Date *date_1, *date_2;
    Inp(date_1);
    Inp(date_2);
    printf("%d\\%d\\%d\n", date_1.day, date_1.month, date_1.year);
    printf("Ket qua cua ham cmpdate la: %d", cmpDate(date_1, date_2));
    return 0;
}