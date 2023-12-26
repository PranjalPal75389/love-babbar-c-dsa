#include<iostream>
using namespace std;
int main(){
	int n,remainder,product=1,sum=0,diff;
	cout<<"Enter a number:";
	cin>>n;
	
	while(n!=0){
		
		remainder=n%10;
		sum=sum+remainder;
		product=product*remainder;
		n=n/10;
		
	}
	diff=product-sum;
	cout<<"The Product is :"<<product<<endl;
	cout<<"The sum is :"<<sum<<endl;
	cout<<"the difference of product and sum of the digit will be :"<<diff<<endl;
	
	return 0;
}
