while true
    a, b = gets.split.map(&:to_i)
    break if a == 0 && b == 0
    puts a+b
end
