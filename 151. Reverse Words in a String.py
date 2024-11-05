class Solution:
    def reverseWords(self, s: str) -> str:
        ans = s.strip().split()
        l = 0 
        r = len(ans)-1
        while l<r:
            ans[l], ans[r] = ans[r], ans[l]
            l += 1
            r -= 1
        return " ".join(ans)
