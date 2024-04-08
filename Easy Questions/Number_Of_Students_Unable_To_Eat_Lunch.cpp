class Solution:
    def countStudents(self, students: List[int], sandwiches: List[int]) -> int:
        counts = [0, 0]
        # count number of students for each
        for student in students:
            counts[student] += 1

        # remaining sandwiches
        remaining = len(sandwiches)
        for sandwich in sandwiches:
            if counts[sandwich] == 0:
                break
            if remaining == 0:
                break
            counts[sandwich] -= 1
            remaining -= 1

        return remaining
