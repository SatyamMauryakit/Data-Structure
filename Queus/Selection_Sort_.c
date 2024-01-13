#include <stdio.h>
void selection_sort(int *a, int n)
{
    int indexofmin, temp;
    {
        for (int i = 0; i < n - 1; i++)
        {
            indexofmin = i;
            for (int j = i + 1; j < n; j++)
            {
                if (a[j] < a[indexofmin])
                {
                    indexofmin = j;
                }
            }
            temp = a[i];
            a[i] = a[indexofmin];

            a[indexofmin] = temp;
        }
    }
}
void printArray(int *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", a[i]);
    }
    printf("\n");
}

int main()
{
    int a[] = {4, 5, 39, 0, 24, 2, 1};
    int n = 7;
    printArray(a, n);
    selection_sort(a, n);
    printArray(a, n);
}