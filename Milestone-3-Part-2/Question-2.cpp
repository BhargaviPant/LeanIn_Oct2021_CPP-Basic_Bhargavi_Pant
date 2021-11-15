//Q2. Write a program to implement binary search using function.

#include<iostream>
using namespace std;

#define MAX_SIZE 5

void binary_search(int[],int);

int main()
{
    int arr_search[MAX_SIZE], i,element;
    cout<<"Enter "<<MAX_SIZE<<" Elements for Searching : \n";
    for (i = 0; i < MAX_SIZE; i++)
        cin>>arr_search[i];

	cout<<"Enter Element to Search : ";
    cin>>element;
    binary_search(arr_search,element);
}

void binary_search(int fn_arr[],int element)
{
   int f=0,r=MAX_SIZE,mid;
   
   while(f<=r){
	  mid=(f+r)/2;

	  if (fn_arr[mid] == element) {
         cout<<"\nSearch Element  :"<<element<<"  : Found :  Position : "<<mid+1<<".\n";
         break;
	  }
      else if (fn_arr[mid] < element)
         f = mid + 1;    
      else
         r = mid - 1;
   }
   
   if (f > r)
      cout<<"\nSearch Element : "<<element<<"  : Not Found \n";
}
