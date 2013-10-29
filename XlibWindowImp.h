/*
 * XlibWindowImp.h
 *
 *  Created on: 10 29, 2013
 *      Author: Lepikhin Ilya
 */

#ifndef XLIBWINDOWIMP_H
#define XLIBWINDOWIMP_H

#include "WindowImp.h"

#include <X11/Xlib.h>

namespace ikita
{
  class XlibWindowImp : public WindowImp
  {
      Display * display;
      Window window;
    public:
      XlibWindowImp();
      
      virtual void Open ();
			virtual void Close();
  };
} /* namespace ikita /*

#endif // XLIBWINDOWIMP_H
