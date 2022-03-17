# @param {Integer[]} nums
# @return {Void} Do not return anything, modify nums in-place instead.
def move_zeroes(nums)
    return nums if nums.size == 1 or nums.size == 0
    size = nums.size
    pos = 0
    
    for idx in 0...size do
        if nums[idx] != 0
            temp = nums[pos]
            nums[pos] = nums[idx]
            nums[idx] = temp
            pos += 1
        end
    end
    nums
end
