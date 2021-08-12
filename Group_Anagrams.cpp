//author @ Pushpraj Singh Jadoun

#include <bits/stdc++.h>
using namespace std;

vector<vector<string>> groupAnagrams(vector<string>& strs) 
{
    int temp;
    unordered_map<string,int> u;
    vector<vector<string>> result;
    for(auto k : strs)
    {
        string mm = k;
        sort(mm.begin(),mm.end());
        if(u[mm]>0)
        {
            result[u[mm]-1].push_back(k);
        }else{result.push_back({k}); u[mm]= result.size();}

    }
    sort(result[0].begin(),result[0].end());
    return result;
}

int main()
{
    vector<string> s={"eat","tea","tan","ate","nat","bat","bna","ghar"};
    vector<vector<string>> temp = groupAnagrams(s);
   
    for(auto x: temp)
    {
        vector<string> t= x;
        for(auto g : t)
        {
            cout<<g<<" ";
        }
    }
    return 0;
}