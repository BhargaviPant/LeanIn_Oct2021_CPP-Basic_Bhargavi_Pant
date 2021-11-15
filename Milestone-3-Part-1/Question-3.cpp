//3. Add two matrices and display the output.

#include<iostream>
using namespace std;

int main()
{
	int a,n,m,i,sum,j;
	int arr1[10][10], arr2[10][10];
	cout<<"Dimensions of matrix:\n";
	cin>>m;
	cin>>n;
	
	cout<<"Elements of 1st matrix:\n";
	for(i=0;i<m;i++)
		for(j=0;j<n;j++){
			cin>>arr1[i][j];
		}
		cout<<"1st matrix:\n";
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			cout<<arr1[i][j]<<" ";
		}cout<<endl;
	}
	
	cout<<"Elements of 2nd matrix:\n";
	for(i=0;i<m;i++)
		for(j=0;j<n;j++){
			cin>>arr2[i][j];
		}
		cout<<"2nd matrix\n";
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			cout<<arr2[i][j]<<" ";
		}cout<<endl;
	}
		cout<<"Sum of the two matrices:\n";
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			sum=arr1[i][j]+arr2[i][j];
			cout<<sum<<" ";
		}cout<<endl;
	}
}
