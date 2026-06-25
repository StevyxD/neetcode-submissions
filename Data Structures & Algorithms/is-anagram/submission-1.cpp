class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> mp1,mp2;
        for(auto it:s){
            if(mp1.find(it)==mp1.end()){
                mp1[it]=1;
            }
            else mp1[it]++;
        }

        for(auto it:t){
            if(mp2.find(it)==mp2.end()){
                mp2[it]=1;
            }
            else mp2[it]++;
        }
        for(auto it=mp1.begin();it!=mp1.end();it++){
            if(mp2.find(it->first)!=mp2.end() && mp2[it->first]==it->second){
                // good
            }
            else return false;
        }

        for(auto it=mp2.begin();it!=mp2.end();it++){
            if(mp1.find(it->first)!=mp1.end() && mp1[it->first]==it->second){
                // good
            }
            else return false;
        }
        return true;
    }
};
