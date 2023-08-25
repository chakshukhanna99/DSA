#include<iostream>
using namespace std;
void removeX(char input[],char c1,char c2){
    if(input[0]=='\0'){
        return;
    }
    if(input[0]!=c1){
        removeX(input+1,c1,c2);
    }
    else{
   
        for(int i=0;input[i]!='\0';i++){
            if (input[i]==c1)
            {
                input[i]=c2;
            }
            
            
        }

        removeX(input,c1,c2);
    }
}
int main(){
    char input[100];
    cin>>input;
    char c1,c2;
    cin>>c1>>c2;
    removeX(input,c1,c2);
    cout<<input;
}

// #include <iostream>
// using namespace std;

// void replaceCharsRecursively(char str[], char c1, char c2, int currentIndex) {
//     if (str[currentIndex] == '\0') {
//         return; // Base case: end of string
//     }

//     if (str[currentIndex] == c1) {
//         str[currentIndex] = c2;
//     }

//     replaceCharsRecursively(str, c1, c2, currentIndex + 1);
// }

// void replaceChars(char str[], char c1, char c2) {
//     replaceCharsRecursively(str, c1, c2, 0);
// }

// int main() {
//     char input[100];
//     cout << "Enter a string: ";
//     cin >> input;

//     char charToReplace, replacementChar;
//     cout << "Enter the character to replace: ";
//     cin >> charToReplace;
//     cout << "Enter the replacement character: ";
//     cin >> replacementChar;

//     replaceChars(input, charToReplace, replacementChar);

//     cout << "Modified string: " << input << endl;

//     return 0;
// }
