CC = gcc
CFLAGS = -g
TARGET = phone
OBJS = phone.o phone_fmt.o

$(TARGET): $(OBJS)
	$(CC) -o $(TARGET) $(OBJS)
phone_fmt.o: phone_fmt.c phone_fmt.h
	$(CC) $(CFLAGS) -c phone_fmt.c
phone.o: phone.c
	$(CC) $(CFLAGS) -c phone.c
clean:
	/bin/rm -f *.o $(TARGET) $(TARGET2)
