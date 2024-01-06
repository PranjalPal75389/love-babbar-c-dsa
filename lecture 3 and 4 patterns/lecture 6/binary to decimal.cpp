#include<iostream>
#include<math.h>
using namespace std;
int main(){
	
	int n,digit,num=0,i=0;
	cout<<"Program to convert binary number into decimal number"<<end;
	cout<<"Enter a binary number :";
	cin>>n;
	while(n!=0){
	digit=n%10;
	if(digit==1)
	num=num+pow(2,i);
	i++;
	n=n/10;		
	}
	cout<<"decimal will be :"<<num;
	
	return 0;	
}
