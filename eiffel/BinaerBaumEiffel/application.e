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
			create b.make(6)
			b.add (5)
			b.add (3)
			b.add (4)

			b.add (7)
			b.add (8)
			b.add (10)

			b.has (8)
			
		end



end
