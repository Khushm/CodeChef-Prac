#include <iostream>
using namespace std;

long int sumEvenOdd(int start, int count){
    long int sum = 0;
    for(int i=1;i<=count;i++){
        sum += start;
        start += 2;
    } 
    return sum;
}

int main() {
	cin.tie(0);
  ios::sync_with_stdio(false);
	// your code goes here
	int count;
	cin >> count;
	
    if(count > 0)
        cout << sumEvenOdd(1,count) << " " << sumEvenOdd(2,count);
	return 0;
}
