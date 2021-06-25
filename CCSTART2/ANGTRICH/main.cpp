// Triangle With Angle

#include <iostream>
using namespace std;

int calSum(int a, int b, int c){
    return (a+b+c);
}
bool valSide(int a){
    return a;
}
int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    int a,b,c;
    cin >> a >> b >> c;
    if(valSide(a) && valSide(b) && valSide(c) && calSum(a,b,c) == 180)
        cout << "YES";
    else
        cout <<"NO";
	return 0;
}
