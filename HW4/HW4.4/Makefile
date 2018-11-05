EXEC:= myprog2
CC:= gcc
CFLAGS:= -O3

$(EXEC): myprog2.o
	$(CC) myprog2.c -o $@
myprog2.o: myprog2.c

.PHONY: clean
clean: 
	$(RM) $(EXEC)
	$(RM) *.o

