#include<iostream>
using namespace std;
int main(){
	int i=1,n,k=1;
	cout<<"Enter a number :";
	cin>>n;
	while(i<=n){
		int j=1;
		while(j<=i){
			cout<<i+j-1;
			j++;
		}
		
		cout<<endl;
		i++;
	}
	return 0;
}
