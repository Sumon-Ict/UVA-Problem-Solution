#include<stdio.h>
struct result
{
    long roll;
    struct exam
    {
        float marks;
        struct student
        {
            char name[122];

        }s;
    }e;
};
  struct result r;
int main()
 //struct result r;
{

    //struct result r;

    printf("enter the roll number \n");
    scanf("%ld",&r.roll);
    printf("enterr the marks\n");
    scanf("%f",&r.e.marks);
    printf("enter the name\n");
    scanf("%s",r.e.s.name);
    printf("roll: %ld\n",r.roll);
    printf("marks: %f\n",r.e.marks);
    printf("name: %s\n",r.e.s.name);


}
