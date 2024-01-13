#include <stdio.h>
void printArray(int *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d", a[i]);
    }
    printf("\n");
}

void merge(int a[], int low, int mid, int high)
{
    int i, j, k, b[100];
    i = low;
    j = mid + 1;
    k = low;

    while (i <= mid && j <= high)
    {
        if (a[i] < a[j])
        {
            b[k] = a[i];
            k++;
            i++;
        }
        else
        {
            b[k] = a[j];
            j++;
            k++;
        }
    }
    while (i <= mid)
    {
        b[k] = a[i];
        i++;
        j++;
    }
    while (j <= mid)
    {
        b[k] = a[j];
        k++;
        j++;
    }
}

void merge_sort(int a[], int low, int high)
{
    if (low < high)
    {
        int b[100];
        int mid = (low + high) / 2;
        merge_sort(a, low, mid);
        merge_sort(a, mid + 1, high);
        merge(a, mid, low, high);
        for (int i = low; i < high; i++)
        {
            a[i] = b[i];
        }
    }
}

int main()
{
    int a[] = {13, 7, 90, 1, 2, 3, 7, 0};
    int n = 8;
    printArray(a, n);
    merge_sort(a, 0, n - 1);
    printArray(a, n);
    return 0;
}