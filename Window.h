#ifndef  _WINDOW_
#define  _WINDOW_

#include <iostream>

#include "WindowImp.h"

namespace ikita
{

	class Window
	{
		private:
			WindowImp * _imp ;
		public:
			Window(WindowImp * imp = 0):
				_imp(imp){};
			virtual void Open () { (_imp ? _imp->Open()  : std::cerr<<
					"Window::Open() implementor not set!"<<std::endl) } ;
			virtual void Close() { (_imp ? _imp->Close() : std::cerr<<
					"Window::Close() implementor not set!"<<std::endl) } ;
	};

} /* namespace ikita */

#endif /*_WINDOW_*/

