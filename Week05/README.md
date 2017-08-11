Week 05: High Performance Computing
==================

This week, we will delve into parallel computing.  To do so, we will focus
 on the shared memory programming model using OpenMP (Open Multi-Processing).
  OpenMP is an API that supports shared memory multiprocessing programming in
 C, C++, and Fortran. Learn more at http://www.openmp.org/.

For the hands-on session, we have provided several assignments in C++ found in
GT-IDEaS/SkillsWorkshop2017/Week05/assignments/.  We attempt to decouple the
 difficulty of simultaneously learning C++ and OpenMP by providing nearly
 completed codes and only requiring simple tasks involving OpenMP.  These
 assignments are tailored to touch upon some fundamental concepts and difficulties
 that OpenMP programmers deal with.  These topics are generally summarized as:

1.  Assignment 1 - Hello World
2.  Assignment 2 - Speedups
3.  Assignment 3 - Workloads and Scheduling
4.  Assignment 4 - Resource Sharing

Before we begin, some initial setup is required.  We need to ensure everyone
 has a c++ compiler.  Since compatability between Mac OS and OpenMP is non-trivial,
 we have designed a work-around.  First, execute the following from the 
 command line:

```
conda create -n ideas gcc-5-mp -c psi4
```

This will create a python envoriment using conda, which you should have installed in Week 1.
  Importantly, this environment contains a GNU g++ compiler. To activate the environment,
 execute the following:

```
source activate ideas
```

Now, everyone should have access to the g++ compiler.  Go into the the `makefile` and
 edit the `COMPILER` option accordingly.  You should have:

```
COMPILER=g++
```

If you already had access to Intel compilers and want to you `icpc`, feel free.  The three
 options in `makefile` shuld be completed as:

```
COMPILER=g++      
VERSION=-std=gnu++11
OPENMP=-fopenmp   
```
OR
```
COMPILER=icpc     
VERSION=-std=c++11
OPENMP=-qopenmp   
```

Now that the makefile is configured correclty, you can execute the following on the command line:

`make a1`

Doing so compiles the `assignment1.cc` file.  To run the executable, execute:

`./a1`

The same process is done for all other assignments.
Now, we will discuss each assignment and how to complete it.  


1.  Assignment 1 is an introductory program containing "Hello World" for OpenMP.  The program is already
 completed.  Compile and run the executable.  Notice the outputs.  Is there a particular order?  Try to
 change `assignment1.cc` so that only one master thread prints to the console.

2.  Assignment 2 contains a basic for loop which can be parallelized.  First, compile and execute the program.
  Notice the outputs.  Now, edit `assignment2.cc` so the loop is parallelized.  This should only require one
 line of code.  Recompile and run the program.  How well is the loop parallelized?  Now, tweak the `ITERATIONS`
 and `WORK_TIME` variables at the top of `assignment2.cc` and re-evaluate the performance.  

3.  Assignment 3 is nearly identical to Assignment 2, but the work of the for loop is severely non-uniform.
  First, go into `assignment3.cc` and try to understand how the work is changing for each iteration of the loop.
  After, parallelize the loop, compile, and run the program.  How does the output compare to what was found previously in Assignment 2?
  The resulting speedups should be worse!
  Add a `schedule()` clause to the loop and see if you can acquire better speedups.

4.  Assignment 4 contains a parallel prefix sum evaluator.  First, compile and run the program.  Evaluate the outputs.
  The speedups should get worse as more threads are used.  After you understand why this is, try edit the code and fix the issue.
  This may take a few lines of code.  After, recompile and run the program.  You should be able to acquire some good speedups.
  Depending on your machine, you may have to crank up the `N` variable quite a bit.  Unfortunately, after about 10,000 you will likely get
 an integer overflow.  Programming in C++ does not come with the luxury of unlimited precision, so we are limited to what can be 
 stored in an `unsigned long long int` type.  You will probably have to go well past this limit to start to see good speedups.
  If necessary, prevent overflow by changing the summation `sum == i` to either `sum += 1` or `sum += 0`.   

