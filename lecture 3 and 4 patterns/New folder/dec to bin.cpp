#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int n,ans=0,i=0;
	cout<<"Enter a number: ";
	cin>>n;
	while(n!=0){
		if(n&1)
		ans=pow(10,i)+ans;
	n=n>>1;
	i++;
	}
	cout<<"binary will be :"<<ans<<endl;
	return 0;
}
