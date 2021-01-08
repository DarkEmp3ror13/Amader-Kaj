#include <iostream> 
using namespace std; 
  
int search(int arr[], int n, int x) 
{ 
    int i; 
    for (i = 0; i < n; i++) 
        if (arr[i] == x) 
            return i; 
    return -1; 
} 
  
int main() 
{ 
      int num,x;
    int i,arr[30] , keynum;
    cout<<"Enter the number of elements   ";
    cin>>num;
    int array[num];
    cout<<"Enter the elements one by one \n";
    for (i = 0; i < num; i++)
    {
        cin>> array[i];
    }
    cout<<"Enter the element to be searched   ";
    cin>>keynum;
    int n = sizeof(arr) / sizeof(arr[0]); 
    int result = search(arr, n, x); 
   (result == -1)? cout<<"Element is not present in array" 
                 : cout<<"Element is present at index " <<result; 
   return 0; 
} 
