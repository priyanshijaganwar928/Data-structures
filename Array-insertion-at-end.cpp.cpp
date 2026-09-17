#include <iostream>
using namespace std;
int main()
{
int arr[100],n;
cout << "Enter size of array: ";
cin >> n;
cout << "Enter"<<n<<"values";
for(int i = 0; i < n; i++)
{
cin >> arr[i];
}
cout << "You have entered these values";
for(int i = 0; i < n; i++)
{
cout << arr[i] <<"";
}
 cout << "\nEnter new value";
int val;
cin>>val;
arr[n]=val;
cout<<"after insertion of new array is";
for(int i=0;i<=n;i++)
{
cout<<arr[i]<<"";
}
return 0;
}