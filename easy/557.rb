# @param {String} s
# @return {String}
def reverse_words(s)
  s.split(' ').each { |s| s.reverse! }.join(' ')
end
