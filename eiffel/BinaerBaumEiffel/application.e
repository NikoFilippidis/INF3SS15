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

feature {NONE}
	make
		do
			create b.make(10)

			b.add (5)
			b.add (18)
			b.add (2)
			b.add (7)
			b.add (9)
			b.add (15)
			b.add (24)


			b.inorder
			print(b.del (10))
			print(b.del (7))
			print(b.del (5))
			io.put_new_line
			b.inorder
		end
end
