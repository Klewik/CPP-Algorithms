#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the total number of entries for the array\n";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the " << i + 1 << " element of the array" << endl;
        cin >> arr[i];
    };

    for (int i = 0; i < n - 1; i++)
    {
        int min_idx = i;

        for (int j = i + 1; j <n; j++)
        {
            if (arr[j] < arr[min_idx])
            {
                min_idx=j;
            };
        };
        if (min_idx != i)
        {
            swap(arr[i], arr[min_idx]);
        };
    };

    cout << "Array after sorting is:";
    for (int j = 0; j < n; j++)
    {
        cout << arr[j] << " ";
    };
}