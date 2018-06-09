#################################################################################
## Program Name: makefile
## Author: Anne Harris
## Date: 5/10/2017
## Description: a file that uses the source, header and object files to compile 
## then cleans the executable file
################################################################################

CXX = g++

OBJS = Project4Main.o menu.o tournament.o creature.o vampire.o barbarian.o bluemen.o medusa.o harrypotter.o

SRCS = Project4Main.cpp menu.cpp tournament.cpp creature.cpp vampire.cpp barbarian.cpp bluemen.cpp medusa.cpp harrypotter.cpp

HEADERS = menu.hpp tournament.hpp creature.hpp vampire.hpp barbarian.hpp bluemen.hpp medusa.hpp harrypotter.hpp

Prj4: ${OBJS}
	${CXX} ${OBJS} -o Prj4

%.o : %.c
	${CXX} -c -o $@ $^

.PHONY: clean

clean:
	rm Prj4 ${OBJS}
