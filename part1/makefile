CC = gcc
CFLAGS = -g
TARGET = deater
OBJS = main.o func.o

$(TARGET): $(OBJS)
	$(CC) -o $(TARGET) $(OBJS)
func.o: func.c func.h
	$(CC) $(CFLAGS) -c func.c
main.o: main.c
	$(CC) $(CFLAGS) -c main.c
clean:
	/bin/rm -f *.o $(TARGET) $(TARGET2)
