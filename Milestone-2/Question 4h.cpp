/*
h.(n=5)
* * * * * 
  * * * * 
    * * * 
      * * 
        * 
        
*/

#include<iostream>
using namespace std;

int main()
{
	int n;
	cout<<"n=";
	cin>>n;
	
	for(int i=1;i<=n;i++){
		for(int space=1;space<i;space++){
			cout<<"  ";
		}
		for(int j=n;j>=i;j--){
		cout<<"* ";
		}cout<<endl;
	}
}
