//Q4. Create a 3-D matrix of any size and then display it.

#include<iostream>
using namespace std;

int main()
{
	int i,j,k,n;
	int a[n][n][n];
	
	cout<<"Enter size of matrix:";
	cin>>n;
	cout<<"Enter elements of matrix:";
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			for(k=0;k<n;k++){
				cin>>a[i][j][k];
			}
		}
	}
	
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			for(k=0;k<n;k++){
				cout<<a[i][j][k];
			}cout<<endl;
		}cout<<endl;
	}
}
