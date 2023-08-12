#include <iostream>
using namespace std;

int main() {
    int n, i = 1, space;

    cout << "Enter the number of rows: ";
    cin >> n;
    space = n - 1;

    while (i <= n) {
        int j = 1;
        while (j <= space) {
            cout << " ";
            j++;
        }

        j = 1;
        while (j <= 2 * i - 1) {
            cout << "*";
            j++;
        }

        cout << endl;
        i++;
        space--;
    }

    space = 1;
    i = n - 1;

    while (i >= 1) {
        int j = 1;
        while (j <= space) {
            cout << " ";
            j++;
        }

        j = 1;
        while (j <= 2 * i - 1) {
            cout << "*";
            j++;
        }

        cout << endl;
        i--;
        space++;
    }

    return 0;
}
