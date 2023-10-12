#include<stdio.h>

typedef struct {
    double tuso, mauso;
} Phanso;

void Reverse(Phanso a[], Phanso b[], int n){
    for(int i=1; i<=n; i++){
        b[i]. mauso = a[i]. tuso;
        b[i]. tuso = a[i]. mauso;
    }
}

int main()
{
    Phanso a[12], b[12];
    int n;
    do{
        printf("Nhap so phan so: ");
        scanf("%d", &n);
    } while (n<5 || n>10);
    for(int i=1; i<=n; i++)
    {
        do{
            printf("Nhap tu so va mau so phan so thu %d\n", i);
            scanf("%lf %lf", &a[i].tuso, &a[i].mauso);
        }
        while (!a[i].mauso);
    }
    printf("Danh sach phan so da nhap la:\n");
    for(int i=1; i<=n; i++)
    {
        printf(" %.2lf \\ %.2lf\n", a[i].tuso, a[i].mauso);
    }
    Reverse(a, b, n);
    printf("Danh sach phan so da dao nguoc la:\n");
    for(int i=1; i<=n; i++)
    {
        printf(" %.2lf \\ %.2lf\n", b[i].tuso, b[i].mauso);
    }

    printf("So sanh:\n");
    for(int i=1; i<=n; i++)
    {
        printf(" %.2lf \\ %.2lf ", a[i].tuso, a[i].mauso);
        if(a[i]. mauso > a[i]. tuso) printf("<");
        else
            if(a[i].mauso < a[i]. tuso) printf(">");
            else
                printf("=");
        printf(" %.2lf \\ %.2lf\n", b[i].tuso, b[i].mauso);
    }
    return 0;
}
