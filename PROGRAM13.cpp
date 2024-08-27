 #include<iostream>
 
using namespace std;
int cube(int n);
int sqr(int n );
int main(){
	int a ,b , r;
	cout<<"enter a numbers";
	cin>>a>>b;
    r =sqr(a)+ cube(b);
cout<<r;
}
int  sqr (int n )
 {
 	return  n*n;
 }
 int  cube (int n )
 {
 	return  n*n*n;
 }
 

