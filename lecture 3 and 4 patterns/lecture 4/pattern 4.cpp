#include<iostream>
using namespace std;
int main(){

int i=1,n,k=1;
cout<<"Enter the number :";
cin>>n;

while(i<=n){
	int j=1;
	while(j<=n){
		cout<<"	 "<<k;
		k++;
		j++;
	}
	cout<<endl;
	i++;
}
	return 0;
}
