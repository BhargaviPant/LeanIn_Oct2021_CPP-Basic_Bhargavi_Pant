/*
j.(n=5)
A 
B C 
D E F 
G H I J 
K L M N O 

*/

#include<iostream>
using namespace std;

int main()
{
	int n;
	char a='A';
	cout<<"n=";
	cin>>n;
	
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
		cout<<a<<" ";
		a++;
		}cout<<endl;
	}
} 
