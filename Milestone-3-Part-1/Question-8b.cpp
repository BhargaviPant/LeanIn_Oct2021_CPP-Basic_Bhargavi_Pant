/*
b. n=6
			1
         1   1
       1   2   1
     1   3   3    1
   1  4    6   4   1
 1  5   10   10  5   1 
 */
 
 #include<iostream>
 using namespace std;
 
 int main()
 {
 	int i,j,n;
 	cout<<"n=";
 	cin>>n;
 	
 	for(int i=0;i<n;i++){
 		int m=1;
 		for(int j=0;j<n-i;j++){
 			cout<<" ";
		 }
		 for(int k=0;k<=i;k++){
		 	cout<<" "<<m;
		 	m= m* (i-k)/(k+1);
		 }
		 cout<<endl;
	 }
 }
