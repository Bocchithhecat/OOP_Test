# ifndef CYLINDER_CPP
# define CYLINDER_CPP

# include "Cylinder.h"
# include <iostream>
# include <iomanip>
using namespace std;

const double PI = 3.141592653589793238462;

double Cylinder :: SurfaceArea(){
    double surfaceArea = 2 * PI * radius * (radius + height);
    return surfaceArea;
}

double Cylinder :: Volume(){
    double volume = PI * radius * radius * height; 
    return volume;
}

double Cylinder :: Circumference(){
    double circumference = 2 * PI * radius;
    return circumference;
}

istream & operator>>(istream & in, Cylinder & cldr)
{
    in >> cldr.radius >> cldr.height;
    return in;
}

ostream & operator<<(ostream & out, Cylinder & cldr)
{
    out << fixed << setprecision(3) << "Circumference: " << cldr.Circumference() << endl;
    out << fixed << setprecision(3) << "SurfaceArea: " << cldr.SurfaceArea() << endl;
    out << fixed << setprecision(3) << "Volume: " << cldr.Volume() << endl;
    return out;
}

# endif
