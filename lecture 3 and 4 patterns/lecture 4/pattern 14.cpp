#include<iostream>
using namespace std;
int main(){
	char ch='A';
	int n,i=1;
	cout<<"Enter a number :";
	cin>>n;
	while(i<=n){
		int j=1;
		while(j<=n){
		cout<<ch;
		ch++;		
		j++;
		}
		cout<<endl;
		i++;
	}
	
	return 0;
}
