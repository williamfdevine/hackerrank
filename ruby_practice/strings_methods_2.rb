# strings_methods_2.rb

def mask_article(input_str, str_array)

	str_array.each{ |to_strike| 
		if input_str.include? to_strike
			input_str = input_str.gsub(to_strike, strike(to_strike))
		end
	}

	return input_str

end

def strike(strike_str)

	ret_str = "<strike>" + strike_str + "</strike>"

end