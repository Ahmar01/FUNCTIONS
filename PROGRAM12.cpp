 #include<iostream>
 
using namespace std;

int mul(int, int );
int  main(){
	int i , x,y,r;
	for(i=1;i<= 5 ;i++){
			cout<<"enter a numbers";
	cin>>x>>y;
    r = mul(x,y);
    if(r == 1)
    cout<<y<<"is the multiple of "<<x<<endl;
    else 
    cout<<y<<"is not  the multiple of "<<x<<endl;
	}
}
int mul (int a, int b ){
 if(b % a == 0)
 return 1;
 else 
 return 0;
 }

