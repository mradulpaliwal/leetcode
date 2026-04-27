class Solution:
    def runningSum(self, nums: List[int]) -> List[int]:
        ans = []
        new=0

        for i in nums:
            new+=i
            ans.append(new)

        return ans