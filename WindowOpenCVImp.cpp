// Template.cpp : Defines the entry point for the console application.
//
#include "StdAfx.h"
#include "opencv2/opencv.hpp"
#include <ctime>
#include <stdio.h>
#include <vector>
#include <algorithm>
#include <math.h>
#include <conio.h>
#include "WindowImp.h"
#include "WindowOpenCVImp.h"


#include <iostream>

using namespace std;

namespace ikita
{

  //WindowOpenCVImp::WindowOpenCVImp;
   
 
  void WindowOpenCVImp::Open()
  {
    // задаём высоту и ширину картинки
        int height = 640;
        int width = 480;
        // задаём точку для вывода текста
        //CvPoint pt = cvPoint( height/4, width/2 );

        // Создаёи 8-битную, 3-канальную картинку
        //IplImage* hw = cvCreateImage(cvSize(height, width), 8, 3);
        // заливаем картинку чёрным цветом
        //cvSet(hw,cvScalar(0,0,0));
        // инициализация шрифта
        //CvFont font;
        //cvInitFont( &font, CV_FONT_HERSHEY_COMPLEX,1.0, 1.0, 0, 1, CV_AA);
        // используя шрифт выводим на картинку текст
        //cvPutText(hw, "OpenCV Step By Step", pt, &font, CV_RGB(150, 0, 150) );

        // создаём окошко
        cvNamedWindow("OpenCVWindowImp", 0);
        // показываем картинку в созданном окне
        cvShowImage("OpenCVWindowImp",0);
        // ждём нажатия клавиши
        cvWaitKey(0);
        //cvWaitKey(33);
  }
 
  void WindowOpenCVImp::Close()
  {
    
    cvDestroyWindow("OpenCVWindowImp");
  }
 
} 

int main()
{
	ikita::WindowOpenCVImp a;
	a.Open();
	return 0;
}
/* namespace ikita /*

  
int main( int argc, char** argv ) 
{
        // задаём высоту и ширину картинки
        int height = 640;
        int width = 480;
        // задаём точку для вывода текста
        //CvPoint pt = cvPoint( height/4, width/2 );

        // Создаёи 8-битную, 3-канальную картинку
        //IplImage* hw = cvCreateImage(cvSize(height, width), 8, 3);
        // заливаем картинку чёрным цветом
        //cvSet(hw,cvScalar(0,0,0));
        // инициализация шрифта
        //CvFont font;
        //cvInitFont( &font, CV_FONT_HERSHEY_COMPLEX,1.0, 1.0, 0, 1, CV_AA);
        // используя шрифт выводим на картинку текст
        //cvPutText(hw, "OpenCV Step By Step", pt, &font, CV_RGB(150, 0, 150) );

        // создаём окошко
        cvNamedWindow("OpenCVWindowImp", 0);
        // показываем картинку в созданном окне
        cvShowImage("OpenCVWindowImp",0);
        // ждём нажатия клавиши
        cvWaitKey(0);
        cvWaitKey(33);
        // освобождаем ресурсы
        //cvReleaseImage(&hw);
        cvDestroyWindow("OpenCVWindowImp");
        return 0;
//}
*/