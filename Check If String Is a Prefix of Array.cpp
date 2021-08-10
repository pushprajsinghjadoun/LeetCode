class Solution {
public:
    bool isPrefixString(string s, vector<string>& words) {
       
string newstring; int i=0; int d=words.size();
    while (newstring.size()<s.size() and i<d)
    {
        newstring+=words[i];
        i++;
    }
    
    if(newstring==s)
    {
        return true;
    }
    
    return false;
    
        
    }    
};