# Definition for singly-linked list.
# class ListNode
#     attr_accessor :val, :next
#     def initialize(val = 0, _next = nil)
#         @val = val
#         @next = _next
#     end
# end
# @param {ListNode} head
# @return {ListNode}
def middle_node(head)
  temp = head
  cnt = 0
  while temp
    temp = temp.next
    cnt += 1
  end

  temp = head
  cnt = cnt / 2
  for i in 0...cnt
    temp = temp.next
  end
  temp
end
