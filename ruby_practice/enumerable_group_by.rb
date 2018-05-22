# enumerable_group_by.rb

def group_by_marks(marks, pass_mark)
	groups = marks.group_by {|key, value| 
		if(false == key.empty?)
			if(value >= pass_mark)
				"Passed"
			else
				"Failed"
			end
		end
	}
end