class Solution {
   public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = temperatures.size();
        vector<int> answer(n,0);

        stack<int>high;

        for(int i = 0 ; i < n ;i++){
            while(!high.empty() && temperatures[i] > temperatures[high.top()]){
                int index = high.top();
                high.pop();
                answer[index] += i - index;
            }
            high.push(i);
        }
        return answer;
    }
};