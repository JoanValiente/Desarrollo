#include "vec3.h"
#include <iostream>

using namespace std;

int main() {

	Vec3 vector1;
	vector1.x = 2;
	vector1.y = 3;
	vector1.z = 2;
	Vec3 vector2;
	vector2.x = 2;
	vector2.y = 3;
	vector2.z = 2;
	
	Vec3 vector3 = vector1 + vector2;
	cout << "Vector 1 + Vector 2 = "<< vector3.x << ", " << vector3.y << ", " << vector3.z << "\n\n";

	vector3 = vector1 - vector2;
	cout << "Vector 1 - Vector 2 = " << vector3.x << ", " << vector3.y << ", " << vector3.z << "\n\n";

	vector3 = vector1 * vector2;
	cout << "Vector 1 * Vector 2 = " << vector3.x << ", " << vector3.y << ", " << vector3.z << "\n\n";

	if (vector1 == vector2)
		cout << "Vector1 == Vector2\n" << endl;
	else
		cout << "Vector1 != Vector2\n" << endl;

	if (vector1 < vector2 && vector1 != vector2)
		cout << "Vector1 < Vector2\n" << endl;
	else
		if (vector1 != vector2)
			cout << "Vector1 > Vector2\n" << endl;	

	if (vector1 > vector2 && vector1 != vector2)
		cout << "Vector1 > Vector2\n" << endl;
	else
		if (vector1 != vector2)
			cout << "Vector1 < Vector2\n" << endl;

	vector3.SetZero();
	cout << "Vector 3 to zero: " << vector3.x << ", " << vector3.y << ", " << vector3.z << "\n\n\n";
	system("pause");
	return 0;
}