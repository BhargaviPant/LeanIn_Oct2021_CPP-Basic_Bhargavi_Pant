//5. WAP using function to find the largest and second largest element in the array.

#include <iostream>

using namespace std;

int main()
{
    int size,i;
    int arr[50];//variable declaration to size of array
	int large=0, secondLarge=0;

	cout<<"Enter the number of element in array: ";
	cin>>size;
  	cout<<"Enter array elements: ";
	for(i=0; i<size; i++){
		cin>>arr[i];

		if(large<arr[i]){
		secondLarge=large;
		large=arr[i];
		}
		else if(secondLarge<arr[i]){
		secondLarge=arr[i];
		}
	}
	cout<<"\n";
	cout<<""<<large<<" is a largest nunber\n";
	cout<<secondLarge<<" is a second largest nunber";

    return 0;
}
