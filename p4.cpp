#include<iostream>
using namespace std;

int searchElement(int arr[][4],int row,int col,int target)
{
    int s = 0;
    int e = (row*col)-1;

    while(s<=e)
    {
        int mid = (s+e)/2;
        int r = mid/col;
        int c = mid%col;

        if(arr[r][c]==target)
        {
            return mid;
        }
        else if(arr[r][c]<target)
        {
            s = mid+1;
        }
        else
        {
            e = mid-1;
        }
    }
    return -1;
}

int main()
{
    int arr[4][4] = {{8,13,15,19},{20,23,28,29},{41,47,49,53},{55,56,59,63}};
    int target;

    cout<<"Enter the target element"<<endl;
    cin>>target;

    int flag = searchElement(arr,4,4,target);

    if(flag==-1)
    {
        cout<<"Element Not found"<<endl;
    }
    else{
        int r = flag/4;
        int c = flag%4;

        cout<<"Element found at "<<r<<" Row and "<<c<<" col "<<endl;
    }
}