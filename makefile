CC= g++
CFLAGS= -std=c++11 -ggdb -Wall

main: Heap.h.gch main.cpp
	$(CC) $(CFLAGS) -o main main.cpp
Heap.h.gch: Heap.h
	$(CC) $(CFLAGS) Heap.h
clean:
	rm -f main Heap.h.gch
valgrind:
	valgrind --tool=memcheck --leak-check=yes --show-reachable=yes --track-origins=yes ./main
