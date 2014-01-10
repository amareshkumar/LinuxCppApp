#pragma once 
#ifndef INSTRUMENT_H
#define INSTRUMENT_H

//: C15:Instrument2.cpp
// Inheritance & upcasting

#include <iostream>
using namespace std;
enum note { middleC, Csharp, Eflat }; //Etc.


class Instrument {
public:
	virtual char* what() const {
		return "Instrument";
	}
	// Assume this will modify the object:
	virtual void adjust(int) {}
	
	virtual void play(note) const {
		cout << "Instrument::play" << endl;
	}
	//virtual void display_info() = 0;
	virtual void display_info() const{}
};


//void Instrument::display_info() const {
//	cout << "size of \"Instrument\" object is: " << sizeof(Instrument) << endl;
//}

// Wind objects are Instruments
// because they have the same interface:
class Wind : public Instrument {
public:
	// Redefine interface function:
	void play(note) const {
		cout << "Wind::play" << endl;
	}
	void display_info() const{
		cout << "Size of \"Wind\" object is: " << sizeof (Wind) << endl;
	}
};

void tune(Instrument &);

#endif  //end of INSTRUMENT_H