#include <iostream>

using namespace std;

void swap(int &a,int &b);

int main() {

    int a,b;
    a = 10;
    b = 20;

    cout << a << endl;
    cout << b << endl;

    swap(a,b);
    
    cout << a << endl;
    cout << b << endl;

    return 0;
}

void swap(int &a,int &b) {
    int tmp;
    tmp = a;
    a = b;
    b = tmp;
}
