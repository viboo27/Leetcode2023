class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
        map<int,int> mp;
        int sz = tasks.size();

        for(int i=0;i<sz;i++)mp[tasks[i]]++;

        int ans = 0;
        for(auto it:mp)
        {
            int cnt = it.second;
            if(cnt==1)return -1;
            ans+=(cnt/3);
            if(cnt%3)ans++;
        }

        return ans;
    }
};
