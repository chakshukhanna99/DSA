#include<iostream>
using namespace std;
void removeX(char input[]){
    if(input[0]=='\0'){
        return;
    }
    if(input[0]!='x'){
        removeX(input+1);
    }
    else{
        int i=1;
        for(;input[i]!='\0';i++){
            input[i-1]=input[i];
        }
        input[i-1]=input[i];
        removeX(input);
    }
}
int main(){
    char input[100];
    cin>>input;
    removeX(input);
    cout<<input;
}

// #include <iostream>
// using namespace std;

// void removeX(char input[]) {
//     int currentIndex = 0; // Index for the current character in the original string
//     int newIndex = 0;     // Index for the current position in the modified string

//     while (input[currentIndex] != '\0') {
//         if (input[currentIndex] != 'x') {
//             input[newIndex] = input[currentIndex];
//             newIndex++;
//         }
//         currentIndex++;
//     }
//     input[newIndex] = '\0'; // Terminate the modified string
// }

// int main() {
//     char input[100];
//     cin >> input;
//     removeX(input);
//     cout << input;
//     return 0;
// }
