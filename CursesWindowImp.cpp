#include "CursesWindowImp.h"

#include <stdlib.h>
#include <iostream>

using namespace std;

namespace ikita
{
  CursesWindowImp::CursesWindowImp(){
  	if ( (mainwin = initscr()) == NULL ) {
		fprintf(stderr, "Error initialising ncurses.\n");
		exit(EXIT_FAILURE);
    }
  }
  
  void CursesWindowImp::Open(){
  	mvwaddstr(mainwin, 1, 1, "The window\n");
    whline(mainwin,'-', 1000);
    mvwaddstr(mainwin, 5, 5, "The content");
    
    box(mainwin, 0, 0);

    noecho();
    keypad(mainwin, TRUE);

    refresh();
  }
  
  void CursesWindowImp::Close(){
  	delwin(mainwin);
    endwin();
    refresh();
  }
}