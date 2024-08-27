 #include<iostream>
 
using namespace std;

char grade (int m );
int main(){
	int a ;
	char g;
	cout<<"enter a numbers";
	cin>>a;
	
    g=grade(a);
cout<<g;
}
char  grade (int m ){
if(m > 80)
return 'A';
else if(m > 60)
return 'B';
else if(m > 40)
return 'C';
else 
return 'F';
 }

