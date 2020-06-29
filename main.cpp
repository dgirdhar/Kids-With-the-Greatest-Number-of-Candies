class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int max = 0;
        vector<bool> res(candies.size());
        
        if (candies.size() > 0) {
            max = candies[0];
        }
        
        for (int i = 1; i < candies.size(); ++i) {
            if (candies[i] > max) {
                max = candies[i];
            }
            res[i] = false;
        }
        
        for (int i = 0; i < candies.size(); ++i) {
            if (extraCandies + candies[i] >= max) {
                res[i] = true;
            }
        }
        
        return res;
    }
};
