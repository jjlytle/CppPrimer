CFLAGS=-std=c++11

OBJ=ex2.9

all:
	g++ ${CFLAGS} ${OBJ}.cpp -o ${OBJ}

clean:
	rm -f ${OBJ}