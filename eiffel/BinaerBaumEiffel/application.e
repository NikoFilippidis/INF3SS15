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

	make
			-- Run application.
		do
			create b.make(2)
			b.add (3)
			b.add (8)

		end

feature
	b : BINARYTREE

end
