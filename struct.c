#include<stdio.h>
    struct teach
    {
int salary;
char name[15];
char department[20];
int exp;
    }td[5];
void main()
{
    int i;
    printf("enter salary,name,department,experience");
    for(i=0;i<5;i++)
    {
        scanf("%d %s %s %d",&td[i].salary,td[i].name,td[i].department,&td[i].exp);
    }
    for(i=0;i<5;i++){
         printf("%d %s %s %d",td[i].salary,td[i].name,td[i].department,td[i].exp);
    }
}