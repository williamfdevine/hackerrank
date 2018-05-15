# control_structures_each.rb

def scoring(array)
	array.each do |user|
		user.update_score
	end
end