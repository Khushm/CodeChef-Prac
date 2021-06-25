// Finding Factors

#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
// 4->1,2,4
void findFactor(int n){
    vector<int> arr;
    for(int i=1;i<=sqrt(n);i++){
        if(n%i == 0){
            if (n/i == i)
                arr.push_back(i);
            else{
                arr.push_back(i);
                arr.push_back(n/i);
            }
        }
    }
    sort(arr.begin(), arr.end());
    cout << arr.size() << endl;
    for (auto i = arr.begin(); i != arr.end(); ++i)
        cout << *i << " ";
}

int main() {
	// your code goes here
	cin.tie(0);
    ios::sync_with_stdio(false);
	int num;
	cin >> num;
	
	findFactor(num);
	return 0;
}
