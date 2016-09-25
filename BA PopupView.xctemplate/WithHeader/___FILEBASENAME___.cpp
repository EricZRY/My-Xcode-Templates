//
//  ___FILENAME___
//  ___PROJECTNAME___
//
//  Created by ___FULLUSERNAME___ on ___DATE___.
//___COPYRIGHT___
//

#include "___FILEBASENAME___.h"

___FILEBASENAMEASIDENTIFIER___::___FILEBASENAMEASIDENTIFIER___()
{}

___FILEBASENAMEASIDENTIFIER___::~___FILEBASENAMEASIDENTIFIER___()
{}

___FILEBASENAMEASIDENTIFIER___* ___FILEBASENAMEASIDENTIFIER___::create(){
	___FILEBASENAMEASIDENTIFIER___* pRet = new ___FILEBASENAMEASIDENTIFIER___();
	if (pRet && pRet->init())
	{
		pRet->autorelease();
	}else{
		CC_SAFE_DELETE(pRet);
	}
	return pRet;
}

bool ___FILEBASENAMEASIDENTIFIER___::init(){
	bool bRet = false;
	do{
		if (!PopupBaseView::init()) break;
		/* code */
        auto ccb = CCBLoadFile("___FILEBASENAMEASIDENTIFIER___",this,this);
        setContentSize(ccb->getContentSize());
		bRet = true;
	}while(0);
	return bRet;
}

void ___FILEBASENAMEASIDENTIFIER___::refreshView(){

}

void ___FILEBASENAMEASIDENTIFIER___::onEnter(){
	PopupBaseView::onEnter();
	setSwallowsTouches(true);
	setTouchEnabled(true);
	setTitleName(_lang("view name"));
	/* code */
}

void ___FILEBASENAMEASIDENTIFIER___::onExit(){
	/* code */
	setTitleName("");
	setTouchEnabled(false);
	PopupBaseView::onExit();
}

bool ___FILEBASENAMEASIDENTIFIER___::onTouchBegan(cocos2d::CCTouch *pTouch, cocos2d::CCEvent *pEvent){
	/* code */
	return true;
}

void ___FILEBASENAMEASIDENTIFIER___::onTouchEnded(cocos2d::CCTouch *pTouch, cocos2d::CCEvent *pEvent){
	/* code */
}

#pragma mark - ccb
bool ___FILEBASENAMEASIDENTIFIER___::onAssignCCBMemberVariable(cocos2d::CCObject * pTarget, const char * pMemberVariableName, cocos2d::CCNode * pNode){
	/* code */
	return false;
}

void ___FILEBASENAMEASIDENTIFIER___::onResolveCCBCCControlSelector(cocos2d::CCObject * pTarget, const char * pSelectorName, SEL_CCControlHandler& h){
	/* code */
}