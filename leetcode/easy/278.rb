# In find-minimum mode, method bsearch returns the first element for which the block returns true.
# so it will find the first bad version which returns true
def first_bad_version(n)
  (1..n).bsearch { |i| is_bad_version(i) }
end
