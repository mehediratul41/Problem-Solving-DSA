#include<bits/stdc++.h>
using namespace std;

void bubble_sort(int arr[],int n)
{
    for(int i=n-1; i>=0 ; i--)
    {

        for(int j=0; j<=i-1 ; j++)
        {
            if(arr[j+1]<arr[j])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }

        }
    }
    //after bubble sort
    cout<<"After bubble sort: ";
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int arr[5];
    cout<<"Enter the array elements: " ;
    for(int i=0 ; i<5 ;i++)
    {
        cin>>arr[i];
    }
    cout<<"Before sort: ";
    for(int i=0; i<5;i++)
    {
        cout<<arr[i] << " ";
    }
    cout<<endl;
    bubble_sort(arr,5);
}
