def twosum(nums,target):
    num_map ={}
    for i in range(len(nums)):
        complement = target-nums[i]
        if complement in num_map:
            return [num_map[complement],i]
            num_map[nums[i]]=i
            print(twosum([2,7,11,15],9))