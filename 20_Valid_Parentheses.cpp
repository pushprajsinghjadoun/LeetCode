class Solution {
public:
    bool isValid(string s) {
        if(s.size()==1)
            return 0;
        stack<char>st;
       for(int i=0;i<s.size();++i){
           if(s[i]=='('|| s[i]=='{'||s[i]=='[')
               st.push(s[i]);
           else {
               if(st.empty())
                   return 0;
               if(st.empty() && s[i]!=st.top())
                   return 0;
               else if((s[i]==')' && st.top()=='(' ) || (st.top()=='{' && s[i]=='}') ||(st.top()=='[' && s[i]==']'))
                     st.pop();
               else return 0;
                }
           
       }
      
    return st.empty();
    }
};