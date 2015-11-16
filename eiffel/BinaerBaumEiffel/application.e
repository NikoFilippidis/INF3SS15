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

feature
	b : BINARYTREE

feature {NONE} -- Initialization

	make
			-- Run application.
		do
<<<<<<< HEAD
			create b.make(2)
			print("hallo")
=======
			create b.make(6)
			b.add (5)
			b.add (3)
			b.add (4)

			b.add (7)
			b.add (8)
			b.add (10)
>>>>>>> 4a98b0bab5854904aa862dd4c804f5e31723dc33

			b.has (8)
			
		end



end
