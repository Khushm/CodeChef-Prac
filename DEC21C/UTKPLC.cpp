// Utkarsh and Placement tests
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    char a,b,c,x,y;
    while(t--){
        cin >> a >> b >> c;
        cin >> x >> y;
        if(a == x || a == y)
            cout << a << endl;
        else
            cout << b << endl;
    }
}
// int main() {
// 	// your code goes here
// 	int T;
// 	char c;
// 	queue<char> q;
// 	vector<char> v;
// 	cin >> T;
// 	while(T--){
// 	    for(int i=0;i<3;i++){
// 	        cin >> c;
// 	        q.push(c);
// 	    }
// 	    for(int i=0;i<2;i++){
// 	        cin >> c;
// 	        v.push_back(c);
// 	    }
// 	    for(int i=0;i<3;i++){    
//     	    c = q.front();
//     	    q.pop();
//             if (find(v.begin(), v.end(), c) != v.end()){
//                 cout << c << endl;
//     	        break;
//             }
// 	    }
// 	    v.clear();
// 	}
// 	return 0;
// }
