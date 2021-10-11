Heat_Equation_Project
-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

During the academic year of 2020-2021, we were tasked to turn a serial program that shows the heat into a computer to parallel using OpenMP library. This is my solution to the problem

$ gcc heat_serial.c ‐O3 ‐o heat_serial
$ heat_serial.exe 0.0001 result.out
20 April 2021 02:24:02 PM
HEATED_PLATE
C version
A program to solve for the steady state temperature distribution
over a rectangular plate.
Spatial grid of 500 by 500 points.
The iteration will be repeated until the change is <= 0.000010
The steady state solution will be written to 'results.out'.
Iteration Change
1 18.737475
2 9.368737
4 4.098823
8 2.289577
16 1.136604
32 0.568201
64 0.282805
128 0.141777
256 0.070808
512 0.035427
1024 0.017707
1
2048 0.008856
4096 0.004428
8192 0.002210
16384 0.001043
32768 0.000371
65536 0.000064
102697 0.000010
Error tolerance achieved.
CPU time = 35.244000
Solution written to the output file 'results.out'
HEATED_PLATE:
Normal end of execution.

