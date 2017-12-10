CXX = g++
CXXFLAGS += -std=c++11
#LDFLAGS += 
objects = main.o
target = cpp

$(target): $(objects)
	$(CXX) -o $@ $^

.PHONY: clean
clean:
	rm -rf *.o $(target)