class Solution:
    def removeElement(self, nums: List[int], val: int) -> int:

     cnt = 0
     for x in nums:
          if x != val:
                nums[cnt] = x
                cnt=cnt+1
     return cnt