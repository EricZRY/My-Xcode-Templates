//
//  ___FILENAME___
//  ___PROJECTNAME___
//
//  Created by ___FULLUSERNAME___ on ___DATE___.
//___COPYRIGHT___
//

#ifndef ___FILEBASENAMEASIDENTIFIER___h
#define ___FILEBASENAMEASIDENTIFIER___h

#include "CommonInclude.h"
#include "BASingletonTemplates.h"

class ___FILEBASENAMEASIDENTIFIER___
{
public:
    static void purge();
    void initData(CCDictionary* dic);
    ___FILEBASENAMEASIDENTIFIER___();
    virtual ~___FILEBASENAMEASIDENTIFIER___();
private:
    CC_SYNTHESIZE_BOOL(m_functionON, FunctionON);
};

#endif /* ___FILEBASENAMEASIDENTIFIER___h */
