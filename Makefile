CXX = clang++
CXXFLAGS = -std=c++14 -Wall

TARGET = project1
SOURCES = main.cpp converter.cpp alu.cpp

$(TARGET): $(SOURCES)
	$(CXX) $(CXXFLAGS) $(SOURCES) -o $(TARGET)

clean:
	rm -f $(TARGET)