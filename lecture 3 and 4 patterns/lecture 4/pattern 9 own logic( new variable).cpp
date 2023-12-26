#include<iostream>
using namespace std;
int main(){
int n,k=1;
	cout<<"Why World"<<endl;
	cout<<"Enter a number :";
	cin>>n;
	int i=n;
	while(i>=1){
		int j=1;
		while(j<=i){
			cout<<k;	
			j++;
		}
		cout<<endl;
		k++;
		i--;
	}
	return 0;
}
