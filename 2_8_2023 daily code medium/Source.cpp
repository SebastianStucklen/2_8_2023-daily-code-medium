#include<iostream>
using namespace std;
//function declaration
// type name parameter 1 parameter 2
char input1;
char input2;
float ReactMult(char input1, char input2);
int main() {
	while (input1 != 'q' && input2 != 'q') {
		cout << "(m)elt or (v)aporize" << endl;
		cin >> input1;
		cout << "(p)yro, (c)yro, or (h)ydro" << endl;
		cin >> input2;
		cout << ReactMult(input1, input2) << endl;
	}
	cout << "quitting" << endl;
}
// Write a function that outputs the reaction multiplier in Genshin Impact.
//
// Call the function "ReactMult".It returns a floatand takes two character parameters.
// The first parameter will either be 'm' for melt or 'v' for vaporize.
// The second will be what's triggered: (p)yro, (c)yro, or (h)ydro.
// 
// In the definition, first check that the proper parameters have been passed.
// If you don't get an 'm' or 'v' for the first one, or a p/c/h for the second, print an error message and return -1. 
//
// If the parameters check out, return the following :
//
// 2.0 for melt if pyro triggers
// 1.5 for melt if cyro triggers
// 2.0 for vaporize if hydro triggers
// 1.5 for vaporize if pyro triggers
// Create a loop inside main that continuously asks the user for the parameters neededand call the function, passing it the user's input to test. 
// The loop should quit if either parameter is 'q'.
// function defenition
float ReactMult(char input1, char input2) {
	if (input1 != 'm' && input1 != 'v') {
		cout << "wrong parameters for input1" << endl;
		return -1;
	}
	//another if statement checking input2
	//			melt and pyro
	if (input1 == 'm' && input2 == 'p') {
		cout << "returning 2.0" << endl;
		return 2.0;
	}
	//			melt and cryo
	if (input1 == 'm' && input2 == 'c') {
		cout << "returning 1.5" << endl;
		return 1.5;
	}
	//			vaporize and hydro
	if (input1 == 'v' && input2 == 'h') {
		cout << "returning 2.0" << endl;
		return 2.0;
	}
	//			vaporize and pyro
	if (input1 == 'v' && input2 == 'p') {
		cout << "returning 1.5" << endl;
		return 1.5;
	}
}