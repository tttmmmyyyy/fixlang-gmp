all : libgmpfix.so

libgmpfix.so : main.o
	g++ -std=c++11 -shared -o libgmpfix.so main.o

main.o : main.cpp
	gcc -std=c++11 -c -o main.o main.cpp

clean : 
	rm -f *.o

install : libgmpfix.so
	cp libgmpfix.so /usr/local/lib
