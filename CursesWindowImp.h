#ifndef CURSESWINDOWIMP_H
#define CURSESWINDOWIMP_H

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
} /* namespace ikita /*

#endif // CURSESWINDOWIMP_H
