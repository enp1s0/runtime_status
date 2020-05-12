CXX=g++
CXXFLAGS=-std=c++11 -I../
TARGETS=git_status.test process_status.test

all: $(TARGETS)

git_status.test : git_status.cpp
	$(CXX) $< -o $@ $(CXXFLAGS) -DRS_GIT_BRANCH="\"$(shell git branch | grep '\*' | sed -e 's/.* //')\"" -DRS_GIT_COMMIT="\"$(shell git rev-parse HEAD)\""

process_status.test : process_status.cpp
	$(CXX) $< -o $@ $(CXXFLAGS)