#include<bits/stdc++.h>
using namespace std;

void bubbleSort(int a[],int n)
{
    for(int i=0; i<n; i++)
    {
        bool Sorted = true;
        for(int j=0; j<n-i-1; j++)
        {
            if(a[j] > a[j+1])
            {
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;

                Sorted = false;
            }    
        }
    
    if(Sorted == true)
        break;
    }

}

int main()
{
    int n;
    cout<<"Enter the number of elements to be sorted: " << " ";
    cin>>n;
    cout<<"Enter the numbers : " << " ";

    int a[100];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }

    bubbleSort(a,n);

    for(int i=0; i<n; i++)
    {
        cout<<a[i]<< " ";
    }



}