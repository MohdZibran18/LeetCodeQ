class Solution:
    def climbStairs(self, n: int) -> int:
        ans1 = 0
        ans = [0, 1]
        for i in range(1, n + 1):
            first = ans[i - 1]
            second = ans[i]
            ans1 = first + second
            ans.append(ans1)
        return ans[-1]
