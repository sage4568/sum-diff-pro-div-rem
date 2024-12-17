#include <iostream>
using namespace std;
int main(){
	int n1,n2,sum,diff,mul,div,mod;
	cout<<"enter first number: ";
	cin>>n1;
	cout<<"enter second number: ";
	cin>>n2;
	sum=n1+n2;
	cout<<"the sum is : "<<sum<<endl;
	diff=n1-n2;
	cout<<"the difference is : "<<diff<<endl;
	mul=n1*n2;
	cout<<"the multiplication is : "<<mul<<endl;
	div=n1/n2;
	cout<<"the division is : "<<div<<endl;
	mod=n1%n2;
	cout<<"the remainder is : "<<mod<<endl;
	return 0;
}
