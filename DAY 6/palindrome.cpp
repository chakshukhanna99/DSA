#include<iostream>
using namespace std;

int main() {
    char str[100];
    cin >> str;
    
    int count = 0; // Initialize count to 0
    int c;
    int flag = 0;
    
    for (int i = 0; str[i] != '\0'; i++) {
        count++;
    }
    c = count;
    
    for (int i = 0; i < c / 2; i++) {
        if (str[i] != str[c - i - 1]) {
            flag = 1;
            break;
        }
    }
    
    if (flag == 1) {
        cout << "false";
    } else {
        cout << "true";
    }
    
    return 0;
}
