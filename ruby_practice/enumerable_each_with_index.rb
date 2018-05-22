# enumerable_each_with_index.rb

def skip_animals(animals, skip)

	ret_val = Array.new()
	
	animals.each_with_index{ |animal, index|
		if index >= skip
			ret_val << "#{index}:#{animal}"
		end
	}

	return ret_val

end