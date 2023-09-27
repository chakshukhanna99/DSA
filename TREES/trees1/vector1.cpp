#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> *p = new vector<int>();
    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v[1]=100;
    cout<<v[0]<<endl;
    cout<<v[1]<<endl;
    cout<<"size is :"<<v.size()<<endl;
    cout<<v.at(2)<<endl;

    cout<<"hello"<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v.at(i)<<endl;
    }
v.pop_back();

cout<<v.capacity()<<endl;
}
