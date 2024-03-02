TARGET=exec
OBJ=integrale.o main.o io.o menu.o

run: $(TARGET)
	clear
	./$(TARGET)

$(TARGET): $(OBJ)
	clang -Wall -lm $(OBJ) -o $@

main.o: main.c
	clang -c -Wall main.c

functii.o: integrale.c
	clang -c -Wall integrale.c

io.o: io.c
	clang -c -Wall io.c

menu.o: menu.c
	clang -c -Wall menu.c
.PHONY: clean
clean:
	rm *.o
	rm $(TARGET)



