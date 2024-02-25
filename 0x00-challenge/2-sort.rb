###
#
#  Sort integer arguments (ascending) 
#
###

result = []  # Initialize an empty array to store sorted integers

ARGV.each do |arg|  # Iterate over each command line argument provided
    next if arg !~ /^-?[0-9]+$/  # Skip the argument if it's not an integer

    i_arg = arg.to_i  # Convert the argument to an integer

    is_inserted = false  # Flag to track if the integer has been inserted
    i = 0  # Initialize a counter variable for position tracking
    l = result.size  # Get the size of the result array

    while !is_inserted && i < l do  # Iterate over the result array until the integer is inserted
        if result[i] > i_arg  # Check if the current element is greater than the integer
            result.insert(i, i_arg)  # Insert the integer at the current position
            is_inserted = true  # Set the flag to true since the integer has been inserted
        else
            i += 1  # Move to the next position in the result array
        end
    end
    result << i_arg if !is_inserted  # Append the integer to the result array if it hasn't been inserted yet
end

puts result  # Print the sorted integers
