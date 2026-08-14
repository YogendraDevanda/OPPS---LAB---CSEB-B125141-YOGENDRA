#include <stdio.h>
#include <stdlib.h>

struct Student
{
    int rollNo;
    char name[50];
    float marks;
};

int main()
{
    int n, i, maxIndex = 0;
    struct Student *s;

    printf("Enter number of students: ");
    scanf("%d", &n);

    s = (struct Student *)malloc(n * sizeof(struct Student));

    if(s == NULL)
    {
        printf("Memory allocation failed!");
        return 0;
    }

    for(i = 0; i < n; i++)
    {
        printf("\nStudent %d\n", i + 1);

        printf("Roll Number: ");
        scanf("%d", &s[i].rollNo);

        printf("Name: ");
        scanf("%s", s[i].name);

        printf("Marks: ");
        scanf("%f", &s[i].marks);
    }

    for(i = 1; i < n; i++)
    {
        if(s[i].marks > s[maxIndex].marks)
        {
            maxIndex = i;
        }
    }

    printf("\nStudent with Highest Marks\n");
    printf("Roll Number : %d\n", s[maxIndex].rollNo);
    printf("Name        : %s\n", s[maxIndex].name);
    printf("Marks       : %.2f\n", s[maxIndex].marks);

    free(s);

    return 0;
}