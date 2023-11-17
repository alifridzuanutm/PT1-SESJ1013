#include<iostream>
using namespace std;
int main(){

	int n;
	int multiply=1,rem;
	
	cout<<"Enter an integer number:";
	cin>>n;
	
	do{
		rem=n%10;
		cout<<rem;
		
		n=n/10;
		if(n!=0){
	    cout<<" * ";
		multiply*=rem;}
		
		else{
		cout<<" = "<<multiply<<endl;}
		
	}while(n>0);

		
	if (multiply%2==0){
	cout<<multiply<<" is even number";
    }	
	else{
			cout<<multiply<<" is odd number";
	}

	cout<<" & multiples of";
	
	if(multiply%5==0&&multiply%3==0){
		cout<<"  3 and 5";
	}
	else if(multiply%5==0){
		cout<<"  5";
	}
	else if(multiply%3==0){
		cout<<"  3 ";

		
	}
		
	}
	
	


