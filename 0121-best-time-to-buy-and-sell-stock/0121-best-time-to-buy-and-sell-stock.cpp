class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max_ele=0;
        int min_ele = 10e4+1;
        for(auto price : prices){
            min_ele = min(price,min_ele);
            max_ele=max(max_ele,price-min_ele);
        }
        return max_ele;
    }
};