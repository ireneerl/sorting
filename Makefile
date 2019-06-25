T2 = sorting

CC = g++
CFLAGS = -c -Wall -g -O0 -std=c++0x -Wunused-variable
#LDFLAGS = -lpthread
# LDFLAGS = -pthread

O2 = sorting_main.o insertion.o bubble.o merge.o qsort.o radix.o

#
# Rules for make
#
all: $(T2)

$(T2): $(O2)
	$(CC) -o $@ $^ $(LDFLAGS)

.cc.o:
	$(CC) $(CFLAGS) $<

clean:
	rm -f *~ *.o *.exe *.stackdump $(T2)
