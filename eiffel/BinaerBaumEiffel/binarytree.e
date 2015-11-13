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
	root:detachable NODE

feature
	make(v:INTEGER)
	do
		create root.make(v)
	end

feature
	add (i : INTEGER)
	Local
		nNode :detachable NODE
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
		--if k = Void then
		--	k:=nNode
		--end
		if root = Void then
			root := k
		else
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
	end


	remove(j :INTEGER)
	do

	end

	insert(i:INTEGER)
	do

	end


end

