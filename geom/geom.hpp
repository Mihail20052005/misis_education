#include <iosfwd>


struct Rdec2D {
	double x = 0.0;
	double y = 0.0;
};

struct Rpol2D {
	double len = 0.0;
	double degrees = 0.0;
};


std::ostream& operator<<(std::ostream& ostrm, const Rdec2D& z);
std::ostream& operator<<(std::ostream& ostrm, const Rpol2D& z);

Rdec2D operator*(double count, const Rdec2D& vect);
Rdec2D operator+(const Rdec2D& vect1, const Rdec2D& vect2);
Rdec2D operator-(const Rdec2D& vect1);
Rdec2D operator-(const Rdec2D& vect1, const Rdec2D& vect2);
Rdec2D operator/(const Rdec2D& vect1, double count);

bool operator==(const Rdec2D& vect1, const Rdec2D& vect2);
bool operator!=(const Rdec2D& vect1, const Rdec2D& vect2);

double Dot(const Rdec2D& vect1, const Rdec2D& vect2);
double Norm(const Rdec2D& vect1);

Rdec2D ToDec(const Rpol2D& vect);
Rpol2D ToPol(const Rdec2D& vect);


