n, m = gets.chomp.split(' ').map(&:to_i)
a = gets.chomp.split(' ').map(&:to_i).sort

max = -1
for i in 0...n
  for j in (i+1)...n
    for k in (j+1)...n
      break if a[i]+a[j]+a[k] > m
      if a[i]+a[j]+a[k] > max 
        max = a[i] + a[j] + a[k]
      end
    end 
  end 
end
puts max