/**helloWorld.cpp*/

//Std
#include <iostream>

//eigen
#include <eigen3/Eigen/Dense>
#include <eigen3/Eigen/Geometry>

int main(int argc, char *argv[])
{
	// a 3x1 vector of doubles
	Eigen::Vector3d va;
	va << 1.1, -2.2, 3.3;
	std::cout << "va: " << std::endl << va << std::endl;
	std::cout << "va': " << va.transpose() << std::endl;

	// a 4x1 vector of ints, intialized with given values
	Eigen::Vector4i vb(1, 2, 3, 4);
	std::cout << "vb': " << vb.transpose() << std::endl;

	// a 3x3 matrix of doubles
	Eigen::Matrix3d MA;
	MA << 1.1, 1.2, 1.3, 2.1, 2.2, 2.3, 3.1, 3.2, 3.3;
	MA(2,2) = 12;
	std::cout << "MA: " << std::endl << MA << std::endl;

	// a 3x3 zero matrix and Identity matrix
	Eigen::Matrix<double, 3, 3> MZ3 = Eigen::Matrix3d::Zero();
	Eigen::Matrix<double, 3, 3> MI3 = Eigen::Matrix3d::Identity();
	std::cout << "MZ3: " << std::endl << MZ3 << std::endl;

	// a 6x6 zero matrix and Identity matrix
	Eigen::Matrix<double, 6, 6> MZ6 = Eigen::Matrix<double, 6, 6>::Zero();
	Eigen::Matrix<double, 6, 6> MI6 = Eigen::Matrix<double, 6, 6>::Identity();
	std::cout << "MI6: " << std::endl << MI6 << std::endl;


	// an unknown size matrix and resizing
    Eigen::MatrixXd MXd;
	MXd.resize(4,7);
	MXd = Eigen::Matrix<double, 4, 7>::Zero();
	MXd(2,4) = 3.14;
	MXd(3,6) = -3.14;
	std::cout << "MXd: " << std::endl << MXd << std::endl;

/*
	// accessing to matrix block
	std::cout << "MXd(1:3,4:7) = " << MXd.block<3,4>(1,4) << std::endl;
	std::cout << "MXd(1:3,4:7) = " << MXd.block(1,4,3,4) << std::endl;

	//norm, dot, cross
	Eigen::Vector3d v1, v2, v3;
	v1 << 1,  2, 0;
	v2 << 0, -2, 4.7;
	v1.normalize();
	v2.normalize();
	std::cout << "v1: " << v1.transpose() << std::endl;
	std::cout << "v2: " << v2.transpose() << std::endl;
	double dot_result = v1.dot(v2);
	std::cout << "v1·v2 = " << dot_result << std::endl;

	//matrix inverse, and check that AA-1 = I

*/


    return 0;
}
