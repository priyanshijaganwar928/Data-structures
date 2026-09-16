#include <iostream>
using namespace std;
int main()
{
    int arr[100], n, val;
 cout << "Enter size of array: ";
    cin >> n;
cout << "Enter values: ";
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
 cout << "You have entered these values: ";
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
 cout << "\nEnter new value: ";
    cin >> val;
 for(int i = n; i > 0; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[0] = val;
 n++;
 cout << "After insertion of new value: ";
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
 return 0;
}