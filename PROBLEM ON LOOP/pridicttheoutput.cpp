#include <iostream>
using namespace std;

int main() {
    while ('a' < 'b')//it will give endless loop becaure we cannot define break condition.
        cout << "malayalam is a palindrome" << endl;
    return 0;
}