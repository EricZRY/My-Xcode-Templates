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
	if (pRet && pRet->init()){
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
		setIsHDPanel(true);
        auto ccb = CCBLoadFile("___FILEBASENAMEASIDENTIFIER___",this,this);
        setContentSize(ccb->getContentSize());
        float addExt = getExtendHeight();
        generateData();
		bRet = true;
	}while(0);
	return bRet;
}

void ___FILEBASENAMEASIDENTIFIER___::generateData(){
	/* code */
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

#pragma mark - tableView
cocos2d::CCSize ___FILEBASENAMEASIDENTIFIER___::tableCellSizeForIndex(CCTableView *table, ssize_t idx){
	return CCSizeZero;
}

cocos2d::CCSize ___FILEBASENAMEASIDENTIFIER___::gridSizeForTable(cocos2d::extension::CCMultiColTableView *table){
	return CCSizeZero;
}

CCTableViewCell* ___FILEBASENAMEASIDENTIFIER___::gridAtIndex(cocos2d::extension::CCMultiColTableView *table, ssize_t idx){
    CCTableViewCell* pRet = nullptr;
    if (idx < m_data.size() && idx >= 0 ){
        pRet = BASendFriendGiftBagViewCell::create(m_data[idx],this);
    }else{
        pRet = BASendFriendGiftBagViewCell::create(-1,this);
    }
	return pRet;
}

ssize_t ___FILEBASENAMEASIDENTIFIER___::numberOfCellsInTableView(cocos2d::extension::CCMultiColTableView *table){
	return 1;
}

ssize_t ___FILEBASENAMEASIDENTIFIER___::numberOfGridsInCell(cocos2d::extension::CCMultiColTableView *multiTable){
	/* code */
	return 4;
}
#pragma mark - ccb
bool ___FILEBASENAMEASIDENTIFIER___::onAssignCCBMemberVariable(cocos2d::CCObject * pTarget, const char * pMemberVariableName, cocos2d::CCNode * pNode){
	/* code */
	return false;
}

void ___FILEBASENAMEASIDENTIFIER___::onResolveCCBCCControlSelector(cocos2d::CCObject * pTarget, const char * pSelectorName, SEL_CCControlHandler& h){
	/* code */
}

#pragma mark - cell
___FILEBASENAMEASIDENTIFIER___Cell::___FILEBASENAMEASIDENTIFIER___Cell()
:m_parent(nullptr)
{}

___FILEBASENAMEASIDENTIFIER___Cell::~___FILEBASENAMEASIDENTIFIER___Cell()
{}

___FILEBASENAMEASIDENTIFIER___Cell* ___FILEBASENAMEASIDENTIFIER___Cell::create(BASendFriendGiftBagView* parent){
	___FILEBASENAMEASIDENTIFIER___Cell* pRet = new ___FILEBASENAMEASIDENTIFIER___Cell();
	if (pRet && pRet->init(parent)){
		pRet->autorelease();
	}else{
		CC_SAFE_DELETE(pRet);
	}
	return pRet;
}

bool ___FILEBASENAMEASIDENTIFIER___Cell::init(BASendFriendGiftBagView* parent){
	bool bRet = false;
	do{
		/* code */
        if (!parent) break;
        m_parent = parent;
        CCBLoadFile("___FILEBASENAMEASIDENTIFIER___Cell",this,this);
		setData();
		bRet = true;
	}while(0);
	return bRet;
}

void ___FILEBASENAMEASIDENTIFIER___Cell::setData(){
	/* code */
}

void ___FILEBASENAMEASIDENTIFIER___Cell::onEnter(){
	CCTableViewTouchIFCell::onEnter();
	setTouchEnabled(true);
	/* code */
}

void ___FILEBASENAMEASIDENTIFIER___Cell::onExit(){
	/* code */
	setTouchEnabled(false);
	CCTableViewTouchIFCell::onExit();
}

bool ___FILEBASENAMEASIDENTIFIER___Cell::onTouchBegan(cocos2d::CCTouch *pTouch, cocos2d::CCEvent *pEvent){
	/* code */
	return false;
}

void ___FILEBASENAMEASIDENTIFIER___Cell::onTouchEnded(cocos2d::CCTouch *pTouch, cocos2d::CCEvent *pEvent){
	/* code */
}

#pragma mark - ccb
bool ___FILEBASENAMEASIDENTIFIER___Cell::onAssignCCBMemberVariable(cocos2d::CCObject * pTarget, const char * pMemberVariableName, cocos2d::CCNode * pNode){
	/* code */
	return false;
}

void ___FILEBASENAMEASIDENTIFIER___Cell::onResolveCCBCCControlSelector(cocos2d::CCObject * pTarget, const char * pSelectorName, SEL_CCControlHandler& h){
	/* code */
}