# methods_variable_arguments.rb

def full_name(first, *rest_of_name, last)
	@full = first
	
	rest_of_name.each do |name|
		@full += " " + name
	end
	@full += " " + last

	return @full
	
end