CXX=g++
CXXFLAGS:=-I../../include
CXXFLAGS+=$(shell pkg-config --cflags opencv)

LDFLAGS+=-L../../libs/linux-x86_64/lib_dummy

LIBS:=-lstface_api -lpthread
LIBS+=$(shell pkg-config --libs opencv)

SRCS:=$(shell echo *.cpp)
TARGETS:=$(patsubst %.cpp, test_%, $(SRCS))

all: $(TARGETS)

test_%: %.o
	$(CXX) $(LDFLAGS) -o $@ $^ $(LIBS)

.PHONY: clean
clean:
	rm -f *.o test_*
