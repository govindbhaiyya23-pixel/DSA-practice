#include <iostream>
using namespace std;
int main() {
    int n = 3;
    long long factorial = 1;
    for(int i=0;i<n;i++){
        factorial *= (n-i);

    }
    cout << "Factorial is " << factorial << endl;
    return 0;
}    