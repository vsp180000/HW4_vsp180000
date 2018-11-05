EXEC:= myprog1
CC:= gcc
CFLAGS:= -O3

$(EXEC): myprog1.o
	$(CC) myprog1.c -o $@
myprog1.o: myprog1.c

.PHONY: clean
clean: 
	$(RM) $(EXEC)
	$(RM) *.o

