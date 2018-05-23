# lazy_evaluation.rb

require 'prime'

p Prime.each.lazy.select{ |num|
	num.to_s == num.to_s.reverse
}.first(gets.to_i)