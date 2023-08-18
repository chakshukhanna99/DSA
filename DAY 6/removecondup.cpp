#include<iostream>
#include<cstring>
using namespace std;

int main() {
    char n[100];
    cin>>n;
    int x = strlen(n);

    for (int i = 0; i < x; i++) {
        if (n[i] == n[i+1]) {
            for (int j = i; j < x; j++) {
                n[j] = n[j + 1];
            }
            x--; // Reduce the length of the string
            i--; // Stay at the same index to recheck the new character
        }
    }

    cout << n;

    return 0;
}
