#include<iostream>
using namespace std;
class Fraction{
    private:
    int numerator;
    int denominator;
    public:
    Fraction(int numerator,int denominator){
       this->numerator=numerator;
       this-> denominator=denominator;
    }
    void print(){
        cout<<this->numerator<<"/"<<this->denominator;
    }

};