class Solution {
public:
    string reverseOnlyLetters(string S) {
        string ans;
        stack<char> letters;
        
        for(char c : S){
            if(isalpha(c)){
                letters.push(c);
            }
        }
        
        for(char c : S){
            if(!isalpha(c)){
                ans += c;
            }else{
                ans += letters.top();
                letters.pop();
            }
        }
        
        return ans;
    }
};