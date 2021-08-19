#include<bits/stdc++.h>
using namespace std;

void insertionSort(int a[], int n)

{
    for(int i=1; i<n; i++) //starting from 1 because we have to compare first value with index number 0
    {
        int value = a[i]; //storing a[1] value in a variable
        int index = i; 

            while(index > 0 && a[index -1] > value)
            {
                a[index] = a[index-1];
                index--;
            }

            a[index] = value;
    }
}

int main()
{
    int n;
    cout<<"Enter the numbers to be sorted: "<< " ";
    cin>>n;
    cout<<"Enter the numbers: ";

    int a[100];

    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }

    insertionSort(a,n);
    for(int i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }
    
}