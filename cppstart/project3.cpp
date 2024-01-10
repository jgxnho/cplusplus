#include <iostream>

using namespace std;

int main() {
    //char: 작은 문자형
    char b[] = { 'a', 'b', 'c', '\0' };
    // null 문자 '\0'
    // "" >> 명시적으로 null문자가 포함

    cout << b << endl;

    //bool: 0 혹은 1

    bool a= 0;
    bool b = 1;
    bool c = 10;
    cout << a << " " << b << " " << c << endl;
    return 0;

}