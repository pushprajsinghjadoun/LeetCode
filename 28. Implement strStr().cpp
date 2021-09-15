class Solution {
public:
    int strStr(string haystack, string needle) {
        int n1 = haystack.length(), n2 = needle.length();
        
        if(needle == "") return 0; 
        if(n2 > n1) return -1;

        for(int i = 0; i < n1-n2+1; i++){
            if(haystack.substr(i, n2) == needle) return i;
        }
        return -1;
    }
};