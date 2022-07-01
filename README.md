# Cplusplus-ListsContinued
STL Lists and Linked Lists

NOTE** Right now the mergeLists function inside test.cpp is set to void. The code to dynamically allocate the object has been commented out in-case function needs to return a value.

Problem 1: File: mainDisplay.cpp 
Write the function displayAtthat receives the two STLlists; vList and pList. The functionshould display the  elements  in vListthat  are  in  positions  specified  by pList.  For example, if pList has  the  elements  (2, 5, 6, 8)  then  the  elements  in  positions 2, 5, 6,  and 8i n vList are displayed. Use only the public STL container operations.

Problem 2: File: mainTest.cpp

Using your completed LinkedList template class, developed in homework and lab, write a program that  implements  andproperlytests  the  following  functions(these  functions  are  not  member functions of the class, you will write these function inmainTest.cpp)

1.Function compare that receives two LinkedList objects and compares the data in the nodes of the two lists to check if they are the same. The lists are equal only if they have the same number of nodes and corresponding nodes contain the same data. The function returns true or false to main.

2.Function mergeLists that  receives two  LinkedList  objects.  The  function  merges the sorted lists into a new list then returns the new list object back to main. Display the returned list.

