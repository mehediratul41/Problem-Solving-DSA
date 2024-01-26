#include<bits/stdc++.h>
using namespace std;

void mergeArray(vector<int> &arr , int low , int mid, int high)
{
    vector<int> temp;
    int left = low;
    int right = mid+1;

    while(left<=mid && right<=high)
    {
        if(arr[left]<=arr[right])
        {
            temp.push_back(arr[left]);
            left++;
        }
        else
        {
            temp.push_back(arr[right]);
            right++;
        }
    }
    while(left<=mid)
    {
        temp.push_back(arr[left]);
        left++;
    }
    while(right<=high)
    {
        temp.push_back(arr[right]);
        right++;
    }

    for(int i=low;i<=high;i++)
    {
        arr[i] = temp[i-low];
    }
}

void mergeSort(vector<int> &arr,int low ,int high)
{
    if(low>=high)
    {
        return;
    }
    int mid = (high+low)/2;
    mergeSort(arr,low,mid); //left half
    mergeSort(arr,mid+1,high);//right half
    mergeArray(arr,low,mid,high);//merge the array
}

int main()
{
    vector<int> arr = {5,3,2,1,4,6,5,6,7};
    int n=9;
    //before merge sort
    cout<<"Before merge sort: ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    mergeSort(arr,0,n);

    //After merge sort
    cout<<"After merge sort :";
    for(int i=0;i<=n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
