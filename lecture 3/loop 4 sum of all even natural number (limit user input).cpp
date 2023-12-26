#include<iostream>
using namespace std;
int main(){
	int sum=0,i=1,n;
	cout<<"Program to print sum of even number"<<endl;
	cout<<"Enter a number (limit) :";
	cin>>n;
	while(i<=n){
		if(i%2==0)
		sum=sum+i;
		i++;
	}
	cout<<sum;
		
		
	return 0;
}
