class Solution {
public:
    int myAtoi(string s) {
        stringstream pushpraj(s);
        int x = 0;
        pushpraj>>x;
        return x;
    }
};