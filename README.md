cmake demo
===============

This is a demonstration of using CMake to build a C++ program that calls both external and internal libraries.

The program's output is pointless --- this is only an exercise in cross-platform compilation and automated resolving of dependencies.

William Wu (william.wu@themathpath.com), 2013 March 10


Directions
---------------
$ mkdir build

$ cd build

$ cmake ..

$ make

$ src/CMAKEDEMO 

	*** MATH DEMO ***
	The sine of 0.314159 is 0.309017

	*** CUSTOM LIBRARY DEMO: LAMENT ***
	Overslept
	So tired
	If late
	Get fired
	Why bother?
	Why the pain?
	Just go home
	Do it again.
	-- Norman Colm, 'The Worker's Lament'

	*** CUSTOM LIBRARY DEMO: PI ***
	Approximation to PI: 3.15625