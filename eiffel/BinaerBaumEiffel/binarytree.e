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
	root:NODE

feature
	make(v:INTEGER)
	do
		create root.make(v)
	end

feature
	add (i : INTEGER)
	do

	end

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
	end

	insert(i:INTEGER)
	do

	end


end

