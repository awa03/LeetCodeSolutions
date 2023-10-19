class Solution:
    def strStr(self, haystack: str, needle: str) -> int:
        # Lengths
        haystack_len = len(haystack)
        needle_len = len(needle)

        # Iterate though list
        for i in range(haystack_len - needle_len + 1):
            substring = haystack[i:i + needle_len]
            if substring == needle:
                return i

        # if not found
        return -1  
