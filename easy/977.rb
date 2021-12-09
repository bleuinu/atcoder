# @param {Integer[]} nums
# @return {Integer[]}
def sorted_squares(nums)
  nums.map! {|x| x*x}
  nums.sort
end
