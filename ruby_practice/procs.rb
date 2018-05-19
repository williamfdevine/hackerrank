# procs.rb

def square_of_sum (my_array, proc_square, proc_sum)
    sum = proc_sum.call(my_array)
    proc_square.call(sum)
end

proc_square_number = proc {|num| num * num}
proc_sum_array     = proc {|to_sum| to_sum.inject(:+)}
my_array = gets.split().map(&:to_i)

puts square_of_sum(my_array, proc_square_number, proc_sum_array)