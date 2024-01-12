#include<iostream>
#include<math.h>
using namespace std;
int main(){
	
	int n,ans;
	bool verify;
	cout<<"Enter a number :";
	cin>>n;
	for(int i=0;i<=30;i++){
		
		ans=pow(2,i);
		if(ans==n)
	 verify=true;
		
		
	}
	if(verify){
		cout<<n<<" 2's power "<<endl;
	}
	else
	cout<<n<<" is not 2's power  "<<endl;
}
