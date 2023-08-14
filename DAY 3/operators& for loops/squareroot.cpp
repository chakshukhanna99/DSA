#include<iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	if(n==1 ){
		cout<<n;
	}
	// else if(n==0){
	// 	cout<<0;
	// }
int i=1,ans=1,a;
while(ans<=n){
	i++;
	ans=i*i;
}

cout<<i-1;
}
//10     3
//16     4