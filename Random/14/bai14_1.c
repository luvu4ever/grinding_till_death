#include<stdio.h>

typedef struct {
    int day, month, year;
} Date;

int checkDate(Date a)
{
    int monthday[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    
        int check = 1;
        if(a.year <= 0) 
            check = 0;
        if(a.month <= 0 || a.month > 12)   
            check = 0;
        if(a.day <= 0 || a.day > monthday[a.month]) 
            check = 0;
        return check;
}

void Inp(Date a)
{
    do{
        printf("Nhap ngay thang nam voi cau truc dd mm yyyy: ");
        scanf("%d %d %d",&a.day, &a.month, &a.year);
    }
    while(!checkDate(a));
    // printf("%d\\%d\\%d",a.day,a.month,a.year);
}

int cmpDate(Date a, Date b){
    // printf("%d\\%d\\%d",a.day,a.month,a.year);
    if(a.year > b.year)
        return -1;
    if(a.year < b.year)
        return 1;
    if(a.month > b.month)
        return -1;
    if(a.month < b.month)
        return 1;
    if(a.day > b.day)
        return -1;
    if(a.day < b.day)
        return 1;
    return 0;
}

int main()
{
    Date date_1, date_2;
    Inp(date_1);
    Inp(date_2);
    printf("Ket qua cua ham cmpdate la: %d", cmpDate(date_1, date_2));
    return 0;
}