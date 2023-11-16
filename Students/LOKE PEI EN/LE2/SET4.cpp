#include<iostream>
using namespace std;
int main(){

	int n;
	int rem,multiply=1;
	
	cout<<"Enter an integer number:";
	cin>>n;
	
	do{
		rem=n%10;
		cout<<rem;
		
		n=n/10;
		if(n!=0)
	    cout<<"*";
		
		multiply*=rem;
		
		
	}while(n!=0);

		cout<<"="<<multiply<<endl;
			
	
	
	if (multiply%2==0){
	cout<<multiply<<"is even number";
}
	
	else{
			cout<<multiply<<"is odd number";
	}

	
	if(multiply%5==0&&multiply%3==0){
		cout<<"& multiples of 3 and 5";
	}
	else if(multiply%5==0){
		cout<<"& multiples of 5";
	}
	else if(multiply%3==0){
		cout<<"& multiples of 3 ";

		
	}
		
	}
	
	


