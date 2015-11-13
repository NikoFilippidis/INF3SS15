note
	description: "Summary description for {BINARYTREE}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	BINARYTREE
create
	make

feature
	root:NODE

feature
	make(v:INTEGER)
	do
		create root.make(v)
	end

feature 
end
