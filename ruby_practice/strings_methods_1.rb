# strings_methods_1.rb

def process_text(str_array)

	ret_str = ""
	str_array.each{ |str|
		ret_str = "#{ret_str}#{str.strip} "
	}

	return ret_str.strip
end