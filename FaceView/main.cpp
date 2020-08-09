#include "mainwindow.h"
#include <QApplication>
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>
using namespace cv;
int main(int argc, char *argv[])
{

    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    Mat srcImg;
    srcImg = imread("D:\\Git\\cmproject\\QtMingWOpenCV\\cvimg\\111.jpg");
    imshow("testimage", srcImg);

    return a.exec();
}
