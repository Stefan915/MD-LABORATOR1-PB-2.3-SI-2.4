TARGET=2_3
EXE_DIR=exe
SOURCE_DIR=Source
O_FILE = OBJ
H_FILE = HEADER
C_FILE = CODE
MAIN=2_3
OBJ=$(SOURCE_DIR)/$(O_FILE)/integrale.o $(SOURCE_DIR)/$(O_FILE)/io.o $(SOURCE_DIR)/$(O_FILE)/menu.o $(SOURCE_DIR)/$(O_FILE)/functii.o

run: $(EXE_DIR)/$(TARGET)
	clear
	./$(EXE_DIR)/$(TARGET)

$(EXE_DIR)/$(TARGET): $(OBJ) $(SOURCE_DIR)/$(O_FILE)/$(MAIN).o
	clang -Wall -lm $(OBJ) $(SOURCE_DIR)/$(O_FILE)/$(MAIN).o -o $(EXE_DIR)/$(TARGET)

$(SOURCE_DIR)/$(O_FILE)/$(MAIN).o: $(SOURCE_DIR)/$(C_FILE)/$(MAIN).c
	clang -c -Wall $(SOURCE_DIR)/$(C_FILE)/$(MAIN).c -o $(SOURCE_DIR)/$(O_FILE)/$(MAIN).o

$(SOURCE_DIR)/$(O_FILE)/integrale.o: $(SOURCE_DIR)/$(C_FILE)/integrale.c
	clang -c -Wall $(SOURCE_DIR)/$(C_FILE)/integrale.c -o $(SOURCE_DIR)/$(O_FILE)/integrale.o

$(SOURCE_DIR)/$(O_FILE)/io.o: $(SOURCE_DIR)/$(C_FILE)/io.c
	clang -c -Wall $(SOURCE_DIR)/$(C_FILE)/io.c -o $(SOURCE_DIR)/$(O_FILE)/io.o

$(SOURCE_DIR)/$(O_FILE)/menu.o: $(SOURCE_DIR)/$(C_FILE)/menu.c
	clang -c -Wall $(SOURCE_DIR)/$(C_FILE)/menu.c -o $(SOURCE_DIR)/$(O_FILE)/menu.o

$(SOURCE_DIR)/$(O_FILE)/functii.o: $(SOURCE_DIR)/$(C_FILE)/functii.c
	clang -c -Wall $(SOURCE_DIR)/$(C_FILE)/functii.c -o $(SOURCE_DIR)/$(O_FILE)/functii.o

.PHONY: cleanO cleanExe cleanAll
cleanO:
	rm $(SOURCE_DIR)/$(O_FILE)/*.o

cleanExe:
	rm $(EXE_DIR)/*

cleanAll:
	rm $(EXE_DIR)/*
	rm $(SOURCE_DIR)/$(O_FILE)/*.o
