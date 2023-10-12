#include<stdio.h>

typedef struct {
    double rain;
    int hightemp;
    int lowtemp;
} Information ;

int main()
{
    Information month[15];
    int maxtemp, mintemp;
    double sum;
    for(int i=0; i<12; i++)
    {
        // printf("Nhap luong mua, nhiet do cao nhat, nhiet do thap nhat cua thang %d", i);
        // scanf("%d %d %d", month[i].rain, month[i].hightemp, month[i].lowtemp);
        do{
            printf("Nhap luong mua trhong thang %d: ", i+1);
            scanf("%lf"  , &month[i].rain);
        }
        while(month[i].rain < 0 || month[i].rain > 2000);

        do{
            printf("Nhap nhiet do cao nhat, nhiet do thap nhat cua thang %d: ", i+1);
            scanf("%d %d" , &month[i].hightemp, &month[i].lowtemp);
        }
        while(month[i].hightemp < -40 || month[i].hightemp > 50 || month[i].lowtemp < -40 || month[i].lowtemp > 50);

        sum += month[i].rain;
        if(maxtemp < month[i].hightemp)
            maxtemp = month[i].hightemp;
        if(mintemp > month[i].lowtemp)
            mintemp = month[i].lowtemp;
    }
    printf("Luong mua trung binh trong nam la: %lf\n", sum / 12);
    printf("Tong luong mua trong nam la: %lf\n", sum);   
    printf("Nhiet do cao nhat trong nam la: %d\n", maxtemp);
    printf("Nhiet do thap nhat trong nam la: %d\n", mintemp);
    return 0;
}