'''
Problem Link -> https://leetcode.com/explore/featured/card/june-leetcoding-challenge/539/week-1-june-1st-june-7th/3353/
Idea -> DP Approach
Changing inner loop why is good to go
Time and Space -> amount*len(coin), O(amount)

'''



class Solution(object):
    def change(self, amount, coins):
        """
        :type amount: int
        :type coins: List[int]
        :rtype: int
        """
        dp = [0]*(amount+1)
        dp[0] = 1
        
        #recursive case
        for i in  range(len(coins)):
            for j in range(1, amount+1):
                if(j-coins[i] >= 0):
                    dp[j] += dp[j-coins[i]]
        return dp[len(dp)-1]
                
        
