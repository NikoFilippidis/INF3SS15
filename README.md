# INF3SS15

## C-Sharp Mathematical operation parser 
This parser can detect weather an expression is mathematically correct and can be calculated or not. 
The following EBNF which is matching mathematical snytax rules was used to implemented the parser.


*Expression = Number | Operator | '(' Expression Operator Expression ')'*

*Operator   = '+' | '-' | ''*' | '/'

*Number 	   = '1' | '2' | '3' | '4' | '5' | '6' | '7' | '8'| '9'* 


The programm is using as input a list of possible expressions and gives for each expression a boolean response.

## Java & Python Producer-Consumer-Problem
Producers read the values from the mailing list into the program storage.
Consumers read the values from the program storage and count the amount of emails which are ending with '.edu'.
Producers and consumers are running all in sepparated threads.To avoid problems such as Dirty-Read or Lost-Update the principle of a mutex is used.

## Eiffel Binary Tree 
This binary tree can insert elements, check if a specific element is existing and delete elements recursively.

## C++ Filter using Lamda Expressions
This program generates random strings and filters the strings for words and float numbers. 
