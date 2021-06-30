#include <iostream>
using namespace std;

int main() {
	long int number,lastDigit;
	int test;
	cin >> test;
	while(test--){
	    long int rev=0;
	    cin >> number;
	    while(number > 0){
	        lastDigit = number%10;
	        rev = lastDigit + (rev*10);
	        number/=10;
	    }
        cout << rev << endl;
	}
	return 0;
}
