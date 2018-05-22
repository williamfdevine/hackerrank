# methods_keyword_arguments.rb

def convert_temp(temperature, input_scale:, output_scale: 'celsius')
	puts "input = #{temperature} scale = #{input_scale} output_scale = #{output_scale}"

	if input_scale == "celsius"	
		convert_celsius(temperature, output_scale: output_scale)
	elsif input_scale == "fahrenheit"
		convert_fahrenheit(temperature, output_scale: output_scale)
	elsif input_scale == "kelvin"
		convert_kelvin(temperature, output_scale: output_scale)
	else
		puts "WTF"
	end

end

def convert_celsius(temperature, output_scale)

	if output_scale == "fahrenheit"
		puts ((9/5) * temperature) + 32
		return ((9/5) * temperature) + 32
	else
		puts temperature + 273.15
		return temperature + 273.15
	end

end

def convert_fahrenheit(temperature, output_scale)

	if output_scale == "celsius"
		puts ((5/9) * (temperature - 32))
		return ((5/9) * (temperature - 32))
	else
		puts (5/9) * (temperature - 32) + 273.15
		return (5/9) * (temperature - 32) + 273.15
	end

end

def convert_kelvin(temperature, output_scale)

	if output_scale == "celsius"
		puts "HELLO"
		puts temperature + 273.15
		return temperature + 273.15
	else
		puts ((9/5) * (temperature - 273.15)) + 32
		return ((9/5) * (temperature - 273.15)) + 32
	end

end