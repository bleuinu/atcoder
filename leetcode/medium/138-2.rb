def copyRandomList(head)
  copy_head = Marshal.load(Marshal.dump(head))
end
