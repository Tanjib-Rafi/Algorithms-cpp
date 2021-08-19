#include<bits/stdc++.h>
using namespace std;

void quicksort(int *a, int low, int high)
{
    int i = low;
    int j = high;
    int pivot = a[(i + j) / 2];

    while (i <= j)
    {
        while (a[i] < pivot)
            i++;
        while (a[j] > pivot)
            j--;
        if (i <= j)
        {
            swap(a[i],a[j]);
            i++;
            j--;
        }
    }
    if (j > low)
        quicksort(a, low, j);
    if (i < high)
        quicksort(a, i, high);
}

int main()
{
    int n;
    cout<<"Enter the number of elements to be sorted:"<<" ";
    cin>>n;
    cout<<"Enter the numbers: ";

    int a[100];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    quicksort(a,0,n-1);
    for(int i=0; i<n; i++)
    {
        cout<<a[i]<< " ";
    }
}