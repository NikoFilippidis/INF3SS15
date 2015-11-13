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
	value: detachable INTEGER assign setValue

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
		Result := left
	end

	getRight:NODE
	do
		Result := right
	end

	getParent:NODE
	do
		Result := parent
	end
end
