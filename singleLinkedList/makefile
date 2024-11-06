CC = gcc
CFLAGS = -Wall -g
RM = rm -f

.DEFAULT_GOAL = singleLinkedList
SRCS = $(wildcard *.c)
OBJS = $(SRCS:.c=.o)


singleLinkedList: $(OBJS)
	$(CC) $(CFLAGS) $^ -o $@

# Rule to compile .c files to .o files
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Clean up build artifacts
.PHONY: clean
clean:
	$(RM) singleLinkedList $(OBJS)

