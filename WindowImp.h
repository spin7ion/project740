#ifndef  _WINDOW_IMP_
#define  _WINDOW_IMP_

namespace ikita
{

	class WindowImp
	{
		public:
			virtual void Open () = 0 ;
			virtual void Close() = 0 ;
		protected:
			WindowImp(){};
	};

} /* namespace ikita */

#endif /*_WINDOW_IMP_*/

