# Definition for a binary tree node.
# class TreeNode
#     attr_accessor :val, :left, :right
#     def initialize(val = 0, left = nil, right = nil)
#         @val = val
#         @left = left
#         @right = right
#     end
# end
# @param {TreeNode} root
# @return {Integer}
def max_depth(root)
  return depth(root, 0)
end

def depth(node, cnt)
  return cnt if node == nil

  left = depth(node.left, cnt+1)
  right = depth(node.right, cnt + 1)

  [left, right].max
end
