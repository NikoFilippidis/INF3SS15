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
	root: NODE

feature
	make(v:INTEGER)
	do
		create root.make(v)
	end

feature
	add (i : INTEGER)
	Local
		nNode : NODE
	do
		create	nNode.make(i)
		if root /= Void then
			root := nNode
		else
			nNode := root
		end
		addRekursive(nNode,i)
	end

	addRekursive(k:detachable NODE; s:INTEGER)
	Local
		nNode : NODE
	do
		create nNode.make (s)
--		if root = Void then
--			if k /= Void then
--				root := k
--			end

	--	else
			if k/= Void then
				if s < k.getvalue then
					if k.getleft /= Void then
						addrekursive (k.getleft, s)
					else
						k.setleft (nNode)
					end
				end

				if s > k.getvalue then
					if k.getRight /= Void then
						addrekursive (k.getRight, s)
					else
						k.setRight(nNode)
					end
				end
			end
	--	end
	end

	has(i:INTEGER)
	do
		hasRek (i, root)
	end

	hasRek(i:INTEGER; r:detachable NODE)
	do
		if r/= Void then
			if i = r.getvalue then
					print(i)
					print("Found")
			end
			if i < r.getvalue then
				hasrek (i, r.getleft)
			else
				hasrek (i, r.getright)
			end
		end
	end


end

