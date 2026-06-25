class Solution {
public:

    string encode(vector<string>& strs) {
        string ans;
        for(auto it: strs){
            ans+= to_string(it.size())+ "#"+ it;
        }
        return ans;
    }

    vector<string> decode(string s) {
        vector<string> result;

        int i=0;
        while(i<s.size()){
            int j=i;

            while(s[j]!='#'){
                j++;
            }
            int len=stoi(s.substr(i,j-i));
            j++;
            result.push_back(s.substr(j,len));

            i=j+len;
        }
        return result;
    }
};
