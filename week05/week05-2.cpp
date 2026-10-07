//week05-2.cpp Bulit-in Fuction 2
//Leetcode 709 To Lower Case
class Solution {
public:
    string toLowerCase(string s) {
        for(int i=0;i<s.length();i++){
            s[i]= tolower(s[i]);

        }
        return s;
    }
};
