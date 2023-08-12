#include<iostream>
using namespace std;


int main(){

       /*  Read input as specified in the question.
	* Print output as specified in the question.
	*/
	int i=1;
	int n;
	cin>>n;
	int row=1;
	while(row<=n){
		int spaces=1;
		while(spaces<=n-row){
			cout<<" ";
			spaces++;
		}
		int column=1;
		while(column<=row){
			cout<<"*";
			column++;
		}
		column=row-1;
		while(column>=1){
			cout<<"*";
			column--;
		}
		cout<<endl;
		row++;
	}
  
}
