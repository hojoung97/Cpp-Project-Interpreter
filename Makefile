interpreter: obj
	g++ *.o -o interpreter

obj: *.cpp
	g++ -c *.cpp
