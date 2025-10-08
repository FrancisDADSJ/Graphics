#ifndef POINT_H
#define POINT_H

/// <summary>
/// class Point represents a point in a 3D cartesian plane.
/// </summary>
class Point {
public:
	Point(int coordinate_x, int coordinate_y, int coordinate_z, double scale_factor); 

	void Translate(int translate_x, int translate_y, int translate_z);

	void Scale(double scale_x, double scale_y, double scale_z);

	void RotateX(double rotating_rad_angle);
	
	void RotateY(double rotating_rad_angle);

	void RotateZ(double rotating_rad_angle);
	
	void PrintPoint();

private:
	// Fields
	int x = 0;
	int y = 0;
	int z = 0;
	double w = 1.0;

};

#endif