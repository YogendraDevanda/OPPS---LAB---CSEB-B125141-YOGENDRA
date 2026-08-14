#include <stdio.h>

struct Student
{
    int rollNo;
    char name[50];
    float marks;
};

int main()
{
    struct Student s[5];
    int i, maxIndex = 0;
    float sum = 0, average;

    printf("Enter details of 5 students:\n");

    for(i = 0; i < 5; i++)
    {
        printf("\nStudent %d\n", i + 1);

        printf("Roll Number: ");
        scanf("%d", &s[i].rollNo);

        printf("Name: ");
        scanf("%s", s[i].name);

        printf("Marks: ");
        scanf("%f", &s[i].marks);

        sum = sum + s[i].marks;

        if(s[i].marks > s[maxIndex].marks)
        {
            maxIndex = i;
        }
    }

    average = sum / 5;

    printf("\nStudent with Highest Marks:\n");
    printf("Roll Number : %d\n", s[maxIndex].rollNo);
    printf("Name        : %s\n", s[maxIndex].name);
    printf("Marks       : %.2f\n", s[maxIndex].marks);

    printf("\nAverage Marks of Class = %.2f\n", average);

    return 0;
}