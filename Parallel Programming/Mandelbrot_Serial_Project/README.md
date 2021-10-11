Mandalbrot_Serial_Project
-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

The Mandelbrot set (/ˈmændəlbrɒt/) is the set of complex numbers {\displaystyle c}c for which the function {\displaystyle f_{c}(z)=z^{2}+c}{\displaystyle f_{c}(z)=z^{2}+c} does not diverge when iterated from {\displaystyle z=0}z=0, i.e., for which the sequence {\displaystyle f_{c}(0)}{\displaystyle f_{c}(0)}, {\displaystyle f_{c}(f_{c}(0))}{\displaystyle f_{c}(f_{c}(0))}, etc., remains bounded in absolute value. Its definition is credited to Adrien Douady who named it in tribute to the mathematician Benoit Mandelbrot, a pioneer of fractal geometry.[1]


Zooming into the Mandelbrot set
Images of the Mandelbrot set exhibit an elaborate and infinitely complicated boundary that reveals progressively ever-finer recursive detail at increasing magnifications, making the boundary of the Mandelbrot set a fractal curve. The "style" of this repeating detail depends on the region of the set being examined. Mandelbrot set images may be created by sampling the complex numbers and testing, for each sample point {\displaystyle c,}c, whether the sequence {\displaystyle f_{c}(0),f_{c}(f_{c}(0)),\dotsc }{\displaystyle f_{c}(0),f_{c}(f_{c}(0)),\dotsc } goes to infinity. Treating the real and imaginary parts of {\displaystyle c}c as image coordinates on the complex plane, pixels may then be coloured according to how soon the sequence {\displaystyle |f_{c}(0)|,|f_{c}(f_{c}(0))|,\dotsc }{\displaystyle |f_{c}(0)|,|f_{c}(f_{c}(0))|,\dotsc } crosses an arbitrarily chosen threshold (the threshold has to be at least 2, but is otherwise arbitrary). If {\displaystyle c}c is held constant and the initial value of {\displaystyle z}z is varied instead, one obtains the corresponding Julia set for the point {\displaystyle c}c.

The Mandelbrot set has become popular outside mathematics both for its aesthetic appeal and as an example of a complex structure arising from the application of simple rules. It is one of the best-known examples of mathematical visualization, mathematical beauty, and motif.

During the academic year of 2020-2021 we were tasked as university student, to turn the program with the help of lodepng.c, lodepng.h & timer.h, the program from serial programming to parallel programming. This is my solution to the problem


Serial compilation instructions: $ gcc mandelbrot_serial.c lodepng.c ‐O3 ‐std=gnu99 ‐lm ‐o mandelbrot_serial
$ ./mandelbrot_serial
