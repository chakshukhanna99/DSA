// //constant function doubt

// #include<iostream>
// using namespace std;
// class Fraction{
//     private:
//     int numerator;
//     int denominator;
//     public:
//     Fraction(int numerator,int denominator){
//        this->numerator=numerator;
//        this-> denominator=denominator;
//     }
//     void print(){
//         cout<<this->numerator<<"/"<<this->denominator;
//     }
//     void simplify(){
//         int gcd=1;
//         int j=min(this->numerator,this->denominator);
//         for(int i=1;i<=j;i++){
//             if(this->numerator%i==0&&this->denominator%i==0){
//                 gcd=i;
//             }
//         }
//         this->numerator=this->numerator/gcd;
//         this->denominator=this->denominator/gcd;

//     }
//     void add(Fraction const &f2){
//         // int lcm=denominator*f2.denominator;
//         // int x= lcm/denominator;
//         // int y = lcm/f2.denominator;
//         // int num= x*numerator+(y*f2.denominator);
//         // numerator=num;
//         // denominator=lcm;
//         // simplify();

//     int lcm = denominator * f2.denominator;
//     int num1 = lcm / denominator * numerator;
//     int num2 = lcm / f2.denominator * f2.numerator;
//     numerator = num1 + num2;
//     denominator = lcm;
//     simplify();


//     }
//     void multiply(Fraction const &f2){
//         numerator=numerator*f2.numerator;
//         denominator=denominator*f2.denominator;
//         simplify();
//     }
//     int getNumerator() const{
//         return numerator;
//     }
//     int getDenominator() const{
//         return denominator;
//     }
//     void setNumerator(int n){
// numerator=n;
//     }
//     void detNumerator(){
        
//     }

// };
// int main(){
//     Fraction f1(10,2);
//     Fraction f2(15,4);
//     Fraction const f3;
//     cout<<f3.getNumerator();
//     cout<<f3.getDenominator();
// // cout<<f3.setNumerator(10);
// //     cout<<f3.setDenominator(20);
//     f1.add(f2);
//     f1.print();
//     cout<<endl;
//     f2.print();
//     f1.print();
//     f1.multiply(f2);
//     f1.print();
//     f2.print();
    

// }


#include<iostream>
using namespace std;

class Fraction {
private:
    int numerator;
    int denominator;

public:
    // Parameterized constructor
    Fraction(int numerator, int denominator) {
        this->numerator = numerator;
        this->denominator = denominator;
    }

    // Default constructor
    Fraction() {
        numerator = 0;
        denominator = 1;
    }

    void print() {
        cout << this->numerator << "/" << this->denominator;
    }

    void simplify() {
        int gcd = 1;
        int j = min(this->numerator, this->denominator);
        for (int i = 1; i <= j; i++) {
            if (this->numerator % i == 0 && this->denominator % i == 0) {
                gcd = i;
            }
        }
        this->numerator = this->numerator / gcd;
        this->denominator = this->denominator / gcd;
    }

    void add(const Fraction& f2) {
        int lcm = denominator * f2.denominator;
        int num1 = lcm / denominator * numerator;
        int num2 = lcm / f2.denominator * f2.numerator;
        numerator = num1 + num2;
        denominator = lcm;
        simplify();
    }

    void multiply(const Fraction& f2) {
        numerator = numerator * f2.numerator;
        denominator = denominator * f2.denominator;
        simplify();
    }

    int getNumerator() const {
        return numerator;
    }

    int getDenominator() const {
        return denominator;
    }

    void setNumerator(int n) {
        numerator = n;
    }

    void setDenominator(int d) {
        denominator = d;
    }
};

int main() {
    Fraction f1(10, 2);
    Fraction f2(15, 4);
    Fraction f3; // Using default constructor

    cout << f3.getNumerator() << endl;
    cout << f3.getDenominator() << endl;

    f1.add(f2);
    f1.print();
    cout << endl;
    f2.print();
    f1.print();

    f1.multiply(f2);
    f1.print();
    f2.print();

    return 0;
}
