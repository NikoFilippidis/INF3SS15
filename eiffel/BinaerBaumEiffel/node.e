note
	description: "Summary description for {NODE}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	NODE

feature
	left : detachable Node assign setLeft
	right: detachable Node assign setRight
	parent: detachable Node assign setParent
	value: INTEGER assign setValue

	make(v: INTEGER)  -- Konstruktor
		do
			setValue(v)
		end

	setLeft (L : detachable Node)
	do
		left:=left
	end

	setRight (R : detachable Node)
	do
		right:=R
	end

	setParent (P : detachable Node)
	do
		parent:=P
	end

	getLeft:NODE
	do
		check attached left as L then
				Result := L
			end
	end

	getRight:NODE
	do
			check attached right as R then
				Result := R
			end
	end

	getParent:NODE
	do
		check attached parent as P then
				Result := p
			end
	end
end
