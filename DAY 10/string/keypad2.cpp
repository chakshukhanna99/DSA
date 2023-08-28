// Given an integer n, using phone keypad find out and print all the possible strings that can be made using digits of input n.
// Note :
// The order of strings are not important. Just print different strings in new lines.
// Input Format :
// Integer n
// Output Format :
// All possible strings in different lines
// Constraints :
// 1 <= n <= 10^6
// Sample Input:
// 23
// Sample Output:
// ad
// ae
// af
// bd
// be
// bf
// cd
// ce
// cf

#include <iostream>
#include <string>
using namespace std;

string keypad[] = {
    " ",    // 0
    "",     // 1
    "abc",  // 2
    "def",  // 3
    "ghi",  // 4
    "jkl",  // 5
    "mno",  // 6
    "pqrs", // 7
    "tuv",  // 8
    "wxyz"  // 9
};

void printKeypadHelper(int num, string output) {
    if (num == 0) {
        cout << output << endl;
        return;
    }

    int lastDigit = num % 10;
    string digitChars = keypad[lastDigit];

    for (int i = 0; i < digitChars.length(); i++) {
        printKeypadHelper(num / 10, digitChars[i] + output);
    }
}

void printKeypad(int num) {
    if (num == 0) {
        return;
    }

    printKeypadHelper(num, "");
}

int main() {
    int n;
    cin >> n;
    printKeypad(n);
    return 0;
}