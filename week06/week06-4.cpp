class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int>a;
        for(string s : operations){
            if(s=="C"){
                a.pop_back();
            }else if(s=="D"){
                a.push_back(a[a.size()-1]*2);
            }else if(s=="+"){
                a.push_back(a[a.size()-2]+a[a.size()-1]);
            }else{
                int now;
                stringstream ss(s);
                ss >> now;
                a.push_back(now);
            }

        }
        int ans = 0;
        for(int num:a){
            ans += num;
        }
        return ans;
    }
};
