/****************************************************************************
Copyright (c) 2011-2013,WebJet Business Division,CYOU
 
http://www.genesis-3d.com.cn

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.
****************************************************************************/

#ifndef __ANDROIDTIMER_H__
#define __ANDROIDTIMER_H__

#include "core/types.h"
#include "timing/time.h"



namespace Android
{
	class AndroidTimer
{
	public:
		/// constructor
		AndroidTimer();
		/// start/continue the timer
		void Start();
		/// stop the timer
		void Stop();
		/// reset the timer
		void Reset();
		/// return true if currently running
		bool Running() const;
		/// get current time in seconds
		Timing::Time GetTime() const;
		/// get current time in ticks
		Timing::Tick GetTicks() const;
		/// get the real time
		static Timing::MicrosecondTick GetusTicks();
private:

	Timing::Time InternalTime() const;

	Timing::Time ConvertLinuxTime(const long& sec, const long& nsec) const;

private:

	 bool  running;
	 float diffTime;
	 float stopTime;
};

} 

#endif