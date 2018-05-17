# blocks.rb

def factorial
    yield
end

n = gets.to_i

factorial do 
    puts (2..n).to_a.inject{|val, n| val * n};
end