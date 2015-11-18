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
	make(v: INTEGER)  -- Konstruktor
		do
			value:=v
			ensure
				value = v
		end
feature --Setters
	setLeft (L :detachable Node)
	do
		left:=L
		ensure
			left= L
	end

	setRight (R :detachable Node)
	do
		right:=R
		ensure
			right = R
	end

	setValue (val : INTEGER)
	do
		value := val
	end

feature --Getters
	getLeft:detachable NODE
	do
		if attached left as L then
			Result := L
		end
		ensure
			Result = left
	end

	getRight:detachable NODE
	do
		if attached right as R then
			Result := R
		end
		ensure
			Result = right
	end

	getValue: INTEGER
	do
		Result:=value
		ensure
			Result = value
	end


end
