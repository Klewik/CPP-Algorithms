#include <iostream>
using namespace std;

int n;
int temp;
int j;

int main()
{
    cout << "Enter the total number of entries for the array\n";        //getting an array from the user
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout<<"Enter the "<<i+1<<" element of the array"<<endl;
        cin >> arr[i];
    };

    for (int i = 1; i < n; i++)                                        //applying insertion sort
    {
        temp = arr[i];
        j = i - 1;
    
    while(j>=0 && arr[j]>temp)
    {
        arr[j+1]=arr[j];
        j--;
    };
    arr[j+1]=temp;
    };

    for(int j=0;j<n;j++)                                                 //printing the sorted array
    {
        cout<<arr[j]<<" " ;
    };
    return 0;
};
