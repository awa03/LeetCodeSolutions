class Solution:
    def fizzBuzz(self, n: int) -> List[str]:
        r = [] # Init Arry
        for i in range(1, n+1):
            if i % 3 == 0 and i % 5 == 0:     # Check if both first
                r.append("FizzBuzz")
            elif i % 3 == 0:                  # Check the div by 3
                r.append("Fizz")
            elif i % 5 == 0:                  # Check if div by 5
                r.append("Buzz")
            else:
                r.append(str(i))
        return(r)   


# O(N) Time Complexity
# O(1) Space Complexity
