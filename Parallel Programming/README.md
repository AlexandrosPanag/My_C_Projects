Parallel Programming Projects
-------------------------------


OpenMP is a set of compiler directives as well as an API for programs written in C, C++, or FORTRAN that provides support for parallel programming in shared-memory environments. OpenMP identifies parallel regions as blocks of code that may run in parallel. Application developers insert compiler directives into their code at parallel regions, and these directives instruct the OpenMP run-time library to execute the region in parallel.


SOURCE: https://www.tutorialspoint.com/what-is-openmp#:~:text=OpenMP%20is%20a%20set%20of%20compiler%20directives%20as,blocks%20of%20code%20that%20may%20run%20in%20parallel.

-------------
WHY WE’RE BUILDING PARALLEL SYSTEMS
-------------



Much of the tremendous increase in single processor performance has been driven
by the ever-increasing density of transistors—the electronic switches—on integrated
circuits. As the size of transistors decreases, their speed can be increased, and the
overall speed of the integrated circuit can be increased. However, as the speed of
transistors increases, their power consumption also increases. Most of this power is
dissipated as heat, and when an integrated circuit gets too hot, it becomes unreliable. In the first decade of the twenty-first century, air-cooled integrated circuits are
reaching the limits of their ability to dissipate heat [26].
Therefore, it is becoming impossible to continue to increase the speed of integrated circuits. However, the increase in transistor density can continue—at least for
a while. Also, given the potential of computing to improve our existence, there is an
almost moral imperative to continue to increase computational power. Finally, if the
integrated circuit industry doesn’t continue to bring out new and better products, it
will effectively cease to exist.
How then, can we exploit the continuing increase in transistor density? The
answer is parallelism. Rather than building ever-faster, more complex, monolithic
processors, the industry has decided to put multiple, relatively simple, complete
processors on a single chip. Such integrated circuits are called multicore processors, and core has become synonymous with central processing unit, or CPU. In
this setting a conventional processor with one CPU is often called a single-core
system.

-Peter Pancheco, An introduction to Parallel Programming (2011) 



Enchanced Toturial : https://youtu.be/nE-xN4Bf8XI




