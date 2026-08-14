#include <stdio.h>

int main()
{
    int n, i;
    int arr[100];
    int max, min;
    int sum = 0;
    float avg;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    max = min = arr[0];

    for(i = 0; i < n; i++)
    {
        if(arr[i] > max)
            max = arr[i];

        if(arr[i] < min)
            min = arr[i];

        sum += arr[i];
    }

    avg = (float)sum / n;

    printf("Largest Element = %d\n", max);
    printf("Smallest Element = %d\n", min);
    printf("Average = %.2f\n", avg);

    return 0;
}