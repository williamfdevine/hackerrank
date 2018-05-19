# partial_applications.rb

combination = ->(n) {
					->(r) {
						combo = 1
						r.times{|i| combo = combo * (n - i) / (i + 1)}
						combo
					}
				}
#________________________________________________
#________________________________________________
#________________________________________________

n = gets.to_i
r = gets.to_i
nCr = combination.(n)
puts nCr.(r)