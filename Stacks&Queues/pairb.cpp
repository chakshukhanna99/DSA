#include "paira.cpp"
#include<iostream>
using namespace std;
int main(){

    Pair<Pair<int,int>,int>p2;
    p2.sety(20);
    Pair<int,int>p4;
    p4.setx(10);
    p4.sety(20);
    p2.setx(p4);
    cout<<p2.getx().getx()<<p2.getx().gety()<<" "<<p2.gety()<<endl;


    // Pair<int,double> p1;
    // p1.setx(10);
    // p1.sety(20.2);
    // cout<<p1.getx()<<p1.gety();
}