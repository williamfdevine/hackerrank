# strings_indexing.rb

def serial_average(serial_str)

	serial_num = serial_str[0,3]
	xx = serial_str[4,5]
	yy = serial_str[10,5]
	avg = ((xx.to_f + yy.to_f) / 2.0).round(2)

	ret_str = "#{serial_num}-#{avg}"

end