#include <iostream>
using namespace std;

int n;

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

    for (int i = 0; i < n - 1; i++)
    {
        int flag = 0;
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j + 1], arr[j]);
                flag = 1;
            }
        }
        if (flag = 0)
        break;
    };

    cout << "Array after sorting is:";
    for (int j = 0; j < n; j++)
    {
        cout << arr[j] << " ";
    };
}