CC = g++
CFLAGS = -std=c++17 -Wall
SRCDIR = src

objects = question_1 question_2 question_3 question_4 question_5 question_6 question_7 question_8 question_9

all: $(objects)

$(objects): %: $(SRCDIR)/%.cpp
	$(CC) $(CFLAGS) -o $@ $<

clean:
	rm $(objects)