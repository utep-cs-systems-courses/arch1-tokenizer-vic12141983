OBJS= Uimain.o tokenizer.o history.o

CFLAGS= -g -O3

token: $(OBJS)
	cc -o token $(CFLAGS) $(OBJS)

Uimain.o: tokenizer.h history.h

tokenizer.o: tokenizer.h

history.o: history.h

clean:
	rm -f *.o token
run:
	./token
