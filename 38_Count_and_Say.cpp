class Solution {
public:
    string countAndSay(int n) {
        if(n==1) return "1";
        
        string s = countAndSay(n-1);
        
        string res = "";
       int counter=0;
        for(int i =0;i<s.size();i++)
        {
            counter++;
            if(i==s.size()-1 || s[i]!=s[i+1])
            {
                res = res + to_string(counter) + s[i];
                counter = 0;
            }
        }
        return res;
    }
};class Solution {
public:
    string countAndSay(int n) {
        if(n==1) return "1";
        
        string s = countAndSay(n-1);
        
        string res = "";
       int counter=0;
        for(int i =0;i<s.size();i++)
        {
            counter++;
            if(i==s.size()-1 || s[i]!=s[i+1])
            {
                res = res + to_string(counter) + s[i];
                counter = 0;
            }
        }
        return res;
    }
};