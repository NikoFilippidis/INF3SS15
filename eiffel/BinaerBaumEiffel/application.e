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
		do
			create b.make(10)

			b.add (5)
			b.add (2)
			b.add (7)
			b.add (9)
			b.add (18)
			b.add (15)
			b.add (24)

			b.has (5)
			b.has (21)
			b.inorder

		end



end
