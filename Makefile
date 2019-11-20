CXX = g++-9
CXXFLAGS = -std=c++17


all:
	${CXX} demoBug.cpp -o demoBug ${CXXFLAGS}

clean:
	rm demoBug 