class Point{
    public:
Point();
void print();
double calcDistance(Point other);
//double getX();
//double getY();
//void setX(double xVal);
//void setY(double yVal);

Point(double xVal, double yVal);
    private:
        double x;
        double y;
};
