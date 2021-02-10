############################# Makefile ##########################

OBJS= battleship.o main.o
INTERM= battleship.c main.c
PROGRAM=./main
all: $(PROGRAM)
$(PROGRAM): $(OBJS)
	$(CC) -o $(PROGRAM) $(OBJS)
clean:
	rm -f $(PROGRAM) $(OBJS)
