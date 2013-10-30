#include "WindowImp.h"

#include "StdAfx.h"
#include "opencv2/opencv.hpp"
#include <ctime>
#include <stdio.h>
#include <vector>
#include <algorithm>
#include <math.h>
#include <conio.h>

namespace ikita
{
  class WindowOpenCVImp : public WindowImp
  {
      public:
      WindowOpenCVImp()
	  {
	  }
     
      virtual void Open ();
      virtual void Close();
  };
}