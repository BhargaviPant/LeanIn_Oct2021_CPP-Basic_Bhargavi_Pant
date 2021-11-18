//5. Reverse an array and display the output.
#include<iostream>

using namespace std;

int main()
{
	int a[10],i,j,n,temp;
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
	for(i=0,j=n-1;i<j;i++,j--){
		temp=a[i];
		a[i]=a[j];
		a[j]=temp;
	}
	
	cout<<"Reversed Array:";
	for(i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
}
