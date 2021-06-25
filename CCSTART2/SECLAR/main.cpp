// Find Second Largest  

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	// your code goes here
	int a;
    vector<int> arr;
    int numOfElements = 3;
    for(int i =0; i<numOfElements; i++){
        cin >> a;
        arr.push_back(a);
    }
    sort(arr.begin(), arr.end());
    // cout << arr.begin()[1];
    int & element = arr[1];
    cout << element;
	return 0;
}
