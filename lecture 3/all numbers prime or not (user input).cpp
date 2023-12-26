#include <iostream>
using namespace std;
int main(){
	int i,n,input;
	cout<<"Program to check Number is prime"<<endl;
	cout<<"Enter a number :";
	cin>>input;
	for(n=1;n<=input;n++){
	int count=0;
	for(i=1;i<=n;i++)	{
		if(n%i==0)
		count++;		
	}
	if(count==2)
	cout<<n<<" is a prime number"<<endl;
	else
	cout<<n<<" is not a prime number"<<endl;
		}
	return 0;
}
