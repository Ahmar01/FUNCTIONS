 #include<iostream>
 
using namespace std;

void fun();
int main(){
	int i;
	for(i =1 ;i <=5;i++ )
    fun();
}
void fun (){
 {
 	static int n = 0;
 	n++;
 	cout<<n<<endl;
 }
 }

