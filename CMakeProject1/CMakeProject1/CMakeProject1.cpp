#include <iostream>
#include "CMakeProject1.hpp"
#define PI 3.14159265 


std::ostream& operator<<(std::ostream& ostrm, const RDec2D& z) {
	return ostrm << '{' << z.x << ';' << z.y << '}';

}

std::ostream& operator<<(std::ostream& ostrm, const RPol2D& z){
	return ostrm << '{' << z.len << ';' << z.degrees << '}';
}

RDec2D operator*(double count, const RDec2D& vect) {
	RDec2D res = vect;
	res.x *= count;
	res.y *= count;
	return res;
}

RDec2D operator+(const RDec2D& vect1, const RDec2D& vect2) {
	RDec2D result = { 0.0, 0.0 };
	result.x = vect1.x + vect2.x;
	result.y = vect1.y + vect2.y;
	return result;
}

RDec2D operator-(const RDec2D& vect1) {
	RDec2D result = vect1;
	result.x *= - 1;
	result.y *= (-1);
	return result;
}

RDec2D operator-(const RDec2D& vect1, const RDec2D& vect2) {
	RDec2D result = vect1 + (-vect2);
	return result;
}


RDec2D operator/(const RDec2D& vect1, double count) {
	RDec2D result = vect1;
	result.x = vect1.x / count;
	result.y = vect1.y / count;
	return result;
}


RDec2D ToDec(const RPol2D& vect){
	RDec2D res = { 0,0 };
	res.x = vect.len * cos(vect.degrees * PI / 180);
	res.y = vect.len * sin(vect.degrees * PI / 180);
	return res;
}

RPol2D ToPol(const RDec2D& vect){
	RPol2D res = { 0.0 };
	res.len = sqrt(pow(vect.x, 2) + pow(vect.y, 2));
	res.degrees = (180 / PI) *atan((vect.y / vect.x));
	return res;
}


bool operator==(const RDec2D& vect1, const RDec2D& vect2) {
	if ((vect1.x == vect2.x) && (vect1.y == vect2.y)) {
		return true;

	}else{
		return false;
	}
}

bool operator!=(const RDec2D& vect1, const RDec2D& vect2) {
	if ((vect1.x != vect2.x) || (vect1.y != vect2.y)) {
		return true;

	}
	else {
		return false;
	}
}

double Dot(const RDec2D& vect1, const RDec2D& vect2){
	return (vect1.x * vect2.x + vect1.y * vect2.y);
}

double Norm(const RDec2D& vect1){
	double result = sqrt(pow(vect1.x, 2) + pow(vect1.y, 2));
	return result;
}
