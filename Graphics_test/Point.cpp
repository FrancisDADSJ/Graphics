#include <iostream>
#include <cmath>
#include "Point.h"
// Class constructor
Point::Point(int coordinate_x, int coordinate_y, int coordinate_z, double scale_factor)
	{
		Point::x = coordinate_x;
		Point::y = coordinate_y;
		Point::z = coordinate_z;
		Point::w = scale_factor;
	}


void Point::Translate(int translate_x, int translate_y, int translate_z) {
	Point::x = Point::x + translate_x;
	Point::y = Point::y + translate_y;
	Point::z = Point::z + translate_z;
	}

void Point::Scale(double scale_x, double scale_y, double scale_z) {
		Point::x = Point::x * scale_x;
		Point::y = Point::y * scale_y;
		Point::z = Point::z * scale_z;
	}

void Point::RotateX(double rotating_rad_angle) {
	
	}

void Point::RotateY(double rotating_rad_angle) {
		Point::x = Point::x * cos(rotating_rad_angle) - y * cos(rotating_rad_angle);
		Point::y = Point::x * sin(rotating_rad_angle) - y * cos(rotating_rad_angle);
		Point::z = Point::z;
	}

void Point::RotateZ(double rotating_rad_angle) {
		
	}

void Point::PrintPoint() {
		std::cout << "x: " << Point::x << " y: " << Point::y << " z: " << Point::z << std::endl;
	}





