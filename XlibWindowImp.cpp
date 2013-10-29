/*
 * XlibWindowImp.cpp
 *
 *  Created on: 10 29, 2013
 *      Author: Lepikhin Ilya
 */

#include "XlibWindowImp.h"

#include <iostream>

using namespace std;

namespace ikita
{

  XlibWindowImp::XlibWindowImp() :
    display(NULL)
  {
  }
  
  void XlibWindowImp::Open()
  {
    if (display != NULL)
    {
      return;
    }
    
    const unsigned 
        winX = 0, 
        winY = 0, 
        winWidth = 800, 
        winHeight = 600, 
        winBorderWidth = 0;
    
    display = XOpenDisplay(NULL);
    if (display == NULL)
    {
        cerr << "Cannot connect to X server\n";
        return;
    }
    
    const int screen_num = DefaultScreen(display);
    
    window = XCreateSimpleWindow(
               display,
               RootWindow(display, screen_num),
               winX, winY,
               winWidth, winHeight,
               winBorderWidth, 
               BlackPixel(display, screen_num),
               WhitePixel(display, screen_num));
    
    XMapWindow(display, window);
    XFlush(display);
  }
  
  void XlibWindowImp::Close()
  {
    if (display == NULL)
    {
      return;
    }
    XDestroyWindow(display, window);
    XCloseDisplay(display);
    display = NULL;
  }
  
} /* namespace ikita /*
