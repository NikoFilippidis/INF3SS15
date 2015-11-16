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

<<<<<<< HEAD
	remove(i :INTEGER) : BOOLEAN
	do
		result removeRecursion(root,i,void,false)
	end

	removeRecursioni(k : Node, i : Integer, father : Node, leftFromFahter : BOOLEAN) : BOOLEAN
	do
		return : BOOLEAN
		done : BOOLEAN
		done := false

		if k = void then
			return := false
			done := true;
		end

		if /done then
				if i = k.getValue then
					--found
					--k is leaf
					if k.getLeft = void and k.getRight = void then

						if father = void then
							root := void;
						else
							hengUnerFahter(father,leftFromFather,void)
						end
					end
					return := true
					done := true


					--k has just right a undernode
					if /done then
						if (k.getLeft = void) and (k.getRight() /= void) then
							if father = void then
								root := k.getRight
							else
								hengUnderFather(father,leftFromFather,k.getRight)
							end
							return := true
							done := true
						end
					end
					--k has just left a undernode
					if /done then
						if (k.getLeft /= void) and (k.getRight() = void) then
							if father = void then
								root := k.getLeft
							else
								hengUnderFather(father,leftFromFather,k.getLeft)
							end
							return := true
							done := true
						end
					end

					--delete node with 2 childs
					if /done then
						x : NODE
						x := getSmallest(k.getRight)
						remove(x.getData)
						if father = void then
							x.setLeft(root.getleft)
							x.setRight(root.getright)
							root := x
						else
							x.setLeft(k.getLeft)
							x.setRight(k.getRight)
							hengUnderFather(father, amLeftFromFather, x)
						end
					end
				end

		end
		--not found seach left
		if /done then
			if i < k.getValue then
				if k.getLeft = void then
					return := false
					done := true
				else
					return := removeRecursioni(k.getLeft,i,k,true)
					done := true
				end
			end
		end

		--not found seach right
		if /done then
			if i > k.getValue then
				if k.getRight = void then
					return := false
					done := true
				else
					return := removeRecursioni(k.getRight,i,k,true)
					done := true
				end
			end
		end
		if /done then
			return := false
		end
		result := return
	end

	hengUnderFather(father : Node, left : BOOLEAN , k : NODE)
	do
		if left then
			father.setLeft(k)
		else
			father.setRight(k)
		end
=======
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
>>>>>>> 4a98b0bab5854904aa862dd4c804f5e31723dc33
	end

	hasRek(i:INTEGER; r:detachable NODE)
	do
<<<<<<< HEAD

=======
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
>>>>>>> 4a98b0bab5854904aa862dd4c804f5e31723dc33
	end


end

