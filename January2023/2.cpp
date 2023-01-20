class Solution {
public:
    bool detectCapitalUse(string word) {
        int a=0,b=0;
        for(int i=0;i<word.size();i++)
        {
            if(word[i]>='A' && word[i]<='Z')a++;
            else b++;
        }

        if(a==0 || b==0)return true;
        if(a==1 && word[0]>='A' && word[0]<='Z')return true;
        return false;
    }
};
