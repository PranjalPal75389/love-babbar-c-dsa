#include<iostream>
#include<math.h>
using namespace std;

int main(){
	int n,bin=0,i=0,bit;
	cout<<"Enter a number:";
	cin>>n;
	while(n!=0){
		bit=n&1;
		bin=(bit*pow(10,i))+bin;
		n=n>>1;
		i++;	
	}
	cout<<"binary will be :"<<bin<<endl;
	return 0;
}
