 #include<iostream>
 
using namespace std;

void factorial (int b){
   int i;
   long fact ;
   fact = 1;
   
  for(i=1 ;i<=b; i++){
  	fact= fact *i;
  }
  cout<<"factorial of "<<b<<"is"<<fact;
}
int main(){
	int a;
	cout<<"enter a number";
	cin>>a;
    factorial(a);

}
