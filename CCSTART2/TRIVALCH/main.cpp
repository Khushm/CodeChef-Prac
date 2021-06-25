// Valid Triangle Or Not

#include <iostream>
using namespace std;

bool calSum(int a, int b, int c){
    return (a+b) > c;
}

int main() {
    int a,b,c;
    cin >> a >> b >> c;
    
    if(calSum(a,b,c) && calSum(b,c,a) && calSum(c,a,b))
        cout << "YES";
    else
        cout << "NO";
	return 0;
}
