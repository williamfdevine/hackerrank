# enumerable_collect.rb

def rot13(secret_messages)

	return secret_messages.map{ |secret_message|
		secret_message.tr("A-Za-z", "N-ZA-Mn-za-m")
	}

end