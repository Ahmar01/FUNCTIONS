 #include<iostream>
 
using namespace std;
int g;
void fun();
int main(){
	cout<<"enter a numbers";
	cin>>g;
    fun();
cout<<g;
}
void fun (){
  g = g * 2;
 }

