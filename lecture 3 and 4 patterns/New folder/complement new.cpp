#include <iostream>
using namespace std;
int main(){
	int count=0,mask=0,n,bin;
	cout<<"Enter a number :";
	cin>>n;
	while(n!=0){
	
		mask=(mask<<1)|1;
		mask>>1;	
		//mask=mask*10+1;
	}
	bin=(~n)&mask;
	cout<<bin;
}
