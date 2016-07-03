main:main.o Student.o Data.o
	g++ -o main main.o Student.o Data.o

Student.o:Student.cpp Student.h
	g++ -c Student.cpp

Data.o:Data.cpp Data.h
	g++ -c Data.cpp

main.o:main.cpp Student.h Data.h
	g++ -c main.cpp

clean:
	rm *.o
