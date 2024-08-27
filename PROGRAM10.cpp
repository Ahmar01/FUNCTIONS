 #include<iostream>
 
using namespace std;

void swap(int & x, int &y );
int main(){
	int a ,b;
	cout<<"enter a numbers";
	cin>>a>>b;
    swap(a,b);
cout<<a<<endl<<b;
}
void swap (int & x, int &y ){
  int t;
  t = x;
  x=y;
  y=t;
 }

