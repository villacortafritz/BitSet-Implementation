#include <stdio.h>
#include <stdlib.h>
#include "BitSet.h"
#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
	
	BitSet s1,s2,result;
	
	s1.add(1);
	s1.add(3);
	s1.add(4);
	s1.add(7);
	s1.add(8);
	cout << "s1 = ";
	s1.display();
	
	cout << "\nis s2 empty? " << s2.isEmpty();
	
	s2.add(2);
	s2.add(5);
	s2.add(6);
	s2.add(9);
	s2.add(1);
	cout << "\ns2 = ";
	s2.display();
	
	cout << "\nis s2 empty? " << s2.isEmpty();
	
	//result = s1.getUnion(s2);
	cout << "\nUnion: " << (s1|s2);
//	result.display();
	
	//result = s1.intersection(s2);
	cout << "\nIntersection: " << (s1&s2);
//	result.display();
	
	//result = s1.difference(s2);
	cout<< "\nDifference: " << (s1-s2);
	//result.display();
	
	cout << "\ns1 and s2 disjoint? " << s1.disjoint(s2);
	cout << "\ns1 and s2 equal? " << (s1 == s2);
	cout << "\nCardinality of s1:  " << s1.cardinality();
	cout << "\nCardinality of s2:  " << s2.cardinality();
	cout << "\ns2 subset of s1? :  " << s1.subset(s2);
	cout << "\ns1 subset of s2:  " << s1.subset(s2);
	
	return 0;
}

