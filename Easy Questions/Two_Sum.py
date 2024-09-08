class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        cache = {}
        for n in range(len(nums)):
            num = nums[n]
            comp = target - num
            if comp in cache:
                return [cache[comp], n]
            cache[num] = n
