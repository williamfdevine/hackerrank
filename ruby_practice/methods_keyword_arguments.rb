# methods_keyword_arguments.rb

def convert_temp(temperature, input_scale:, output_scale: 'celsius')

	if input_scale == 'celsius'	
		convert_celsius(temperature, output_scale)
	elsif input_scale == 'fahrenheit'
		convert_fahrenheit(temperature, output_scale)
	elsif input_scale == 'kelvin'
		convert_kelvin(temperature, output_scale)
	else
		puts "WTF"
	end

end

def convert_celsius(temperature, output_scale)

	if output_scale == 'kelvin'
		return temperature + 273.15
	elsif output_scale == 'fahrenheit'
		return ((temperature / 5) * 9) + 32.0
	else
		puts "WTFC"
	end

end

def convert_fahrenheit(temperature, output_scale)

	if output_scale == 'celsius'
		return ((temperature - 32.0) / 9) * 5
	elsif output_scale == 'kelvin'
		return (((temperature - 32.0) / 9) * 5) + 273.15
	else
		puts "WTFF"
	end

end

def convert_kelvin(temperature, output_scale)

	if output_scale == 'celsius'
		return temperature - 273.15
	elsif output_scale == 'fahrenheit'
		(((temperature - 273.15) / 5) * 9) + 32.0
	else
		puts "WTFK"
	end

end