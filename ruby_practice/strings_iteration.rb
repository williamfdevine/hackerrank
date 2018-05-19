# strings_iteration.rb

def count_multibyte_char(mb_str)

	mb_str.each_codepoint.count{
		|cp|
		cp > 256
	}

end