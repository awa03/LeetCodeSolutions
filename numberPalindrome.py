class Solution(object):
    def isPalindrome(self, x):
        x_str = str(x)
        if x_str != x_str[::-1]:
            return False
        return True
