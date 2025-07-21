// Bubble sort
// Idea - Push the maximum element to the end by swapping adjacent elements.
// Avg or Worst Time Complexity - O(n^2)
// Best Time Complexity - O(n) [Whole array is already sorted]
// Space Complexity - O(1) [In - place sorting]
// Stable - Yes

#include<iostream>
#define SIZE 20
using namespace std;

void bubble_sort(int arr[],int n)
{
  for(int i=0;i<=n-2;i++)
  {
    bool swapped = false;
    for(int j=0;j<=n-2-i;j++)
    {
      if(arr[j]>arr[j+1])
      {
        int t ;
        t = arr[j];
        arr[j] = arr[j+1];
        arr[j+1] = t;
        swapped = true;
      }
    }
    if(!swapped)
      break;
  }
}

int main()
{
  int n, arr[SIZE],i;
  cout << "Enter the number of elements in array = ";
  cin >> n;
  
  for(i=0;i<n;i++)
  {
    cout << "Input the element = ";
    cin >> arr[i] ;
  }

  bubble_sort(arr,n);
  cout << "The sorted array is as follows = ";
  for(i=0;i<n;i++)
  {
    cout << arr[i] << " " ;
  }
  return 0;
}
