///week02-3 學習計畫 Basic 1
///Leetcode 171768. Merge Strings Alternately
class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int N1 = word1.length(),N2 = word2.length();///字串長度
        string ans;///答案字串
        for(int i=0;i<max(N1,N2);i++){
            if(i<N1) ans += word1[i];///i沒超過字串範圍就插入[word1]
            if(i<N2) ans += word2[i];///i沒超過字串範圍就插入[word2]
        }
        return ans;///答案的字串,在這裡
    }
};
