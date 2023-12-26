#include<iostream>
using namespace std;
int main(){
 int n,i;
	cout<<"Enter a number :";
	cin>>n;
	i=n;
	while(i>=1){
		int j=1;
		while(j<=i){
			cout<<n-i+1;
			j++;
		}
		cout<<endl;
		i--;
	}
	return 0;
} 
