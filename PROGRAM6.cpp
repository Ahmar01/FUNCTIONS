 #include<iostream>
 
using namespace std;

void checknum (int b){
 int c=0,i;
 for(i=2 ;i < b;i++){
 	if(b%i == 0)
 	c=1;
 }
 if(b%2 ==0 && c == 0){
 	cout<<b<<"is prime even number";
 }else  if(b%2!=0 && c == 0){
 	cout<<b<<"is prime odd number";
 } else  if(b%2 ==0 && c!= 0){
 	cout<<b<<"is only even number";
 } else  if(b % 2 !=0){
 	cout<<b<<"is prime even number";
 }else{
 	cout<<"is not prime number";
 }
}
int main(){
	int a;
	cout<<"enter a number";
	cin>>a;
    checknum(a);

}
