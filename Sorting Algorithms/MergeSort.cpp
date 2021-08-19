#include<bits/stdc++.h>
using namespace std;

void merge(int *a,int left, int mid, int right)
{
    int size_of_left = mid-left+1;
    int size_of_right = right - mid;

    int temp1[30], temp2[30];

    for(int i=0; i<size_of_left; i++)
    {
        temp1[i]=a[left+i];
    }
    for(int j=0; j<size_of_right; j++)
    {
        temp2[j]=a[mid+1+j];
    }

    int i=0,j=0,k=left;

    while(i<size_of_left && j<size_of_right)
    {
        if(temp1[i] <= temp2[j])
        {
            a[k]=temp1[i];
            i++;
        }
        else
        {
            a[k]=temp2[j];
            j++;
        } 
        k++;   
    }

    while(i<size_of_left)
    {
        a[k]=temp1[i];
        i++;
        k++;
    }

    while(j<size_of_right)
    {
        a[k]=temp2[j];
        j++;
        k++;
    }


}

void mergesort(int a[], int left,int right)
{
    if(left>=right)
        return;

    int mid = left + (right - left)/2; // it will avoid int overflow

    mergesort(a, left, mid);
    mergesort(a,mid+1,right);

    merge(a,left,mid,right);
}

int main()
{
    int n;
    cout<<"Enter the number of elements to be sorted:" << " ";
    cin>>n;
    cout<<"Enter the numbers: ";

    int a[100];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }

    mergesort(a,0,n-1);
    for(int i=0; i<n; i++)
    {
        cout<<a[i]<< " ";
    }
}