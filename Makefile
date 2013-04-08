# =========================
#      Test Makefile
# =========================

TARGET := test

INC_DIR := .
OBJS := main.o

CC := gcc
CFLAGS := -Wall -I$(INC_DIR)

$(TARGET): $(OBJS)
	$(CC)  -o $@ $^ $(CFLAGS)

clean:
	rm -f *.o *~ core $(INC_DIR)/*~
