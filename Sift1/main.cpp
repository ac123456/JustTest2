#include <opencv2/opencv.hpp>
#include <iostream>
using namespace std;
using namespace cv;
int main()
{
	//��ȡ���ص�һ��ͼƬ����ʾ����
	Mat img = imread("E:\\�ޱ���.png");
	imshow("MM Viewer", img);
	//�ȴ��û�����
	waitKey(0);
	return 0;
}