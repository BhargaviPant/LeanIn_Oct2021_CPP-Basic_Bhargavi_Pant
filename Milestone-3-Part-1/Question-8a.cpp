/*a. n=5
* * * * * * * * *
  * * * * * * *
    * * * * *
      * * *
        *
*/

#include<iostream>
using namespace std;

int main()
{
	int n;
	cout<<"n=";
	cin>>n;
	
	for(int i=0;i<=n;i++){
		for(int space=0;space<i;space++){
			cout<<"  ";
		}
		for(int j=1;j<=n-i;j++){
			cout<<"* ";
		}
		for(int k=2;k<=n-i;k++){
			cout<<"* ";
		}cout<<endl;
	}
}
