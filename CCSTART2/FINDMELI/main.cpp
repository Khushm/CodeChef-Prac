// Find Me 

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	// your code goes here
	int num, element, a;
	cin >> num >> element;
	vector<int> arr;
	for(int i=0;i<num;i++){
	    cin >> a;
	    arr.push_back(a);
    }
	if(find(arr.begin(), arr.end(), element) != arr.end())
	    cout << "1";
	else
	    cout << "-1";
	return 0;
}
