note
	description: "Summary description for {FACTORIALSOLUTION}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	FACTORIALSOLUTION
create
	make
feature --Constructor
	make(i:INTEGER) do
		setValue(i)
	end

feature --Attributes
	value:INTEGER

feature --Setter
	setValue(i:INTEGER) do
		value:=i
	end
feature -- Getter
	getValue:INTEGER do
		Result:=value
	end

end
