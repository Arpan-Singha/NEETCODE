class Solution:
    def majorityElement(self, nums: List[int]) -> int:
        length=len(nums)
        candidate=-1
        count=0

        for i in nums:
            if count==0:
                candidate=i
                count+=1

            elif i==candidate:
                count+=1
            else:
                count-=1

        count1= 0
        for i in nums:
             if i==candidate:
               count1+=1

        length2=length/2
        if count1>length2:
            return candidate