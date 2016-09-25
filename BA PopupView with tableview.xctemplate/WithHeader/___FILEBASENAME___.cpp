//
//  ___FILENAME___
//  ___PROJECTNAME___
//
//  Created by ___FULLUSERNAME___ on ___DATE___.
//___COPYRIGHT___
//

#include "___FILEBASENAME___.h"

___FILEBASENAMEASIDENTIFIER___* ___FILEBASENAMEASIDENTIFIER___::create() {
    ___FILEBASENAMEASIDENTIFIER___* ret = new ___FILEBASENAMEASIDENTIFIER___();
    if(ret && ret->init()){
        ret->autorelease();
    }else{
        CC_SAFE_DELETE(ret);
    }
    return ret;
}

bool ___FILEBASENAMEASIDENTIFIER___::init() {
    if (!PopupBaseView::init()) {
        return false;
    }

    /*CCLoadSprite::doResourceByCommonIndex(11, true);*/
    setCleanFunction([](){
        /*CCLoadSprite::doResourceByCommonIndex(11, false);*/
    });
    
    setIsHDPanel(true);

    auto bg = CCBLoadFile("___FILEBASENAMEASIDENTIFIER___",this,this);
    setContentSize(bg->getContentSize());
    int extH = getExtendHeight();
    
    return true;
}

void ___FILEBASENAMEASIDENTIFIER___::onEnter() {
    PopupBaseView::onEnter();
    setTitleName(_lang("view name"));
    setSwallowsTouches(true);
    setTouchEnabled(true);
}

void ___FILEBASENAMEASIDENTIFIER___::onExit() {
    setTouchEnabled(false);
    setTitleName("");
    PopupBaseView::onExit();
}

bool ___FILEBASENAMEASIDENTIFIER___::onTouchBegan(cocos2d::CCTouch *pTouch, cocos2d::CCEvent *pEvent) {
    return true;
}

void ___FILEBASENAMEASIDENTIFIER___::onTouchEnded(cocos2d::CCTouch *pTouch, cocos2d::CCEvent *pEvent) {
}

void ___FILEBASENAMEASIDENTIFIER___::onResolveCCBCCControlSelector(cocos2d::CCObject * pTarget, const char * pSelectorName, SEL_CCControlHandler& h) {

}

bool ___FILEBASENAMEASIDENTIFIER___::onAssignCCBMemberVariable(cocos2d::CCObject * pTarget, const char * pMemberVariableName, cocos2d::CCNode * pNode) {
    return false;
}

CCSize ___FILEBASENAMEASIDENTIFIER___::tableCellSizeForIndex(CCTableView *table, ssize_t idx) {   
    return CCSizeZero;
}

CCSize ___FILEBASENAMEASIDENTIFIER___::cellSizeForTable(CCTableView *table) {
    return CCSizeZero;
}

CCTableViewCell* ___FILEBASENAMEASIDENTIFIER___::tableCellAtIndex(CCTableView *table, ssize_t idx) {
    if (idx >= m_data.size()) {
        return nullptr;
    }
    int itemId = m_data[idx];
    
    ___FILEBASENAMEASIDENTIFIER___Cell* cell = dynamic_cast<___FILEBASENAMEASIDENTIFIER___Cell*>(table->dequeueCell());
    if (cell) {
        cell->setData();
    } else {
        cell = ___FILEBASENAMEASIDENTIFIER___Cell::create(this);
    }
    
    return cell;
}

ssize_t ___FILEBASENAMEASIDENTIFIER___::numberOfCellsInTableView(CCTableView *table) {
    return m_data.size();
}

#pragma mark - ___FILEBASENAMEASIDENTIFIER___Cell class
___FILEBASENAMEASIDENTIFIER___Cell* ___FILEBASENAMEASIDENTIFIER___Cell::create(___FILEBASENAMEASIDENTIFIER___* parent) {
    ___FILEBASENAMEASIDENTIFIER___Cell ret = new ___FILEBASENAMEASIDENTIFIER___Cell();
    if (ret && ret->init(parent)) {
        ret->autorelease();
    } else {
        CC_SAFE_DELETE(ret);
    }
    return ret;
}

bool ___FILEBASENAMEASIDENTIFIER___Cell::init(___FILEBASENAMEASIDENTIFIER___* parent) {
    bool ret = true;
    CCTableViewTouchIFCell::init();
    auto ccb = CCBLoadFile("___FILEBASENAMEASIDENTIFIER___Cell",this,this);
    setContentSize(ccb->getContentSize());
    setData();
    return ret;
}

void ___FILEBASENAMEASIDENTIFIER___Cell::setData(){

}

void ___FILEBASENAMEASIDENTIFIER___Cell::onEnter() {
    CCTableViewTouchIFCell::onEnter();
    setTouchEnabled(true);
}

void ___FILEBASENAMEASIDENTIFIER___Cell::onExit() {
    setTouchEnabled(false);
    CCTableViewTouchIFCell::onExit();
}

bool ___FILEBASENAMEASIDENTIFIER___Cell::onTouchBegan(cocos2d::CCTouch *pTouch, cocos2d::CCEvent *pEvent) {
	return false;
}

void ___FILEBASENAMEASIDENTIFIER___Cell::onTouchEnded(cocos2d::CCTouch *pTouch, cocos2d::CCEvent *pEvent) {
    
}

void ___FILEBASENAMEASIDENTIFIER___Cell::onResolveCCBCCControlSelector(cocos2d::CCObject * pTarget, const char * pSelectorName, SEL_CCControlHandler& h) {
}

bool ___FILEBASENAMEASIDENTIFIER___Cell::onAssignCCBMemberVariable(cocos2d::CCObject *pTarget, const char *pMemberVariableName, cocos2d::CCNode *pNode) {
	return false;
}