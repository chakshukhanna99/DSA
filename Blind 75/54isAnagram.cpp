#include<iostream>
using namespace std;
bool isAnagram(string s, string t) {
    if(s.length()!=t.length()){
        return false;
    }
    vector<int> mp(26,0);
    for(char ch:s) mp[ch-'a']++;
    for(char ch:t) mp[ch-'a']--;
    for(int i=0;i<26;i++){
        if(mp[i]!=0) return false;
    }
    return true;
}
int main(){
    string s;
    cin>>s;
    string t;
    cin>>t;
    bool ans= isAnagram(s,t);
    if(ans){
        cout<<"Anagrams"<<endl;
    }
    else{
        cout<<"Not Anagrams"<<endl;
    }
}