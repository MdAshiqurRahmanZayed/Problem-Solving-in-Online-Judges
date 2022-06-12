def maxSubArray(self, nums):
     maxsubarray= nums[0]
     test = 0
     for i in nums:
          if test<0:
               test = 0
          test +=i
          maxsubarray= max(test,maxsubarray)