#include <iostream>
using namespace std;

int n;
int location;

int partition(int arr[], int lb, int ub)
{
    int start;
    int end;
    int pivot;
    pivot = arr[lb];
    start = lb;
    end = ub;
    while (start < end)
    {
        while (arr[start] <= pivot)
        {
            start++;
        }
        while (arr[end] > pivot)
        {
            end--;
        }
        if (start < end)
        {
            swap(arr[start], arr[end]);
        }
    }
    swap(arr[lb], arr[end]);
    return end;
}

void quick(int arr[], int lb, int ub)
{
    if (lb < ub)
    {
        location = partition(arr, lb, ub);
        quick(arr, lb, location - 1);
        quick(arr, location + 1, ub);
    };
    
};

int main()
{
    cout << "Enter the total number of entries for the array\n";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the " << i + 1 << " element of the array" << endl;
        cin >> arr[i];
    };
    
    quick(arr, 0, n);

    cout<<"Array after sorting is:";
    for (int j = 0; j < n; j++)
    {
        cout << arr[j] << " ";
    };
    return 0;
};
