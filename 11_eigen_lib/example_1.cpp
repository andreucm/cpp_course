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
	MA << 1.1, 1.2, 1.3,
	std::cout << "MA: " << std::endl << MA << std::endl;

	// a 3x3 zero matrix and Identity matrix
	Eigen::Matrix<double, 3, 3> MZ3 = Eigen::Matrix3d::Zero();
	Eigen::Matrix<double, 3, 3> MI3 = Eigen::Matrix3d::Identity();

	// a 6x6 zero matrix and Identity matrix
	Eigen::Matrix<double, 6, 6> MZ6 = Eigen::Matrix<double, 6, 6>::Zero(6,6);
	Eigen::Matrix<double, 6, 6> MI6 = Eigen::Matrix<double, 6, 6>::Identity(6,6);

	// an unknown size matrix
    Eigen::MatrixXd md;

    return 0;
}
