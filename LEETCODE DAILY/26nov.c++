//QUESTION:-reverse the array by k element NO-LEETCODE 189
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        //check if k is greater than n or not;
        if(k>n)k%=n;
        //revrse the whole array
        reverse(nums.begin(),nums.end());
        //reverse 1st kth element;
        reverse(nums.begin(),nums.begin()+k);
        //reverse remain n-k element
        reverse(nums.begin()+k,nums.end());
    }
};

//QUESTION:-best time to but stock I NO-LEETCODE 121
//HERE I CAN BUY AND SEEL ONLY ONCE
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minprice=INT_MAX;
        int maxProfit=0;
        for(int i=0;i<prices.size();i++){
            minprice=min(minprice,prices[i]);
            maxProfit=max(maxProfit,prices[i]-minprice);
        }
        return maxProfit;
    }
};


//QUESTION BEST TIME TO BUY STOCK II NO LEETCODE:--122
//CATCH IS HERE I MAKE AS MAX AS POSSIBLE TO BUT AND SELL STOCK
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxprofit=0;
        for(int i=1;i<prices.size();i++){
            if(prices[i]>prices[i-1]){
                maxprofit+=prices[i]-prices[i-1];
            }
        }
        return maxprofit;
    }
};