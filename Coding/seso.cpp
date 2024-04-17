#include <bits/stdc++.h>
using namespace std;
int ls(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
    }
    return -1;
}
int bs(int arr[], int start, int end)
{

    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (arr[mid] == 84)
        {
            return mid;
        }
        else if (arr[mid] > 84)
        {
            end = mid - 1;
        }
        else
            start = mid + 1;
    }
    return -1;
}
void ss(int *arr, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int min = arr[i], mini = i;
        for (int j = i; j < n; j++)
        {
            if (arr[j] < min)
            {
                mini = j;
                min = arr[j];
            }
        }
        swap(arr[i], arr[mini]);
    }
}
void bis(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}
void is(int *arr, int n)
{
    for (int i = 1; i < n; i++)
    {
        int temp = arr[i];
        int j = 2;
        for (j = i - 1; j >= 0; j--)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
            else
                break;
        }
        arr[j + 1] = temp;
    }
}
int main()
{
    int arr[] = {13,2,3,4};
    // int arr[] = {1, 292, 4, 24, 5};
    int n = 4;
    is(arr, n);
    // ss(arr, n);
    for (int c : arr)
        cout << c << endl;
    // cout << ls(arr, n, 83);
    // cout << bs(arr, 0, n - 1);
    return 0;
}