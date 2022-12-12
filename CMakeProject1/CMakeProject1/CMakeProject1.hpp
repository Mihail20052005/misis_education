#include <iosfwd>


struct RDec2D {
	double x = 0.0;
	double y = 0.0;
};

struct RPol2D {
	double len = 0.0;
	double degrees = 0.0;
};


std::ostream& operator<<(std::ostream& ostrm, const RDec2D& z);
std::ostream& operator<<(std::ostream& ostrm, const RPol2D& z);

RDec2D operator*(double count, const RDec2D& vect);
RDec2D operator+(const RDec2D& vect1, const RDec2D& vect2);
RDec2D operator-(const RDec2D& vect1);
RDec2D operator-(const RDec2D& vect1, const RDec2D& vect2);
RDec2D operator/(const RDec2D& vect1, double count);

bool operator==(const RDec2D& vect1, const RDec2D& vect2);
bool operator!=(const RDec2D& vect1, const RDec2D& vect2);

double Dot(const RDec2D& vect1, const RDec2D& vect2);
double Norm(const RDec2D& vect1);

RDec2D ToDec(const RPol2D& vect);
RPol2D ToPol(const RDec2D& vect);


