#include<iostream>
using namespace std;
int table (int a){
    int i;
for (int i = 1; i <=10; i++)
{
    /* code */
    cout <<i*a <<endl;
}

}
int main(){
	int a;
	cout<<"enter a number";
	cin>>a;
    table(a);

}
