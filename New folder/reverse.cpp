#include<iostream>
#include<math.h>
using namespace std;
int main() {
	int n , reverse = 0 , rem;
	cout << "Program for reverse number" << endl;
	cout << "Enter a number :";
	cin >> n;
	while (n != 0) {
		rem = n % 10;
		reverse = reverse * 10 + rem;
		n = n / 10;
	}
	cout<<reverse;
}
