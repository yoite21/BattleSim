CC = g++
OBJS = main.o Character.o Simulator.o
TARGET = BattleSim

CPPFLAGS = -std=c++11 -Wall

.SUFFIXES : .cpp .o

all : $(TARGET)

$(TARGET) : $(OBJS)
	$(CC) -o $@ $(OBJS)

clean :
	rm -f $(OBJS) $(TARGET)

run : all
	./$(TARGET)
