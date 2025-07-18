#ifndef _STag_STag_h
#define _STag_STag_h

#include <CtrlLib/CtrlLib.h>

using namespace Upp;

#define LAYOUTFILE <STag/STag.lay>
#include <CtrlCore/lay.h>

class STag : public WithSTagLayout<TopWindow> {
public:
	STag();
};

#endif
