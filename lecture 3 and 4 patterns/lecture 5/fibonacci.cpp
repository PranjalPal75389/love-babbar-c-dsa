#include<iostream>
using namespace std;
int main(){
	
	int a=0,temp,b=1,n;
	cout<<"Enter a number";
	cin>>n;
	for(int i=1;i<=n;i++){
		cout<< a<<endl;
		temp=a+b;
		a=b;
		b=temp;
	}
	
	return 0;
}
