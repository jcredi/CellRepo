#ifndef _CELL
#define _CELL

#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

class Cell
{
   	private:
      	double speed;
      	double angle;
      	
	public:
	  	std::vector<double> x;
	  	std::vector<double> y;
	  	
	  	// constructor & destructor
	  	Cell();
	  	~Cell();
};

#endif
