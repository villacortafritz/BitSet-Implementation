#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include "BitSet.h"

using namespace std;

BitSet::BitSet() {
	for (int i=0; i < MAX; i++) {
		set[i] = false;
	}
}
void BitSet::add(int x) {
	if (x >=0 && x < MAX){
		set[x] = true;
	}		
}
void BitSet::display() const {
	cout << "{";
	for (int i=0 ; i < MAX; i++) {
		if (set[i]==true)
		 cout << i << " ";
	}
	cout << "}";
}
BitSet BitSet::operator |(const BitSet s2)const{  
	BitSet result;
	for (int i=0; i < MAX; i++) {
		result.set[i] = this->set[i] || s2.set[i];
	}
	return result;	
}
BitSet BitSet::operator &(const BitSet s2)const{  
	BitSet result;
	for (int i=0; i < MAX; i++) {
		result.set[i] = this->set[i] && s2.set[i];
	}
	return result;	
}

BitSet BitSet::operator -(const BitSet s2) const{
	BitSet result;
	for(int i=0; i < MAX; i++){
		if(this->set[i]==true && s2.set[i]==false){
			result.set[i] = true;
		}
	}
	return result;
}
bool BitSet::isEmpty(){
	bool flag = true;
	for(int i=0; i<MAX; i++){
		if(cardinality()==0){
			flag=false;
			break;
		}
	}
	return flag;
}
int BitSet::cardinality(){
	int x=0;
	for(int i=0; i<MAX; i++){
		if(set[i]==true){
			x++;
		}
	}
	return x;
}
bool BitSet::disjoint(BitSet s2){
	bool flag=true;
	for(int i=0; i<MAX; i++){
		if(this->set[i] && s2.set[i]){
			flag=false;
			break;
		}
	}
	return flag;
}
bool BitSet::operator ==(const BitSet s2){
	bool flag = true;
	for(int i=0; i<MAX; i++){
		if(this->set[i]!=s2.set[i]){
			flag=false;
			break;
		}
	}
	return flag;
}
bool BitSet::operator !=(const BitSet s2){
	bool flag = false;
	for(int i=0; i<MAX; i++){
		if(this->set[i]!=s2.set[i]){
			flag=true;
			break;
		}
	}
	return flag;
}
bool BitSet::subset(BitSet s2){
	bool flag = true;
	for(int i=0; i<MAX; i++){
		if(this->set[i]==false && s2.set[i] == true){
			flag=false;
			break;
		}
	}
	return flag;
}
ostream& operator <<(ostream &outs,const BitSet &s ){
	outs << "{";
	for (int i=0 ; i < MAX; i++) {
		if (s.set[i]==true)
		 outs << i << " ";
	}
	outs << "}";
	return outs;
}
