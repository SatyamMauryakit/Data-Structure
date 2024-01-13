#include <stdio.h>
void printArray(int *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d", a[i]);
    }
    printf("\n");
}
void bubble_sort(int *a, int n)
{
    int temp;
    for (int i = 0; i < n - 1; i++)
    {
        int isorted = 1;
        printf("working passes is %d\n", i + 1);
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
                isorted = 0;
            }
            
        }
        if (isorted)
        {
            return;
        }
    }
}
int main()
{
    
    int a[] = {10, 42, 1, 53, 2, 5};
    int n = 6;
    printArray(a, n);
    bubble_sort(a, n);
    printArray(a, n);
}