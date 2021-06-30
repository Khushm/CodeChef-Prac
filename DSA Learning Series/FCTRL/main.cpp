#include <iostream>
using namespace std;

int main() {
    int test;
    long int count, number, total;
	cin >> test;
	for(int i=0;i<test;i++){
	    cin >> number;
	    count = number/5;
	    total = count;
	    while(count >= 5){
	        count = count/5;
	        total += count;
	    }
	    cout << total << endl;
	}
	return 0;
}
