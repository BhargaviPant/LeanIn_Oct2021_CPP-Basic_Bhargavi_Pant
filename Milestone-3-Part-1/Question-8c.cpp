/*
c. n=5
***** *****
****   ****
***     ***
**       **
*         *
*         *
**       **
***     ***
****   ****
***** *****
*/

#include<iostream>
using namespace std;

int main()
{
	int n;
	cout<<"n=";
	cin>>n;
	
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n-i+1;j++){
		cout<<"*";
		}
	for(int space=1;space<i;space++){
			cout<<"  ";
	}
	for(int j=n;j>=i;j--){
		cout<<"*";
	}
	cout<<endl;
	}
	
	
	
		for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=i;j++)
		{
		cout<<"*";
		}
			for(int space=1;space<=n-i;space++){
			cout<<"  ";
		}
		for(int j=1;j<=i;j++){
			cout<<"*"; 
	}
	cout<<endl;
}
}
