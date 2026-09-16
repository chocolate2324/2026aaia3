//week02-4 學習計畫 Basic 2
//389. Find the Difference
//給兩個字母
//整理左邊s字母,再讓右邊t用掉。不夠用時,找到答案
class Solution {
public:
    char findTheDifference(string s, string t) {
        int H[26] = {};//用陣列統計左邊s字母,大括弧{}代表都是0
        for(char c : s){//c++ 進階for迴圈,可把字母一個一個取出
            H[c-'a'] += 1;//統計字母出現次數 多1
        }
         for(char c : t){//c++ 進階for迴圈,可把字母一個一個取出
            H[c-'a'] -= 1;//用掉一個字母
            if(H[c-'a'] <0)return c;//字母不夠用,找到答案!
        }
        return 0;
        }

};
