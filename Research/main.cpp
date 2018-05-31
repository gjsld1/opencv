//
//  main.cpp
//  Research
//
//  Created by 신예지 on 2018. 5. 22..
//  Copyright © 2018년 신예지. All rights reserved.
//

#include <opencv2/opencv.hpp>
using namespace std;
using namespace cv;
int main()
{
    Mat img(Size(300,400), CV_8U, Scalar(255));
    imshow("a1", img);
    waitKey();
    
}
