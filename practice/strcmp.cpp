#include <iostream>
#include <string>

using namespace std;

int strcmp(string a, string b) {
    
    int i=0;

    for(i=0;i < a.length();i++) {
        if (a[i] != b[i]) {
            return 1;
        }
    }

    return 0;
}

int main() {

    int result;
    result = strcmp("abc", "abc");
    cout << result << endl;

    return 0;
}
