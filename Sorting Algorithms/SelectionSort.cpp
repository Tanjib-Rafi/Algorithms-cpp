#include <bits/stdc++.h> 
using namespace std; 

void SelectionSort(int a[], int n) 
{ 
	int i, j, min; 

	for (i = 0; i < n-1; i++) //n-1 because we are not passing the 0th index of the array in the loop
	{ 
		min = i; 
		for (j = i+1; j < n; j++) 
		if (a[j] < a[min]) 
			min = j; 

		int temp = a[min];
        a[min] = a[i];
        a[i] = temp;

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

    SelectionSort(a,n);
    for(int i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }
	
} 

