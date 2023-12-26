#include <iostream>
using namespace std;
int main(){
	int i=2,n,count=0;
	cout<<"Program to check Number is prime"<<endl;
	cout<<"Enter a number :";
	cin>>n;
	while (i<n)	{
		if(n%i==0)
		count++;
		i++;
	}
	if(count==0)
	cout<<n<<" is a prime number";
	else
	cout<<n<<" is not a prime number";
	return 0;
}
