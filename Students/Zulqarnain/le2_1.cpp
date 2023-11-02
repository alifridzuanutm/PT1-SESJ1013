#include <iostream>
using namespace std;

int main(){
    int num=0,i,total=0;

    cout<<"Enter an integer number: ";
    cin>>num;

    i=num%10;
    cout<<i;
    total=total+i;
    num=num/10;

    do{
        i=num%10;
        cout<<" + "<<i;
        total=total+i;
        num=num/10;
    }while(num!=0);

    cout<<" = "<<total;
    num=total;

    if(num%3==0 && num%4==0 && num%5==0){
        cout<<"\n"<<total << " is multiples of 3,4 and 5";
    }
    else if (num%3==0 && num%4==0){
        cout<<"\n"<<total << " is multiples of 3 and 4";
    }
    else if (num%3==0 && num%5==0){
        cout<<"\n"<<total << " is multiples of 3 and 5";
    }
    else if (num%4==0 && num%5==0){
        cout<<"\n"<<total << " is multiples of 4 and 5";
    }
    else if(num%3==0){
        cout<<"\n"<<total << " is multiples of 3";
    }
    else if(num%4==0){
        cout<<"\n"<<total << " is multiples of 4";
    }
    else if(num%5==0){
        cout<<"\n"<<total << " is multiples of 5";
    }
    else{
        cout<<"\n"<<total<<" have no multiples";
    }


    return 0;
}