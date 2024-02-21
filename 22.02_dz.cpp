#include <iostream>
using namespace std;
int main(int argc, char** argv) {
    unsigned int n1 = 0;
    unsigned int n2 = 0;
    unsigned int n3 = 1;
    cout << "enter number: ";
    cin >> n2;
    while (n2 != n1) {
        cout << "enter number: ";
        cin >> n2;
        n3 += 1;
    }
    cout << "your last num is zero \n";
    cout << "count of number = " << n3;
}