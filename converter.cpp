#include <iostream>

using namespace std;

class convert_base {

protected:
   double initial_value;
   double converted_value;

public:
   convert_base(double passed_value) {
       initial_value = passed_value;
       }

   double get_initial() {
       return initial_value;
       }

   double get_converted() {
       return converted_value;
       }

   virtual void convert_it() = 0;
	};


class kilos_miles : public convert_base{

public:
   kilos_miles(double passed_value) : convert_base(passed_value) { }

   void convert_it() {
       converted_value = initial_value * 0.6;
       }

};

class miles_kilos : public convert_base {

public:
   miles_kilos(double passed_value) : convert_base(passed_value) { }

};
class meters_yards{


};


class Name:	yards_meters{



  int main() {


kilos_miles kilos1(100.0);
kilos1.convert_it();

cout << endl;
cout << endl << "Distance in kilometers is: " << kilos1.get_initial();
cout << endl << "Distance in miles is: " << kilos1.get_converted();
cout << endl;

/* ADD CODE HERE TO:
	1. CREATE A MILES TO KILOS OBJECT, SPECIFYING AN INTIAL VALUE OF 60.
	2. CALL THE VIRTUAL FUNCTION FOR THAT OBJECT
	3. PRINT OUT THE INITIAL AND CONVERTED VALUES.
NOTE: Refer to the preceding code for kilos to miles for an example.  */

/* Complete the coding for this step BEFORE YOU PROCEED FURTHER. */







/* ADD CODE HERE TO:
	1. USE THE YARDS TO METERS ROUTINE - SPECIFY AN INITIAL VALUE OF 4.
	2. PRINT OUT THE INITIAL AND CONVERTED VALUES.           */

/* Complete the coding for this step BEFORE YOU PROCEED FURTHER. */




/*
	3. USE THE METERS TO YARDS ROUTINE - SPECIFY AN INITIAL VALUE OF 4.
	4. PRINT OUT THE INITIAL AND CONVERTED VALUES.
   See previous code for examples.
*/

return(0);
} // end main
