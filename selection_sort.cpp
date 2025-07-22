// selection_sort.cpp
// Selection Sort Algorithm
// Idea - Repeatedly select the minimum element from the unsorted part and swap it with the first element of the unsorted portion.
// Time Complexity: O(n^2) in all cases
// Space Complexity: O(1) - In-place
// Stable: No

#include<iostream>
#define SIZE 20
using namespace std;

void selection_sort(int arr[],int n) 
{
  for(int i=0;i<=n-2;i++)
  {
    int min = i;
    for(int j = i+1; j<=n-1;j++)
    {
      if (arr[min] > arr[j])
      {
        min = j;
      }

    }
    if(min !=i)
    {
     int t;
    t = arr[min];
    arr[min] = arr[i];
    arr[i] = t;

    }
    
  
  }

}

int main() 
{
  int n,arr[SIZE],i;
  cout << "Enter the elements in array  =  ";
  cin >> n;

  for(i =0;i<n;i++)
  {
    cout <<  "Enter the element = ";
    cin >> arr[i];
  }

  selection_sort(arr,n);
  cout << "The sorted array is as follows = ";
  for(i =0;i<n;i++)
  {
    cout << arr[i] << " ";
  }
  return 0;
}