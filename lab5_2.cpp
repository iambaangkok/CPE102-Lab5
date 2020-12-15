#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;

double deg2rad(double degree){
    return degree*M_PI/180.0;
}

double rad2deg(double radian){
    return radian*180.0/M_PI;
}

double findXComponent(double l1, double l2, double di1, double di2){
    return l1*cos(di1) + l2*cos(di2);
}

double findYComponent(double l1, double l2, double di1, double di2){
    return l1*sin(di1) + l2*sin(di2);
}

double pythagoras(double xcomp, double ycomp){
    return sqrt(pow(xcomp,2) + pow(ycomp,2));
}

void showResult(double length, double direction){
    cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%" << endl;
    cout << "Length of the resultant vector = " << length << endl;
    cout << "Direction of the resultant vector (deg) = " << direction << endl;
    cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%" << endl;
    return;
}

int main(){
    double l1,l2,a1,a2,xcomp,ycomp,result_vec_length,result_vec_direction;
    cout << "Enter length of the first vector: ";
    cin >> l1;
    cout << "Enter direction of the first vector (deg): ";
    cin >> a1;
    cout << "Enter length of the second vector: ";
    cin >> l2;
    cout << "Enter direction of the second vector (deg): ";
    cin >> a2;
    
    a1 = deg2rad(a1);
    a2 = deg2rad(a2);
    xcomp = findXComponent(l1,l2,a1,a2);
    ycomp = findYComponent(l1,l2,a1,a2);
    result_vec_length = pythagoras(xcomp,ycomp);
    result_vec_direction = rad2deg(atan2(ycomp,xcomp)); 

    showResult(result_vec_length,result_vec_direction);

    return 0;
}
