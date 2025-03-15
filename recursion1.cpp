#include <iostream>
using namespace std;

void printName(int n, int count) {
    if (count == 0) return; 
    cout << "Your Name" << endl;
    printName(n, count - 1); 
}

int main() {
    int n;
    cout << "Enter the number of times to print your name: ";
    cin >> n;
    printName(n, n); 
    return 0;
}
