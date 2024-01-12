#include<iostream>
using namespace std;
int main(){
	int count=0,mask=0,n,bin;
	cout<<"Enter a number :";
	cin>>n;
	int notn=~n;
	while(notn!=0){
		notn>>1;
		mask=mask*10+1;
	}
	bin=notn&mask;
	cout<<"N is "<<bin;
	return 0;
}
