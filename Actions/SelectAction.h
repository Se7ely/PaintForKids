#ifndef SELECT_ACTION_H
#define SELECT_ACTION_H

#include "Action.h"

class SelectAction: public Action
{
private:
	Point P1;
public:
	SelectAction(ApplicationManager *pApp);
	virtual void ReadActionParameters();
	virtual void Execute() ;
};

#endif