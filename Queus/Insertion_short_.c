#include <stdio.h>
void printArray(int *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d", a[i]);
    }
    printf("\n");
}

void insertion_short(int *a, int n)
{
    int key, j;
    for (int i = 1; i <= n - 1; i++)
    {
        key = a[i];
        j = i - 1;
        while(j >=0 && a[j] < key)
        {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = key;
    }
}

int main()
{
    int a[] = {12, 43, 64, 1, 46, 86};
    int n = 6;
    insertion_short(a, n);
}