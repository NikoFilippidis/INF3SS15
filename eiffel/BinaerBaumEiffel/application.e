note
	description : "BinaerBaumEiffel application root class"
	date        : "$Date$"
	revision    : "$Revision$"

class
	APPLICATION

inherit
	ARGUMENTS

create
	make

feature {NONE} -- Initialization
	root : NODE
	make
			-- Run application.
		do
			root.make(2)
			--| Add your code here
			print ("Hello Eiffel World!%N")
		end

end
