def hansoo(n) 
  n = n.to_s 
  a,b,c = [n[0].to_i, n[1].to_i, n[2].to_i]
  return (a-b) == (b-c)
end

n = gets.chomp.to_i
if n <= 99 
  puts n
elsif n <= 110
  puts 99
elsif n == 1000 
  puts 144
else 
  cnt = 100
  for i in 112..n do
    if hansoo(i)
      cnt += 1
    end
  end
  puts cnt
end

