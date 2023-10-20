SRC = main.c manipulating_3Dvectors.c
OBJS = main.o manipulating_3Dvectors.o

test: $(OBJS)
	gcc -o $@ $^

%.o: .c module.h
	gcc -c $^ -o $@

.depend: $(SRC)
	gcc -MM $^ -o $@

clean:
	rm -f $(OBJS) test

include .depend
.PHONY: clean