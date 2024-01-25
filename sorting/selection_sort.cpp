#include<bits/stdc++.h>
using namespace std;

void selection_sort(int arr[], int n){
    for(int i=0; i<n-1; i++)
    {
        int min = i;
        for(int j=i+1; j<n ; j++)
        {
            if(arr[j]<arr[min])
            {
                min = j;
            }
        }
        int temp = arr[min];
        arr[min] = arr[i];
        arr[i] = temp;

    }
    //printing the values after the selection sort
    cout<<"After selection sort: " ;
    for(int i=0; i<n ;i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main()
{
   /* int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    */
    int arr[5];
    cout<<"Enter the 5 length array: ";
    for(int i=0; i<5; i++)
    {
        cin>>arr[i];
    }
    //before selection sort
    cout<<"Array is: " ;
    for(int i=0; i<5;i++)
    {
        cout<<arr[i]<<" " ;
    }
    cout<<endl;

    selection_sort(arr,5);
}
