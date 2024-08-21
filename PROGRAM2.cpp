#include<iostream>
using namespace std;

int num(int a , int b );

 int main(){
 	int x,y;
 	cout<<"enter a number ";
 	cin>>x>>y ;
    num(x,y);

 }

 int num(int a , int b){
 	if(a > b)
	 {
cout<<"a is greater "<<" "<<a <<endl; 		
	 }
	 else 
	 {
	 	cout<<"b is greater"<<" "<<b;
	 }
 }
