CXX=g++
CXXFLAGS=-g -ansi -pedantic -Wall -W -Wshadow -Wwrite-strings -no-pie -pg

calc: calc.cc libcalcs.a
	$(CXX) $(CXXFLAGS) -L. -o calc calc.cc -lcalcs

libcalcs.a: add.o subtract.o multiply.o divide.o
	$(AR) cr libcalcs.a add.o subtract.o multiply.o divide.o

add.o: add.cc

subtract.o: subtract.cc

multiply.o: multiply.cc

divide.o: divide.cc

dist: calc
	mv *.a ../lib
	mv calc ../bin
	$(RM) *.o

.PHONY: clean

clean:
	$(RM) *.o *.core *.out *.orig *.a calc

distclean:
	$(RM) ../lib/*.o ../lib/*.a ../bin/calc


