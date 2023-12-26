#include<iostream>
using namespace std;
int main(){
	char uin,ch;
	cout<<"Enter a number or aphabhet :";
	cin>>ch;
	
	if(ch>=48 && ch<=57)
	cout<<"It is a number"<<endl;
	else if(ch>=65 && ch<=90)
	cout<<"It is a capital Alphabet"<<endl;
	else if (ch>=97 && ch<=122)
	cout<<"It is small Alphabet"<<endl;
	else
	cout<<"you nor enter a number niether a Alphabet"<<endl;


//cin>>ch;
//if(ch>=0 && ch<=9)
//	cout<<"It is a number"<<endl;
//else if(ch>='A' && ch<='Z')
//	cout<<"It is an uppercase"<<endl;
//else if (ch>='a' && ch<='z')
//	cout<<"It is an lowercase"<<endl;
//else
//	cout<<"You nor enter a number neither a Alphabet"<<endl;
//

	return 0;
}
