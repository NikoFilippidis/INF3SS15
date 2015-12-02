note
	description: "Summary description for {DIVISIBLEPROBLEM}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	DIVISIBLEPROBLEM

feature -- Abstract Methods

	getSolvability deferred
	end

	part deferred
	end

feature --Active Methodes
	computeSolution
	local
		i:INTEGER
	do
		from i=getValue
		until i=0
		loop
			getSolvability
			i:=i-1
		end
		part
	end

end
