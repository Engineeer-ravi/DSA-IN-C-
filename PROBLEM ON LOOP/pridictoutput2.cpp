#include <iostream>
using namespace std;

int main() {
    int i;
    while (i = 10) {//give an endless loop because i cannot set the value off i.and not using break stement.
        cout << i << endl;
        i = i + 1;
    }
    return 0;