/*
Q3. Write a program to print nos. from 1 to 50 by replace no. divisible by 3 with "buzz", no. divisible by 5 with "fizz" and no. divisible by 15 with "fizzbuzz". (Hint: use loop, % operator and place if statements properly otherwise you'll get wrong output)
*/

#include<iostream>
using namespace std;

int main()
{
	int n;
	cout<<"n=";
	cin>>n;
	
	for(int i=1;i<=n;i++){
		if(i%15==0){
			cout<<"fizzbuzz";
		}
		else if(i%5==0){
			cout<<"fizz";
		}
		else if(i%3==0){
			cout<<"buzz";
		}
		else{
			cout<<i;
		}cout<<endl;
	}
}
