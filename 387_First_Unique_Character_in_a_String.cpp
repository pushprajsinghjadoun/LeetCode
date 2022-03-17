class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,int> ump;
        for(int i=0;i<s.size();i++)
        {
           char te = s[i];
            ump[te]++;
        }
        for(int i=0;i<s.size();i++)
        {
            auto itr = ump.find(s[i]);
            if(itr!=ump.end())
            {
                if(itr->second==1)
                {
                    return i;
                }
            }
        }
        return -1;
    }
};