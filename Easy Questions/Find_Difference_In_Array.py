class Solution:
    def findDifference(self, nums1: List[int], nums2: List[int]) -> List[List[int]]:
        arr = [[], []]
        for e in nums1:
            if (e not in nums2) and (e not in arr[0]):
                arr[0].append(e) 

        for e2 in nums2:
            if (e2 not in nums1) and (e2 not in arr[1]):
                arr[1].append(e2)

        return arr
