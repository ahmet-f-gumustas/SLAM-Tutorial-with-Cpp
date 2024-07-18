#include <iostream>
#include <vector>
#include <algorithm>
#include <Eigen/Core>
#include <Eigen/Geometry>

using namespace std;
using namespace Eigen;

int main(int argc, char **argv){

    Quaterniond q1(0.35, 0.2, 0.3, 0.1), q2(-0.5, 0.4, -0.1, 0.2);
    cout << "Quaterniod q1 : " << q1 << endl;
    cout << "Quaterniod q2 : " << q2 << endl;
    cout << endl;

    q1.normalize();
    q2.normalize();
    
    cout << "q1 normalize : " << q1 << endl;
    cout << "q2 normalize : " << q2 << endl;
    cout << endl;
    
    Vector3d t1(0.3, 0.1, 0.1), t2(-0.1, 0.5, 0.3);
    Vector3d p1(0.5, 0, 0.2);

    cout << "3d Vector t1 : " << t1 << endl << endl;
    cout << "3d Vector t2 : " << t2 << endl << endl;
    cout << "3d Vector p1 : " << p1 << endl << endl;
    cout << endl;

    Isometry3d T1w(q1), T2w(q2);
    T1w.pretranslate (t1);
    T2w.pretranslate (t2);

    Vector3d p2 = T2w * T1w.inverse() * p1;
    cout << "p2 :  " << p2 << endl;
    cout << endl << p2.transpose() << endl;

    return 0;
}