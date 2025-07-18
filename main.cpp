#include "STag.h"

STag::STag()
{
	CtrlLayout(*this, "STag");
	Sizeable().MinimizeBox().MaximizeBox();
}

GUI_APP_MAIN
{
	STag().Run();
}
