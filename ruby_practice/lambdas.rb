# lambdas.rb

square      = ->(a) {a * a}

plus_one    = ->(a) {a + 1}

into_2      = ->(a) {a * 2}

adder       = ->(a,b) {a + b}

values_only = ->(a) {a.values}

input_number_1 = gets.to_i
input_number_2 = gets.to_i
input_hash = eval(gets)

a = square.(input_number_1); b = plus_one.(input_number_2);c = into_2.(input_number_1); 
d = adder.(input_number_1, input_number_2);e = values_only.(input_hash)

p a; p b; p c; p d; p e