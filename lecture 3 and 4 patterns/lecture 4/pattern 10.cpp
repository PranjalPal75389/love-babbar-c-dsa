#include<iostream>
using namespace std;
int main(){
	int i=1,n,k=1;
	cout<<"Enter a number :";
	cin>>n;
	while(i<=n){
		int j=1;
		k=i;
		while(j<=i){
			cout<<k;
			k++;
			j++;
		}
		
		cout<<endl;
		i++;
	}
	return 0;
}
