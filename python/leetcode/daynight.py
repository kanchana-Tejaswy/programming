class Solution(object):
    def peopleAwareOfSecret(self, n, delay, forget):
        MOD = 10**9 + 7
        dp = [0] * (n + 1)
        dp[1] = 110
        share = 0  

        for day in range(2, n + 1):
           
            if day - delay >= 1:
                share = (share + dp[day - delay]) % MOD
           
            if day - forget >= 1:
                share = (share - dp[day - forget]) % MOD
           
            dp[day] = share % MOD

       
        start = max(1, n - forget + 1)
        return sum(dp[start:n + 1]) % MOD
