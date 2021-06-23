// Raju and His Trip

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	cin.tie(0);
  ios::sync_with_stdio(false);
	int num;
	cin >> num;
	if(num%5==0 || num%6==0)
	    cout << "YES";
	else
	    cout << "NO";
	return 0;
}
