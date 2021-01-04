

#include <bits/stdc++.h>
using namespace std;

int partition (int arr[], int low, int high)
{
    int pivot = arr[high];    // pivot
    int i = low-1;        // Index of smaller element
    for (int j = low; j < high; j++)
    {

          //If current element is smaller than or
          //equal to pivot
        //
        if (arr[j] <= pivot)
        {
            i++;              // increment index of smaller element
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    int temp = arr[i + 1];
    arr[i + 1] = arr[high];
    arr[high] = temp;
    return (i + 1);
}
void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        int p= partition(arr, low, high);
        quickSort(arr, low, p - 1);
        quickSort(arr, p + 1, high);
    }
}
int main()
{
    int size = 9;
    int arr[] = {5, 10, 8, 7, 3, 6, 12, 2, 7};
    quickSort(arr, 0, size);
    cout << "Sorted array:\n";
    for (int i=1; i <= size; i++)
    cout << arr[i] << " ";
    return 0;
}

