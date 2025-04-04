#include <iostream>
#include <cmath>  // For sin and cos functions
using namespace std;

// Convert degrees to radians since trigonometric functions use radians
float degreesToRadians(float degrees) {
    return degrees * M_PI / 180.0;
}

// This function converts roll, pitch, and yaw (Euler angles) to a quaternion
void convertToQuaternion(float roll, float pitch, float yaw) {
    // Step 1: Convert angles from degrees to radians
    roll = degreesToRadians(roll);
    pitch = degreesToRadians(pitch);
    yaw = degreesToRadians(yaw);

    // Step 2: Compute the necessary sine and cosine values
    float cy = cos(yaw * 0.5);    // cos of half yaw
    float sy = sin(yaw * 0.5);    // sin of half yaw
    float cp = cos(pitch * 0.5);  // cos of half pitch
    float sp = sin(pitch * 0.5);  // sin of half pitch
    float cr = cos(roll * 0.5);   // cos of half roll
    float sr = sin(roll * 0.5);   // sin of half roll

    // Step 3: Compute the quaternion values using the formula
    float w = cr * cp * cy + sr * sp * sy;
    float x = sr * cp * cy - cr * sp * sy;
    float y = cr * sp * cy + sr * cp * sy;
    float z = cr * cp * sy - sr * sp * cy;

    // Step 4: Output the quaternion result
    cout << "\n🔄 Martian Rotation System (Quaternion) 🔄\n";
    cout << "W: " << w << endl;
    cout << "X: " << x << endl;
    cout << "Y: " << y << endl;
    cout << "Z: " << z << endl;
    cout << "\nBrick is now Martian-compatible! 🚀\n";
}

int main() {
    float roll, pitch, yaw;

    // Ask the user for Euler angles input
    cout << "Enter roll (rotation around X axis) in degrees: ";
    cin >> roll;
    cout << "Enter pitch (rotation around Y axis) in degrees: ";
    cin >> pitch;
    cout << "Enter yaw (rotation around Z axis) in degrees: ";
    cin >> yaw;

    // Convert the Euler angles to a Martian-friendly quaternion
    convertToQuaternion(roll, pitch, yaw);

    return 0;
}
