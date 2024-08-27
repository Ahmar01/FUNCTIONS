 #include<iostream>
 
using namespace std;

void shape (int n , char c){
   int i , j;
   
  for(i=1 ;i<=n; i++){
  	cout <<endl;
  	for(j=1 ;j<=n; j++)
  	cout <<c;
  }
}
int main(){
	int num;
	cout<<"enter a number"<< endl;
	cin>>num;
	char ch;
	cout<<"enter a ch";
	cin>>ch;
	shape(num , ch);
}
