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
#include "PopupBaseView.h"
#include "PopupViewController.h"

class ___FILEBASENAMEASIDENTIFIER___
:public PopupBaseView
,public CCBMemberVariableAssigner
,public CCBSelectorResolver
{
public:
	static ___FILEBASENAMEASIDENTIFIER___* create();
    void refreshView();
protected:
	virtual void onEnter();
    virtual void onExit();
    
	virtual bool onTouchBegan(cocos2d::CCTouch *pTouch, cocos2d::CCEvent *pEvent);
    virtual void onTouchEnded(cocos2d::CCTouch *pTouch, cocos2d::CCEvent *pEvent);
    virtual void onTouchMoved(cocos2d::CCTouch *pTouch, cocos2d::CCEvent *pEvent){};

private:
	___FILEBASENAMEASIDENTIFIER___();
	~___FILEBASENAMEASIDENTIFIER___();

	bool init();
	virtual bool onAssignCCBMemberVariable(cocos2d::CCObject * pTarget, const char * pMemberVariableName, cocos2d::CCNode * pNode);
    virtual cocos2d::SEL_MenuHandler onResolveCCBCCMenuItemSelector(cocos2d::CCObject * pTarget, const char * pSelectorName){return NULL;}
    virtual void onResolveCCBCCControlSelector(cocos2d::CCObject * pTarget, const char * pSelectorName, SEL_CCControlHandler& h);
public:
protected:
private:
};

#endif /* ___FILEBASENAMEASIDENTIFIER___h */
