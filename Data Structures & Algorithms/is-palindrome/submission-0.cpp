class Solution {
public:
    bool isPalindrome(string s) {
        string temp="";
        for (char c : s) {
            if (isalnum(c))
                temp += tolower(c);
        }
        int left=0,right=temp.length()-1;
        while(left<right){
            cout<<temp[left]<<" "<<temp[right]<<endl;
            if(temp[left]!=temp[right])return false;
            else {
                left++;
                right--;
            }
        }
        return true;
    }
};
