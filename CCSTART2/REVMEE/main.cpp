// Reverse Me

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	// your code goes here
	cin.tie(0);
	ios::sync_with_stdio(false);
	int arrNumber,a;
	std::vector<int> arr;
	cin >> arrNumber;
	for(int i=0;i<arrNumber;i++){
	    cin >> a;
	    arr.push_back(a);
	}
	
	reverse(arr.begin(),arr.end());
	
	for(int i=0;i<arr.size();i++){
	    cout << arr[i];
	    cout << " ";
	}
	
	return 0;
}
