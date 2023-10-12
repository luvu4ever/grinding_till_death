#include<stdio.h>
#include<string.h>
#define MAX 12

typedef struct {
    int student_id;
    char name[50];
    int grade;
    int classment;
} In4;

int main()
{
    In4 sv[MAX];
    for(int i=0; i< MAX; i++)
    {
        printf("Nhap MSSV: ");
        scanf("%d", &sv[i].student_id);
        getchar();
        printf("Nhap ten sinh vien: ");
        fgets(sv[i].name, 50, stdin);
        sv[i].name[strlen(sv[i].name)-1] = '\0';
        do{
            printf("Nhap diem sinh vien: ");
            scanf("%d", &sv[i].grade);
        }
        while(sv[i].grade < 0 || sv[i].grade > 10);
        if(sv[i].grade >= 8.5) sv[i].classment = 0;
        else
            if(sv[i].grade >= 6.5) sv[i].classment = 1;
            else
                if(sv[i].grade >= 4.0) sv[i].classment = 2;
                else
                    sv[i].classment = 3;
    }
    for(int i=0; i < MAX; i++)
    {
        printf("%d\t%s\t%d\t%c\n", sv[i].student_id, sv[i].name, sv[i].grade, 'A'+ sv[i].classment);
    }
}