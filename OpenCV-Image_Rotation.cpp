#include<opencv2/opencv.hpp>
#include <iostream>

using namespace cv;
using namespace std;

int main()
{
	Mat image = imread("C:/Users/ASUS/Pictures/Saved Pictures/justice.png", IMREAD_UNCHANGED);
	double angle;
	cin >> angle;
	Point2f center((img.cols -1) / 2.0, (img.rows -1) / 2.0);
	Mat rot = getRotationMatrix2D(center, angle, 1.0);
	Rect2f bbox = RotatedRect(Point2f(), img.size(), angle).boundingRect2f();
	rotate.at<double>(0, 2) += bbox.width / 2.0 - image.cols / 2.0;
	rotate.at<double>(1, 2) += bbox.height / 2.0 - image.rows / 2.0;
	
	Mat M;
	warpAffine(img, M, rot, bbox.size());
	imwrite("rotated_image.png", M);
	string windowName = "Rotated Image";
	namedWindow(windowName, WINDOW_NORMAL);
	imshow(windowName, M);
	waitKey(0);
	destroyWindow(windowName);
	return 0;
}
