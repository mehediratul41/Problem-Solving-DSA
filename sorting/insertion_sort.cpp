#include<bits/stdc++.h>
using namespace std;
void insertion_sort(int arr[], int n)
{
    for(int i=0;i<n;i++)
    {
        int j=i;
        while(j>0 && arr[j]<arr[j-1])
        {
            int temp = arr[j];
            arr[j] = arr[j-1];
            arr[j-1] = temp;
            j--;
        }
        cout<<"Runs "<<i <<" times"<<endl;
    }
    //after the insertion sort
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int arr[5];
    cout<<"Enter the five elements of the array: " ;

    for(int i=0 ; i<5 ; i++)
    {
        cin>>arr[i];
    }
    //before insertion sort
    for(int i=0 ;i<5;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    insertion_sort(arr,5);
}
