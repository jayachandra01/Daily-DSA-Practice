#include <iostream>
using namespace std;

void printNumbers(int n) {
    if (n < 1) return;  
    cout << n << " ";   
    printNumbers(n - 1);  
}

int main() {
    int n;
    cout << "Enter a number N: ";
    cin >> n;
    printNumbers(n); 
    return 0;
}
