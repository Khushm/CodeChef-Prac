//  Triangle Everywhere

#include <iostream>
using namespace std;

bool calSum(int a, int b, int c){
    return (a+b) > c;
}

bool checkEquilateral(int a, int b, int c){
    return (a==b && b==c);
}

bool checkIsosceles(int a, int b, int c){
    return (a==b || b==c || c==a);
}

int main() {
    int a,b,c;
    cin >> a >> b >> c;
    
    if(calSum(a,b,c) && calSum(b,c,a) && calSum(c,a,b))
        if(checkEquilateral(a,b,c))
            cout << "1";
        else if(checkIsosceles(a,b,c))
            cout << "2";
        else
            cout <<"3";
    else
        cout << "-1";
	return 0;
}
