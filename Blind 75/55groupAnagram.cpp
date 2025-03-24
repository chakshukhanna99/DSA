#include<iostream>
#include<cmath>
#include<algorithm>
#include<string>
#include<vector>
#include<unordered_map>
using namespace std;
vector<vector<string> > groupAnagrams(vector<string>& strs){
    unordered_map<string,vector < string > > mp;
    for(int i=0;i<strs.size();i++){
        string sorted=strs[i];
        sort(sorted.begin(),sorted.end());
        mp[sorted].push_back(strs[i]);

    }
    vector <vector < string > > result;
    for (const auto& pair : mp) {
       result.push_back(pair.second);
    }
    return result;
}
int main(){
    int n;
    cin>>n;
    vector<string> arr;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        arr.push_back(s);
    }
    vector<vector<string> > result = groupAnagrams(arr);
    for(int i=0;i<result.size();i++){
        for(int j=0; j <result[i].size();j++){
            cout<<result[i][j]<<" ";
            }
            cout<<endl;
    }
}