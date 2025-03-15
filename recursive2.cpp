#include <iostream>
using namespace std;

void printNumbers(int current, int n) {
    if (current > n) return;  
    cout << current << " ";   
    printNumbers(current + 1, n);  
}

int main() {
    int n;
    cout << "Enter a number N: ";
    cin >> n;
    printNumbers(1, n);  
    return 0;
}
