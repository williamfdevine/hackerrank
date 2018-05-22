# enumerable_reduce.rb

def sum_terms(max_term)

	return (1..max_term).inject(0){|sum,n| sum + (n ** 2) + 1}

end