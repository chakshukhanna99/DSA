#include<iostream>
using namespace std;
void largest(int arr[][100],int m,int n){

    //   for(int i=0;i<m;i++){
    //     for(int j=0;j<n;j++){
    //         cout<<arr[i][j];
    //     }
    //     cout<<endl;
    // }

    for(int i=0;i<n;i++){
        if(i==0){
             for(int j=0;j<m;j++){
            
            cout<<arr[j][i];
        }
        }
       else if(i%2==0){
        for(int j=0;j<m;j++){
            
            cout<<arr[j][i];
        }
        }
        else{
            for (int j = m-1; j >=0; j--)
            {
                cout<<arr[j][i];/* code */
            }
        }
    }
}
    // cout<<"largest row is: "<<store1<<" "<<largest1;

int main(){
    int arr[100][100];
    int n;
    int m;
    cin>>m>>n;

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    largest(arr,m,n);
}