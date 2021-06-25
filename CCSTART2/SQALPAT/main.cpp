// Alternative Square Pattern
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int row;
	cin >> row;
	int arr[row][5];
	int count=1;
	for(int i=0;i<row;i++){
	   
	    int n = 0;
	    while(n != 5){
	        arr[i][n] = count;
	        n++;
	        count++;
	    }
	}
	
    for(int i=0;i<row;i++){
        if(i%2 == 0){
            int n = 0;
    	    while(n != 5){
    	        cout << arr[i][n] << " ";
    	        n++;
    	    }
    	    cout << "\n";
        }
        else{
            int n = 5;
    	    do{
    	        n--;
    	        cout << arr[i][n] << " ";
    	    }while(n);
    	    cout << "\n";
        }
    }
	return 0;
}
