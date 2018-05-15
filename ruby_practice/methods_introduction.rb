# methods_introduction.rb

def prime?(num)

	if num <= 3 && num > 1
		return true
	elsif num <= 1 || num % 2 == 0 || num % 3 == 0
		return false
	else
		@idx = 5
		while @idx * @idx <= num do 
			if num % @idx == 0 || num % (@idx + 2) == 0
				return false
			end
			@idx += 6
		end
	end

	return true
end

