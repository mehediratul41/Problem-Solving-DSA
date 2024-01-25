#include<bits/stdc++.h>
using namespace std;

void bubble_sort(int arr[],int n)
{
    for(int i=0; i<n-1 ; i++)
    {
        int min = i;
        for(int j=i+1; j<n ; j++)
        {
            if(arr[j]<arr[min])
            {
                int temp = arr[min];
                arr[min] = arr[j];
                arr[j] = temp;
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
