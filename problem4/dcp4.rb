###############################################################################
# 2019-09-21
###############################################################################
# This problem was asked by Stripe.
#
# Given an array of integers, find the first missing positive integer in 
# linear time and constant space. In other words, find the lowest positive 
# integer that does not exist in the array. The array can contain duplicates 
# and negative numbers as well.
#
# For example, the input [3, 4, -1, 1] should give 2. 
# The input [1, 2, 0] should give 3.
#
# You can modify the input array in-place.
###############################################################################

# Linear Time
# Linear Space
def dcp4(input)
    max = input.max                   # linear
    b = ([*1 .. max] - input)

    if b.empty?                       # constant
        return max+1 
    end

    b.first                           # constant
end

# Linear Time
# Constant Space
def dcp4_2(input)
    target = 1
    input.sort!                       # in-place sorting?

    input.each do |x|                 # linear
        next if x <= 0 or x == target - 1
        break if x != target

        if x == target
            target += 1
        end
    end

    target
end

# Linear time
# Hash is O(n)
def dcp4_3(input)
    hash = Hash.new()

    input.each do |x|
        hash[x] = 0 if x > 0
    end

    (1 .. input.size).each do |x|
        return x if hash[x] == nil
    end
end

require 'minitest/autorun'

class Tests < Minitest::Test
    def test_example_one
        assert_equal 2, dcp4_3([3, 4, -1, 1])
        assert_equal 3, dcp4_3([1, 2, 0])
        assert_equal 3, dcp4_3([1, 1, 1, 2, 5])
        assert_equal 12, dcp4_3([*(-100)..10, 11])
        assert_equal 2, dcp4_3([1, 1000000])
    end
end
