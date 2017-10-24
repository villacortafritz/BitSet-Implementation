#ifndef BITSET_H
#define BITSET_H
#define MAX 10
#include <iostream>

using namespace std;

class BitSet {
	private:
		bool set[MAX];
	public: 
		BitSet(); 
		void add(int x);	
		void display() const;
		BitSet operator |(const BitSet s2)const; //union
		BitSet operator &(const BitSet s2)const; //intersection
		BitSet operator -(const BitSet s2)const; //difference
		bool isEmpty();
		int cardinality();
		bool disjoint(BitSet s2);
		bool subset(BitSet s2);
		bool operator ==(const BitSet s2); //isEqual
		bool operator !=(const BitSet s2); //notEqual
		friend ostream& operator <<(ostream &outs, const BitSet &s);
};

#endif

