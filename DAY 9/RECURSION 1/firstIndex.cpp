#include<iostream>
using namespace std;
int firstIndex(int input[], int size, int x)
{
 	if(size == 0)
    {
        return -1;
    }
    if(input[0] == x)
    {
        return 0;
    }
    
    int ans = firstIndex(input+1, size-1, x);
    
    if(ans == -1)
    {
        return -1;
    }
    else
    {
        return ans+1;
    }
}

int main(){
    int n=5;
    int arr[]={1,2,5,9,14};
   int x = firstIndex(arr,n,14);
   cout<<x<<endl;
    
}

// int firstIndex(int input[], int size, int x)
// {
//  	if(size == 0)
//     {
//         return -1;
//     }
//     if(input[0] == x)
//     {
//         return 0;
//     }
    
//     int ans = firstIndex(input+1, size-1, x);
    
//     if(ans == -1)
//     {
//         return -1;
//     }
//     else
//     {
//         return ans+1;
//     }
// }
