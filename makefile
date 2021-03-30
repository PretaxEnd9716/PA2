all: filecnt_main filedisp_main

filedisp_main: filedisp.o
	g++ filedisp.o -o filedisp

filecnt_main: filecnt.o
	g++ filecnt.o -o filecnt

filecnt.o: filecnt.cpp
	g++ -c filecnt.cpp

filedisp.o: filedisp.cpp
	g++ -c filedisp.cpp

clean:
	rm *.o main
