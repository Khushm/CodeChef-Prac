//  Buy Please
#include <iostream>
using namespace std;
long int totalCost(int number, int cost){
    return number*cost;
}

int main() {
	// your code goes here
	cin.tie(0);
	ios::sync_with_stdio(false);
	int a,b,x,y;
	cin >> a >> b;
	cin >> x >> y;
	cout << totalCost(a,x)+totalCost(b,y);
	return 0;
}
