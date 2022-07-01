default: hope

hope: LinkedList.h mainTest.o
	g++ LinkedList.h mainTest.o -std=c++11 -o hope
mainTest.o: mainTest.cpp
	g++ -std=c++11 mainTest.cpp  -c 
clean: 
	rm -rf *.o hope
