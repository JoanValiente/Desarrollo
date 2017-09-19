#ifndef _vec3_H
#define _vec3_H

#include <iostream>


class Vec3
{
public:
	float x, y, z;
public:
	Vec3() { x = y = z = 0; };
	Vec3(float x, float y, float z) {
		this->x = x;
		this->y = y;
		this->z = z;
	}
	Vec3(const Vec3& vec2) {
		x = vec2.x;
		y = vec2.y;
		z = vec2.z;
	}
	~Vec3() {};


	//Operators
	Vec3 operator+ (Vec3 vec2) {
		return Vec3(x + vec2.x, y + vec2.y, z + vec2.z);
	}
	Vec3 operator- (Vec3 vec2) {
		return Vec3(x - vec2.x, y - vec2.y, z - vec2.z);
	}
	Vec3 operator* (Vec3 vec2) {
		return Vec3(x * vec2.x, y * vec2.y, z * vec2.z);
	}
	bool Vec3::operator==(Vec3 vec2) {
		return(x == vec2.x && y == vec2.y && z == vec2.z);
	}
	bool Vec3::operator!=(Vec3 vec2) {
		return(x != vec2.x || y != vec2.y || z != vec2.z);
	}
	bool Vec3::operator <(Vec3 vec2) {
		return(x + y + z < vec2.x + vec2.y + vec2.z);
	}
	bool Vec3::operator >(Vec3 vec2) {
		return(x + y + z > vec2.x + vec2.y + vec2.z);
	}
	void SetZero() {
		x = y = z = 0;
	}


};
#endif // !vec3