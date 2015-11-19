note
	description: "Summary description for {WURZEL}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	WURZEL

create
	make

feature --Wurzel Initialisation
	value: INTEGER
	left : detachable Node assign setLeft
	right: detachable Node assign setRight


feature
	make(v: INTEGER)  -- Construktor
		do
			value:=v
			ensure
				value = v
		end
feature --Setters
	setLeft (L :detachable Node) --Sets the left Node
	do
		left:=L
		ensure
			left= L
	end

	setRight (R :detachable Node) --Sets the right Node
	do
		right:=R
		ensure
			right = R
	end

	setValue (val : INTEGER) --Sets the value
	do
		value := val
	end

feature --Getters
	getLeft:detachable NODE  --Returns the left Node
	do
		if attached left as L then
			Result := L
		end
		ensure
			Result = left
	end

	getRight:detachable NODE	--Returns the right Node
	do
		if attached right as R then
			Result := R
		end
		ensure
			Result = right
	end

	getValue: INTEGER		----Returns the value
	do
		Result:=value
		ensure
			Result = value
	end
end
