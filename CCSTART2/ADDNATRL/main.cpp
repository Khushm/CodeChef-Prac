// Add Natural Numbers

#include <iostream>
using namespace std;

long int sumElements(int n){
    if(n==1)
        return 1;
    else 
        return n + sumElements(n-1);
}

int main() {
	// your code goes here
	cin.tie(0);
    ios::sync_with_stdio(false);
    int n;
    cin >> n;
    cout << sumElements(n);
	return 0;
}
