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
	root: detachable NODE
	ausg : STRING

feature

	make(v:INTEGER)
	do
		create root.make(v)
		ausg := ""
	end

feature
	add (i : INTEGER)
	Local
		nNode : NODE
	do
		create nNode.make (i)
		if root /= Void then
			addRekursive(root,i)
		else
			root := nNode
		end
	end


	addRekursive(k : detachable NODE; s:INTEGER)
	Local
		nNode : NODE
	do

--		if root = Void then
--			if k /= Void then
--				root := k
--			end

	--	else
			if k/= Void then
				if s <= k.getvalue then
					if k.getleft = Void then
						create nNode.make (s)
						k.setleft (nNode)
						nNode.setparent (k)
					else
						addrekursive (k.getleft, s)
					end
				end

				if s >= k.getvalue then
					if k.getRight = Void then
						create nNode.make (s)
						k.setright (nNode)
						nNode.setparent (k)
					else
						addrekursive (k.getRight, s)
					end
				end
			end
	--	end
	end


	inOrder()
	do
		if root /= Void then
			inOrderRec(root)
		end

		print(ausg)
	end

	inOrderRec (n:detachable NODE)
		do
			if n /= Void then
				if n.getleft /= Void then
					inOrderRec (n.getleft)
				end
				ausg := ausg + n.getvalue.out + " "
				if n.getright /= Void then
					inOrderRec (n.getright)
				end
			end
		end


	has(i:INTEGER)
	do
		hasRek (i, root)

	end

	hasRek(i:INTEGER; r:detachable NODE)
	Local
		found : BOOLEAN
	do
		found := FALSE
		if r /= Void then
			if i = r.getvalue then
				if found = FALSE then
					print(i)
					print(" Found")
					io.new_line
					found:=TRUE
				end
			end
			if i > r.getvalue and r.getright /= Void then
				hasRek (i, r.getright)
			else
				if i < r.getvalue and r.getleft /= Void then
				hasRek (i, r.getleft)
				else
					if found = FALSE then
						io.putint (i)
						print(" Not Found")
						io.new_line
						found:=TRUE
					end
				end
			end

		end

	end
end

