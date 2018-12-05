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
   void convert_it(){
     converted_value=initial_value/0.6;
   }
};
class meters_yards :public convert_base{
public:
  meters_yards(double passed_value) : convert_base(passed_value) { }
    void convert_it(){
    converted_value=initial_value*39.0/36.0;
}
};
class yards_meters : public convert_base{
public:
  yards_meters(double passed_value) : convert_base(passed_value) { }
  void convert_it() {
    converted_value=initial_value*36.0/39.0;
  }
};



  int main() {


kilos_miles kilos1(100.0);
kilos1.convert_it();
cout << endl;
cout << endl << "Distance in kilometers is: " << kilos1.get_initial();
cout << endl << "Distance in miles is: " << kilos1.get_converted();
cout << endl;

miles_kilos miles1(100.0);
miles1.convert_it();
cout << endl;
cout << endl << "Distance in miles is: " << miles1.get_initial();
cout << endl << "Distance in kilometers is: " << miles1.get_converted();
cout << endl;

yards_meters yards(23);
yards.convert_it();
cout << endl;
cout << endl << "Distance in yards is: " << yards.get_initial();
cout << endl << "Distance in meters is: " << yards.get_converted();
cout << endl;


meters_yards meters(100.0);
meters.convert_it();
cout << endl;
cout << endl << "Distance in meters is: " << meters.get_initial();
cout << endl << "Distance in yards is: " << meters.get_converted();
cout << endl;


return 0;
}
