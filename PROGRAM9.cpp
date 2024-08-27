 #include<iostream>
 
using namespace std;

void cal(int a ,int b, char op);
int main(){
	int x,y;
	char c;
	cout<<"enter a number ,operator and scend number";
	cin>>x>>y>>c;
    cal(x,y,c);

}
void cal (int a, int b ,char op){
   switch(op){
   	case '+':
   		cout<<a<<'+'<<b<<'='<<a+b;
   		break;
   		case '-':
   		cout<<a<<'-'<<b<<'='<<a-b;
   		break;
   		case '*':
   		cout<<a<<'*'<<b<<'='<<a*b;
   		break;
   		case '/':
   		cout<<a<<'/'<<b<<'='<<a/b;
   		break;
		case '%':
   		cout<<a<<'%'<<b<<'='<<a%b;
   		break;
   		default:
   		cout<<"invalid operator";
   }
}
