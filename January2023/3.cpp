class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        int ans = 0;
        for(int i=0;i<strs[0].size();i++)
        {
            string str="";
            for(int j=0;j<strs.size();j++)str+=strs[j][i];

            string temp = str;
            sort(str.begin(),str.end());
            if(temp!=str)ans++;
        }
        return ans;
    }
};
