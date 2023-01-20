class Solution {
public:
    bool wordPattern(string p, string s) {
        map<char,string> mp1;
        map<string,char> mp2;
        int j=0;
        for(int i=0;i<p.size();i++)
        {
            string ss="";
            if(j>=s.size())return false;
            while(j<s.size())
            {
                if(s[j]==' ')
                {
                    j++;
                    break;
                }
                else ss+=s[j];
                j++;
            }
            
            char c=p[i];
           // cout<<ss<<" "<<c<<"\n";
            if(mp1.find(c)==mp1.end() && mp2.find(ss)==mp2.end())
            {
                mp1[c]=ss;
                mp2[ss]=c;
            }
            else
            {
               if(mp1.find(c)==mp1.end() || mp2.find(ss)==mp2.end())return false;
                else
                {
                    if(mp1[c]!=ss)return false;
                }
            }
        }
        if(j<s.size())return false;
        return true;
    }
};
