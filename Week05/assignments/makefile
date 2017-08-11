
# Edit these according to your environment
COMPILER=icpc      # or g++
VERSION=-std=c++11 # or -std=gnu++11
OPENMP=-qopenmp    # or -fopenmp

a1: assignment1.cc timer.cc 
	$(COMPILER) $(VERSION) $(OPENMP) assignment1.cc timer.cc -o a1

a2: assignment2.cc timer.cc 
	$(COMPILER) $(VERSION) $(OPENMP) assignment2.cc timer.cc -o a2

a3: assignment3.cc timer.cc 
	$(COMPILER) $(VERSION) $(OPENMP) assignment3.cc timer.cc -o a3

a4: assignment4.cc timer.cc
	$(COMPILER) $(VERSION) $(OPENMP) assignment4.cc timer.cc -o a4 

clean:
	rm -f *.o a1 a2 a3 a4

.PHONY: clean
