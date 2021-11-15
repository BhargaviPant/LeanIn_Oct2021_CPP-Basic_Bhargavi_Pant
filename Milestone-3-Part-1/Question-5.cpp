//5. Reverse an array and display the output.
#include<iostream>

using namespace std;

int main()
{
	int a[10],i,j,n;
	cout<<"Size of array:";
	cin>>n;
	
	cout<<"Input "<<n<<" elements:";
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	cout<<"Array:";
	for(i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
	cout<<"Reversed Array:";
	for(i=n-1;i>=0;i--){
		cout<<a[i]<<" ";
	}
}
