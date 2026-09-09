//week01-3.cpp 學習計畫basic第三題
//leetcode28. Find the Index of the First Occurrence in a String
//大海撈針(在稻草堆中找一根針)
class Solution {
public:
    int strStr(string haystack, string needle) {
        int N1 = haystack.length(),N2 = needle.length();
        //函式呼叫 字串長度 length()
        for(int i=0;i<=N1-N2;i++){//迴圈
            if(haystack.substr(i,N2) == needle)return i;//答案
            //如果大字串.substr(開始,字串)等於小字串
        }
        return -1;//找不到

    }
};
