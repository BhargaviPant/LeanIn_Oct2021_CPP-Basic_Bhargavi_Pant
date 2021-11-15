//6. Merge array1 and array2 into a single array.

#include<iostream>
using namespace std;

int main()
{
	int n,m,k, arr1[50],arr2[50],arr3[100],size;
	cout<<"Input size of array 1:\n";
	cin>>n;
	
	size=n+m;
	
	cout<<"Input array 1:\n";
	for(int i=0;i<n;i++){
		cin>>arr1[i];
		arr3[i]=arr1[i];
	}
	for(int i=0;i<n;i++){
	cout<<arr1[i]<<" ";
	}cout<<endl;
	
	cout<<"Input size of array 2:\n";
	cin>>m;
	cout<<"Input array 2:\n";
	for(int j=0;j<m;j++){
		cin>>arr2[j];
	}
	size=n+m;
	for(int i=0, k=n; k<size &&  i<m; i++, k++){
		arr3[k]=arr2[i];
	}
	cout<<"Array after merging:";
	for(int i=0;i<size;i++){
		cout<<arr3[i]<<" ";
	}
	
}
