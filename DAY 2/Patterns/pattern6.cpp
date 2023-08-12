#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int k=1;
        while(k<=n-i){
            cout<<" ";
            k++;
        }
        int j=1;

        while(j<=i){
            cout<<"*";
            j++;
        }                   //1 while loop make a formula 2*i-1
        int d=1;
        while(d<=i-1){
            cout<<"*";
            d++;
        }
        cout<<endl;
        i++;
    }
}





// #include<iostream>
// using namespace std;


// int main(){

//        /*  Read input as specified in the question.
// 	* Print output as specified in the question.
// 	*/
// 	int n;
// 	cin>>n;
// 	int i=1;
// 	while(i<=n){
// 		int spaces=1;
// 		while(spaces<=n-i){
// 			cout<<" ";
// 			spaces++;
// 		}
// 		int j=1;
// 		while(j<=2*i-1){
// 			cout<<"*";
// 			j++;
// 		}
// 		cout<<endl;
// 		i++;

// 	}
  
// }

