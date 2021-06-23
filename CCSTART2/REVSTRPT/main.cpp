// Reverse Star Pattern

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	cin.tie(0);
    ios::sync_with_stdio(false);
	int num;
	cin >> num;
	for(int count = 1; count <= num; count++){
	    for(int space = 0; space < (num-count); space++)
	        cout << " ";
	    for(int star = 0; star < count; star++)
	        cout << "*";    
	    cout << "\n";
	}
	return 0;
}
