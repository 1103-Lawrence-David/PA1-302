manage: Book.o Laptop.o main.o Resource.o StudyRoom.o
	g++ -o manage Book.o Laptop.o main.o Resource.o StudyRoom.o

Book.o: Book.h Book.cpp Resource.h
	g++ -c Book.cpp

Laptop.o: Laptop.h Laptop.cpp Resource.h
	g++ -c Laptop.cpp

main.o: Book.h Inventory.h Laptop.h StudyRoom.h main.cpp
	g++ -c main.cpp

Resource.o: Resource.h Resource.cpp
	g++ -c Resource.cpp

StudyRoom.o: StudyRoom.h StudyRoom.cpp Resource.h
	g++ -c StudyRoom.cpp

make clean:
	rm *.o manage