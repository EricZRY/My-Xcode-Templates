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

class ___FILEBASENAMEASIDENTIFIER___
:public Ref
{
public:
    static ___FILEBASENAMEASIDENTIFIER___* getInstance();
    static void purgeData();
    void initData(CCDictionary* dic);
private:
    ___FILEBASENAMEASIDENTIFIER___();
    ~___FILEBASENAMEASIDENTIFIER___();
private:
    static ___FILEBASENAMEASIDENTIFIER___* ____FILEBASENAMEASIDENTIFIER____Instance;
    CC_SYNTHESIZE_BOOL(m_functionON, FunctionON);
};

#endif /* ___FILEBASENAMEASIDENTIFIER___h */
