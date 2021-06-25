// Is Both Or Not 
#include <iostream>
using namespace std;

bool checkDivi(int n, int d){
    return (n%d==0);
}

int isBoth(int n){
    if(checkDivi(n,5) && checkDivi(n,11))
        return 2;
    else if(checkDivi(n,5) || checkDivi(n,11))
        return 1;
    else 
        return 0;
}
int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
	// your code goes here
	int n;
	cin >> n;
	if(isBoth(n) == 2)
	    cout << "BOTH";
	else if(isBoth(n) == 1)
	    cout << "ONE";
	else 
	    cout << "NONE";
	return 0;
}
