cc=g++
exe=main
obj=main.o tree.o

$(exe):$(obj)
	$(cc) -o $(exe) $(obj)
main.o:main.cpp
	$(cc) -c main.cpp
tree.o.o:tree.cpp
	$(cc) -c tree.cpp
clean:
	rm -rf *.o main
