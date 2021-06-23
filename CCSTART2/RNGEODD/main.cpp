// Range Odd

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	// your code goes here
	cin.tie(0);
    ios::sync_with_stdio(false);
    int first, last;
    cin >> first >> last;
    vector<int> arr;
    for(int i=first;i<=last;i++){
        if(i%2 != 0)
            arr.push_back(i);
    }
    sort(arr.begin(),arr.end());
    for (int it : arr)
        cout << it << " ";
	return 0;
}
