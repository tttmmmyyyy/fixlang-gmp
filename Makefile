all : libgmpfix.so libgmpfix.a

libgmpfix.a : main.o
	ar rcs libgmpfix.a main.o

libgmpfix.so : main.o
	g++ -std=c++11 -shared -o libgmpfix.so main.o -lgmp

main.o : main.cpp
	gcc -std=c++11 -fPIC -c -o main.o main.cpp

clean : 
	rm -f *.o

install : libgmpfix.so
	@echo "Installing libgmpfix.so to: /usr/local/lib..."
	cp libgmpfix.so /usr/local/lib
