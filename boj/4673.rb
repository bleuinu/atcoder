def d(n)
  return n + n.to_s.split('').map(&:to_i).sum
end

self_number = []
target = Array.new(10000, true)
target[0] = false
for i in 1...10000 do 
  if target[i]
    self_number << i
    v = i
    while v < 10000
      target[v] = false
      v = d(v)
    end
  end
end

puts self_number