class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& p) {
        sort(p.begin(),p.end());
        int ans=1,l=p[0][0],r=p[0][1];
        for(int i=1;i<p.size();i++)
        {
            if(p[i][0]>r)
            {
                ans++;
                l=p[i][0];
                r=p[i][1];
            }
            else
            {
                l=max(l,p[i][0]);
                r=min(r,p[i][1]);
            }
        }
        return ans;
    }
};
