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
		ensure
			--has (i) = TRUE
	end


	addRekursive(k : detachable NODE; s:INTEGER)
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


	inOrder()
	do
		if root /= Void then
			inOrderRec(root)
		end

		print(ausg)
		ausg:=""
		io.put_new_line
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


	has(i:INTEGER) : BOOLEAN
	do
		Result:=hasRek (i, root)
	end

	hasRek(i:INTEGER; r:detachable NODE) : BOOLEAN
	Local
		found : BOOLEAN
	do
		found := FALSE
		if r /= Void then
			if i = r.getvalue then
				found:=TRUE
			end
			if i > r.getvalue and r.getright /= Void then
				Result :=hasRek (i, r.getright)
			else if i < r.getvalue and r.getleft /= Void then
				Result :=hasRek (i, r.getleft)
				end
			end
		end
		Result:=found
	end

	del(value : INTEGER) : BOOLEAN
 	do
 		Result := delRec(root,value,Void,FALSE)
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
			if s = k.getvalue then
				if k.getleft = Void and k.getright = Void then
					if father = Void then
						root := Void
					else
						hangUnderFather(father,amleftfromfather,Void)
					end
				 	Result:= TRUE
				 	done := TRUE
				end
				--k hat nur rechts einen Unter-Knoten -> umbiegen
				if k.getleft = Void and k.getright /= Void and not done then
					if father = Void then
						root := k.getright
					else
						hangUnderFather(father,amleftfromfather,k.getright)
					end
					Result:= TRUE
					done := TRUE
				end
				--k hat nur links einen Unter-Knoten -> umbiegen
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

			if s < k.getvalue and not done then
				 if k.getleft = Void then
				 	Result:= FALSE
				 	done := TRUE
				 else
				 	Result := delrec (k.getleft, s, k, TRUE)
				 	done := TRUE
				 end
			end
			if s > k.getvalue and not done then
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

	hangUnderFather(father : detachable NODE; left : BOOLEAN; k : detachable NODE)
	do
		if father /= Void then
			if left then
				father.setleft (k)
			else
				father.setright (k)
			end
		end
	end

	getSmallest (k : detachable NODE) :detachable NODE
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

