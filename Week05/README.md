Week 05: High Performance Computing
==================

This week, we will delve into parallel computing.  To do so, we will focus
 on the shared memory programming model using OpenMP (Open Multi-Processing).
  OpenMP is an API that supports shared memory multiprocessing programming in
 C, C++, and Fortan. Learn more at http://www.openmp.org/.

For the hands-on session, we have provided several assignments in C++ found in
GT-IDEaS/SkillsWorkshop2017/Week05/assignments/.  We attempt to decouple the
 difficulty of learning C++ and OpenMP simultaneously by providing nearly
 completed codes and only requiring simple tasks involving OpenMP.  These
 assignments are tailored to touch upon some fundamental concepts and difficulties
 that OpenMP programmers deal with.  These topics are generally summarized as:

1.  Assignment 1 - Hello World
2.  Assignment 2 - Speedups
3.  Assignment 3 - Workloads and Scheduling
4.  Assignment 4 - Resource Sharing

Before we begin, some initial setup is required.  We need to ensure everyone
 has a c++ compiler.  Since compatability between Mac OS and OpenMP is non-trivial,
 we have designed the following work-around. First, execute the following from the 
 command line:

```
conda create -n ideas gcc-5-mp -c psi4
```

This will create a python envoriment using conda, which you installed in Week 1.
  Importantly, this environment contains a gnu g++ compiler. To activate the environment,
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


1.  Assignment 1 in an introductory program containing "Hello World" for OpenMP.  The program is already
 completed.  Compile and run the executable.  Notice the outputs.  Is there a particular order?  Try to
 change `assignment1.cc` so that only one master thread prints to the console.

 




