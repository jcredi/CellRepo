/*------------------------------------------------
   Bla bla bla
   Author: Jacopo Credi
   University of Warwick, May 2015
-------------------------------------------------*/

// libraries //
#include <iostream>
#include <vector>
#include <random>
#include <chrono>

// headers //
#include "Cell.h"
//#include "mtwist.h"

using namespace std;

/*-----------------------------------------------*/

int main () {

	Cell johnny;

    std::random_device rd;
	std::mt19937 gen(rd());
	std::uniform_real_distribution<double> urand(0, 1);
 
    std::cout << urand(gen) << " is a random number" << endl;
    
    return 0;
}




//for () {
//	// code
//}
//cout << "To exit, press 'm'" << endl;
