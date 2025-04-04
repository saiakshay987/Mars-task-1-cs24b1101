#include <iostream>
#include <cmath>

using namespace std;

// Function to convert marker position
void convert_marker_position(double x, double y, double z, double correction_offset, double &x_final, double &y_final, double &z_final) {
    // Calculate magnitude of the direction vector
    double magnitude = sqrt(x * x + y * y);
        // Unit vector in the both directions 
        double unit_x = x / magnitude;
        double unit_y = y / magnitude;
        
        // Apply correction along the same direction
        x_final = x + correction_offset * unit_x;
        y_final = y + correction_offset * unit_y;   
    z_final = z;  // No change in z
}

// Function to calculate distance between two points
double calculate_distance(double x1, double y1, double z1, double x2, double y2, double z2) {
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2) + pow(z2 - z1, 2));
}

int main() {
    double x, y, z=-60;  //marker coordinates detected by the camera
    double correction_offset = 55;  // The rover stops 55 cm behind
    cin>>x>>y;
    // Adjusted marker position
    double x_final, y_final, z_final;
    convert_marker_position(x, y, z, correction_offset, x_final, y_final, z_final);
    
    // Calculate distances
    double original_distance = calculate_distance(0, 0, 0, x, y, z);  // Distance from rover before correction
    double adjusted_distance = calculate_distance(0, 0, 0, x_final, y_final, z_final);  // Distance from corrected position
    
    // Output results
    cout << "New Marker Position w.r.t. Rover's Center: (" << x_final << ", " << y_final << ", " << z_final << ")" << endl;
    cout << "Distance between Rover's Center and Marker (Original): " << original_distance << " cm" << endl;
    cout << "Distance between Rover's Center and Marker (Adjusted): " << adjusted_distance << " cm" << endl;
    
    return 0;
}
