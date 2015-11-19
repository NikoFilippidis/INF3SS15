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
	root : detachable NODE
	ausg : STRING

feature

	make(v:INTEGER)
	do
		create root.make(v)
		ausg := ""
	end

feature
	add (i : INTEGER)  --Add Node to BinaryTree i is the Value of the Node
	require
		has(i) = false
	Local
		nNode : NODE
	do
		create nNode.make (i)
		if root /= Void then
			addRekursive(root,i)
		else
			root := nNode
		end
		ensure
			has(i) = true
	end


	addRekursive(k : detachable NODE; s:INTEGER) -- Recursive arranging into the existing BinaryTree
	require
		k /= void
	Local
		nNode : NODE
	do
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
	end


	inOrder   -- Prints the BinaryTree inOrder from small value to big
	require
		root /= void
	do
		if root /= Void then
			inOrderRec(root)
		end

		print(ausg)
		ausg:=""
		io.put_new_line
	end

	inOrderRec (n:detachable NODE) --Recursive help Method of inOrder
		do
			if n /= Void then
				if n.getleft /= Void then
					inOrderRec (n.getleft)
				end
				ausg := ausg + n.getvalue.out + ", "
				if n.getright /= Void then
					inOrderRec (n.getright)
				end
			end
		end


	has(i:INTEGER) : BOOLEAN -- Checks if there is an node with the given value. Responds if its in or not.
	require
		root /= void
	do
		Result:=hasRek (i, root)
		ensure
			Result = hasRek(i,root)
	end

	hasRek(i:INTEGER; r:detachable NODE) : BOOLEAN --Runs through the BinaryTree and searches for the value.
	require
		r /= void
	Local
		found : BOOLEAN
	do
		found := FALSE
		if r /= Void then
			if i = r.getvalue then
				found:=TRUE
			end
			if i > r.getvalue and r.getright /= Void then
				found :=hasRek (i, r.getright)
			else if i < r.getvalue and r.getleft /= Void then
				found :=hasRek (i, r.getleft)
				end
			end
		end
		Result:=found
	end

feature
	del(value : INTEGER) : BOOLEAN  --Starts the recursive method derRec to delete the Node with value
	require
		has(value) = true
 	do
 		Result := delRec(root,value,Void,FALSE)
 		ensure
 			has(value) = false
 	end

 	delRec(k:detachable NODE; s: INTEGER; father : detachable NODE; amleftFromFather : BOOLEAN) : BOOLEAN
	Local
		x : detachable NODE
		b : BOOLEAN
		done : BOOLEAN
	do
		done := FALSE
		if k = Void then
			Result := FALSE
			done :=TRUE
		end
		if k /= Void and not done then
			if s = k.getvalue then  --Node found
				if k.getleft = Void and k.getright = Void then
					if father = Void then
						root := Void
					else
						hangUnderFather(father,amleftfromfather,Void)
					end
				 	Result:= TRUE
				 	done := TRUE
				end
				--Node k has one right child
				if k.getleft = Void and k.getright /= Void and not done then
					if father = Void then
						root := k.getright
					else
						hangUnderFather(father,amleftfromfather,k.getright)
					end
					Result:= TRUE
					done := TRUE
				end
				--Node k has one left child
				if k.getleft /= Void and k.getright = Void and not done then
					if father = Void then
						root := k.getleft
					else
						hangUnderFather(father,amleftfromfather,k.getleft)
					end
					Result:= TRUE
					done := TRUE
				end
				create x.make (0)
				x := getSmallest(k.getright)
				if root /= Void and not done then
					if x /= Void then
							b:= del (x.getvalue)
							if father = Void then
								if attached root as tmp then
									x.setleft (tmp.getleft)
									x.setright(tmp.getright)
									root:=x
								end
							else
								x.setleft (k.getleft)
								x.setright (k.getright)
								hangUnderFather(father,amleftfromfather,x)
							end
					end
				end
			end
			if s < k.getvalue and not done then --Search in left sub-tree
				 if k.getleft = Void then
				 	Result:= FALSE
				 	done := TRUE
				 else
				 	Result := delrec (k.getleft, s, k, TRUE)
				 	done := TRUE
				 end
			end
			if s > k.getvalue and not done then --Search in right sub-tree
				 if k.getright = Void then
				 	Result:= FALSE
				 	done := TRUE
				 else
				 	Result := delrec (k.getright, s, k, FALSE)
				 	done := TRUE
				 end
			end
			Result:= FALSE
			done := TRUE
		end
	end

	hangUnderFather(father : detachable NODE; left : BOOLEAN; k : detachable NODE) -- Attaches the Node under the "new" father
	require
		root /= void
	do
		if father /= Void then
			if left then
				father.setleft (k)
			else
				father.setright (k)
			end
		end
	end

	getSmallest (k : detachable NODE) :detachable NODE --Returns the smallest Node of the BinaryTree
	require
		root /= void
	Local
		b : detachable NODE
	do
		if k /= Void then
			if k.getleft = Void then
				b := k
			else
				b := getSmallest(k.getleft)
			end
		end
		Result := b
	end
end

