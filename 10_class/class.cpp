
#include <iostream>
#include <string>


class Shape2D
{
	protected:
		int id_;
		std::string label_;
		bool is_plygon_;
		int n_sides_;
		double area_;

	public:
		Shape2D(const int & _id,
				const std::string & _label,
				const bool & _is_polygon,
				const int & _n_sides)
		{
			id_ = _id;
			label_ = _label;
			is_plygon_ = _is_polygon;
			n_sides_ = _n_sides;
			area_ = 0;
			std::cout << "End of Shape2D() constructor" << std::endl;
		}

		~Shape2D()
		{
			std::cout << "End of ~Shape2D() destructor" << std::endl;
		}

		void merge(const Shape2D & _in_shape)
		{
			//TODO
			std::cout << "Sorry, merge() method is not yet implemented" << std::endl;
		}

		void print() const
		{
			std::cout << "id_: " << id_ << std::endl
					  << "\t label_: " << label_ << std::endl
					  << "\t is_plygon_: " << is_plygon_ << std::endl
					  << "\t n_sides_: " << n_sides_ << std::endl
					  << "\t area_: " << area_ << std::endl;
		}
};

class Triangle : public Shape2D
{
	protected:
		double height_;
		double base_;

		void computeArea()
		{
			area_ = height_*base_ / 2.0;
			std::cout << "End of Triangle() constructor" << std::endl;
		}

	public:
		Triangle(const int & _id,
				 const std::string & _label,
				 const double & _height,
			 	 const double & _base) :
				 Shape2D(_id, _label, true, 3)
		{
			height_ = _height;
			base_ = _base;
			computeArea();
		}

		~Triangle()
		{

		}
};

int main()
{
	Shape2D shp1(1, std::string("shape1"), true, 3);
	Shape2D shp2(2, std::string("shape2"), false, -1);
	shp1.merge(shp2);
	shp1.print();
	shp2.print();

	Triangle trngl1(3, std::string("triangle1"), 4., 5.);
	trngl1.print();

	return 0;
}
