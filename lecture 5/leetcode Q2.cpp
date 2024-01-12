#include<iostream>
using namespace std;
int main(){
	int count=0,n;
	cout<<"Enter a number:";
	cin>>n;
	while(n!=0){
		if(n&1)
		count++;
		n=n>>1;
	}
	cout<<"No. of 1 bit is :"<<count<<endl;
	
	return 0;
}
