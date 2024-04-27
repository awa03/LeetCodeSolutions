class Solution:
    def findRotateSteps(self, ring: str, key: str) -> int:
      cache = {}

      def helper(r, k):
        if k == len(key):
          return 0

        if (r, k) in cache:
          return cache[(r, k)]

        res = float("inf")

        for i, c in enumerate(ring):
          if c == key[k]:
            min_dist = min(
              abs(r - i),            # Distance Between Ring
              len(ring) - abs(r - i) # Distance Around Ring
            )
            res = min (
              res, 
              min_dist + 1 + helper(i, k + 1)
              )
        cache[(r, k)] = res
        return res
      return helper(0, 0)
      
