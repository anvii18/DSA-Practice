// binary_search.cpp
// Binary Search Algorithm
// Efficiently finds the position of a key in a sorted array

#include<iostream>
#define SIZE 20
using namespace std;

void binary_search(int arr[SIZE],int n,int key,int *p)
{
  int low=0,mid,high=n-1;

  while(low<=high)
  {
     mid = (low + high)/2;
     if(arr[mid] == key)
     {
      *p = mid;
      return;
     }
     else if(arr[mid]>key)
     {
      high = mid - 1;
     }
     else
     {
      low = mid + 1;
     }
  }
  *p = -1;
}

int main() 
{
  int i,n,arr[SIZE],key,index;
  cout<< "Enter the number of elements in an array = ";
  cin >> n;

  for(i=0;i<n;i++)
  {
    cout << "Enter the element = ";
    cin >> arr[i];
  }

  cout << "Enter the key element = ";
  cin >> key;

  binary_search(arr,n,key,&index);
  if(index!=-1)
  {
    cout << " Key found at index " << index;
  }
  else
  {
    cout << "Key not found";
  }
 
}