class Solution:
    def reverse(self, x: int) -> int:
        num = int(str(abs(x))[::-1]) * -1 if x < 0 else int(str(x)[::-1])
        return 0 if (num > 2 ** 31 - 1 or num < -2 ** 31) else num
        
    
