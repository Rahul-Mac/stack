CC=gcc	
TARGET=main

compile:
	$(CC) -o $(TARGET) main.c Stack.c

run:
	./$(TARGET)

