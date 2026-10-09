application: Address.o Date.o main.o
	g++ Address.o Date.o main.o -o application

main.o: Address.h Date.h main.cpp
	g++ -c -g main.cpp

Address.o: Address.h Address.cpp
	g++ -c -g Address.cpp

Date.o: Date.h Date.cpp
	g++ -c -g Date.cpp

clean:
	rm *.o
	rm application

run: application
	./application