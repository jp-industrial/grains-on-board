#include "c:\Users\james\Desktop\std_lib_facilities.h"

int main()

{
	//program that calculates number of grains on chessboard.
 
	double grains_current = 1; //grains on current square
	double total_grains = 1;
	
	for (int current_square = 1; current_square < 65; ++current_square) { //for all squares 1-64:
		cout << "Square " << current_square << " contains " << grains_current << " grains, totalling " << total_grains << " grains.\n";
		grains_current *= 2; //mutiply by two, starting from one.
		total_grains += grains_current; //add this value to the total.
	}

}