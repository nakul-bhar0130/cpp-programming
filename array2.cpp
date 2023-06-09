#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    //---------sum of array elements----------

    int n;
    cout<<"enter the value of n: ";
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++)
    {
       cout<<"enter the value of "<< i <<"th student: ";
       cin>>arr[i];
    }
    int sum = 0;
    for (int i=0;i<n;i++)
    {
        sum += arr[i];
    }
    cout<<"sum is: "<<sum<<endl;

    //--------finding largest elements in array-------

    int x;
    cout << "enter the value of x: ";
    cin >> x;
    int arr[x];
    for (int i = 0; i < x; i++)
    {
        cout << "enter the " << i << " th value: ";
        cin >> arr[i];
    }

    int largest = INT16_MIN;
    for (int i = 0; i < x; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }
    cout << "largest number is: " << largest << endl;

    //--------finding smallest number in array elements---------
    int x;
    cout << "enter the value of x: ";
    cin >> x;
    int arr[x];
    for (int i = 0; i < x; i++)
    {
        cout << "enter the " << i << " th value: ";
        cin >> arr[i];
    }
    int smallest = INT16_MAX;
    for (int i=0;i<x;i++)
    {
        if (arr[i] < smallest)
        {
            smallest = arr[i];
        }
    }
    cout<<"smallest number is: "<<smallest<<endl;


    return 0;

    //----------swapping of two numbers--------
    int a, b;
    cout<<"enter value of a: ";
    cin>>a;
    cout<<"enter the value of b: ";
    cin>>b;
    int temp = a;
    a = b;
    b = temp;
    cout<<"now value of a is: "<<a<<endl;
    cout<<"now value of b is: "<<b;

    return 0;

    //----------swapping of 2 numbers by using function SWAP-----------

    int a, b;
    cout<<"before swapping: "<<endl;
    cout<<"a = ";
    cin>>a;
    cout<<"b = ";
    cin>>b;
    swap(a,b);
    cout<<"after swapping: "<<endl;
    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b;

    //----------array in reverse order-------------
    int n;
    cout<<"enter number of elements: ";
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<endl;
    for (int i=n-1;i>=0;i--)
    {
        cout<<arr[i]<<endl;;
    }

    //-------reverse of array-----------
    int n;
    cout<<"enter number of elements in array: ";
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++)
    {
        cout<<"value at "<<i<<"th position is: ";
        cin>>arr[i];
    }
    cout<<endl;

    int start = 0;
    int end = n-1;
    while (start<=end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
    
    for (int i=0;i<n;i++)
    {
        cout<<"now value at "<<i<<"th position is: "<<arr[i]<<endl;
    }
    

}