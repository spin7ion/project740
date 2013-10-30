#ifndef _CURSESWINDOWIMP_H
#define _CURSESWINDOWIMP_H

#include "WindowImp.h"
#include <curses.h>

namespace ikita
{
  class CursesWindowImp : public WindowImp
  {      
  	private:
  		WINDOW * mainwin;
    public:
      	CursesWindowImp();
      
      	virtual void Open ();
	  	virtual void Close();
  };
}

#endif // CURSESWINDOWIMP_H
