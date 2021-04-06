#include<stdio.h>
struct student
{
    long roll;
    char name[122];
    char semister[122];
    float marks;
};
//struct student s;
int main()
{
    struct student s;
    printf("enter the roll number\n");
    scanf("%ld",&s.roll);
    printf("enter the name\n");
    scanf("%s",s.name);
    printf("ener the name semister\n");
    scanf("%s",s.semister);
    printf("enter the marks\n");
    scanf("%f",&s.marks);
    printf("roll =%ld\n",s.roll);
    printf("name=%s\n",s.name);
    printf("semister =%s\n",s.semister);
    printf("marks=%f\n",s.marks);


}
