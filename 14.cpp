/*a Cpp program to print the following pattern:
*****
* *
* *
* *
******/
#include<iostream>
using namespace std;

int main() {
    int n ; 
    cout << "Enter a value of n : ";
    cin >> n;
    
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            if(i == 1 || i == n|| j == 1 || j == (n-1)) {
                cout << "#";
            }
            else {
                cout << " "; 
            }
        }
        cout << endl; 
    }
    return 0;
}