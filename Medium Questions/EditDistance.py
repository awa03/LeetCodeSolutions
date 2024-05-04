class Solution:

    # equal     (i + 1, j + 1)      - Takes 0 operations
    # insert    (i, j + 1)          - Takes 1 operation
    # delete    (i + 1, j)          - Takes 1 operation
    # replace   (i + 1, j + 1)      - Takes 1 operation

    def minDistance(self, word1: str, word2: str) -> int:
        cache =  [ [float("inf")] * (len(word2) + 1) for i in range(len(word1) + 1)]

        # INIT Base Case
        for j in range(len(word2) + 1):
            cache[len(word1)][j] = len(word2) - j

        for i in range(len(word1) + 1):
            cache[i][len(word2)] = len(word1) - i

        for i in range(len(word1) - 1, -1, -1):
            for j in range(len(word2) - 1, -1, -1):
                if(word1[i] == word2[j]):
                    cache[i][j] = cache[i + 1][j + 1]
                else:
                    cache[i][j] = 1 + min(cache[i + 1][j], cache[i][j + 1], cache[i + 1][j + 1])

        return cache[0][0]

        



    ########################################################
    #    a b c -    Which leads to the minimum amount      #
    #  a       3    of operations, Bottom Up Programming   #
    #  b       2                                           #
    #  c       1                                           #
    #  - 3 2 1 0                                           #
    ########################################################

        
