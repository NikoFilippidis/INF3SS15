note
	description: "Summary description for {FACTORIALPROBLEM}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	FACTORIALPROBLEM
create
	make
feature
	solution : detachable FACTORIALSOLUTION
	fac : INTEGER

feature
	make(fa : INTEGER)
	do
		fac := fa

	end

feature
	isDirectlySolvable(prob : FACTORIALPROBLEM) : BOOLEAN
	do
		if prob.getstartvalue = 1 then
			Result := true
		else
			Result := false
		end
	end

feature
	getStartValue:INTEGER
	do
		result := fac
	end

feature

	part(prob : FACTORIALPROBLEM):FACTORIALPROBLEM
	local
		localProblem : FACTORIALPROBLEM
	do
		create localProblem.make ((prob.getstartvalue-1))
		Result := localproblem
	end

feature

	solve(problem:FACTORIALPROBLEM) : FACTORIALSOLUTION
	local
		newProblem : FACTORIALPROBLEM
		nProblem : FACTORIALPROBLEM
	do
		if isDirectlySolvable(problem) then

			else

			Result := solve(part(problem))
		end
		Result:=problem
	end
end
