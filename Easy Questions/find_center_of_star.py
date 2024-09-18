class Solution:
    def findCenter(self, edges: List[List[int]]) -> int:
       return edges[0][0] if edges[0][0] in (edges[1][0], edges[1][1]) else edges[0][1]
