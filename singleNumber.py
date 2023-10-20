class Solution:
    def singleNumber(self, nums: List[int]) -> int:
        ans = 0
        for number in nums:
            ans ^= number

        return ans
