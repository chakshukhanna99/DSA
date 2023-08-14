#include<iostream>
using namespace std;

int main(){
	char n;
	int countlc=0;
        int countn = 0;
        int countst = 0;
        while(n!='$'){
		n=cin.get();
                if (n >= 'a' && n <= 'z') {
                  countlc++;
                }
                if (n >= '0' && n <= '9') {
                  countn++;
                }
                if (n == ' ' || n == '\t' || n == '\n') {
                  countst++;
                }
        }
	cout<<countlc<<" "<<countn<<" "<<countst;
  
}
