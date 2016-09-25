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
#include "DefaultTableViewDelegate.h"
#include "CCTableViewTouchIFCell.h"

#pragma mark ___FILEBASENAMEASIDENTIFIER___ class
class ___FILEBASENAMEASIDENTIFIER___
: public PopupBaseView
, public CCBSelectorResolver
, public CCBMemberVariableAssigner
, public CCTableViewDataSource
, public DefaultTableViewDelegate
{
public:
    static ___FILEBASENAMEASIDENTIFIER___* create();
protected:
    // scrollview delegate
    virtual CCSize tableCellSizeForIndex(CCTableView *table, ssize_t idx);
    virtual CCSize cellSizeForTable(CCTableView *table);
    virtual CCTableViewCell* tableCellAtIndex(CCTableView *table, ssize_t idx);
    virtual ssize_t numberOfCellsInTableView(CCTableView *table);
    
    virtual bool onTouchBegan(cocos2d::CCTouch *pTouch, cocos2d::CCEvent *pEvent);
    virtual void onTouchEnded(cocos2d::CCTouch *pTouch, cocos2d::CCEvent *pEvent);
    virtual void onTouchMoved(cocos2d::CCTouch *pTouch, cocos2d::CCEvent *pEvent){};
    
private:
    virtual void onEnter();
    virtual void onExit();
    virtual bool init();
    
    virtual cocos2d::SEL_MenuHandler onResolveCCBCCMenuItemSelector(cocos2d::CCObject * pTarget, const char * pSelectorName){return NULL;}
    virtual void onResolveCCBCCControlSelector(cocos2d::CCObject * pTarget, const char * pSelectorName, SEL_CCControlHandler& h);
    virtual bool onAssignCCBMemberVariable(cocos2d::CCObject * pTarget, const char * pMemberVariableName, cocos2d::CCNode * pNode);

private:
    CCSafeObject<CCTableView> m_tabView;
    std::vector<int> m_data;
};

#pragma mark - ___FILEBASENAMEASIDENTIFIER___Cell class
class ___FILEBASENAMEASIDENTIFIER___Cell
:public CCTableViewTouchIFCell
,public CCBMemberVariableAssigner
,public CCBSelectorResolver
{
public:
	static ___FILEBASENAMEASIDENTIFIER___Cell* create(___FILEBASENAMEASIDENTIFIER___* parent);
	void setData();
protected:
	virtual void onEnter();
    virtual void onExit();

    virtual bool onTouchBegan(cocos2d::CCTouch *pTouch, cocos2d::CCEvent *pEvent);
    virtual void onTouchEnded(cocos2d::CCTouch *pTouch, cocos2d::CCEvent *pEvent);
    virtual void onTouchMoved(cocos2d::CCTouch *pTouch, cocos2d::CCEvent *pEvent){};

private:
	___FILEBASENAMEASIDENTIFIER___Cell();
	~___FILEBASENAMEASIDENTIFIER___Cell();

	bool init(___FILEBASENAMEASIDENTIFIER___* parent);
	virtual bool onAssignCCBMemberVariable(cocos2d::CCObject * pTarget, const char * pMemberVariableName, cocos2d::CCNode * pNode);
    virtual cocos2d::SEL_MenuHandler onResolveCCBCCMenuItemSelector(cocos2d::CCObject * pTarget, const char * pSelectorName){return NULL;}
    virtual void onResolveCCBCCControlSelector(cocos2d::CCObject * pTarget, const char * pSelectorName, SEL_CCControlHandler& h);
private:
    ___FILEBASENAMEASIDENTIFIER___* m_parent;
};


#endif /* ___FILEBASENAMEASIDENTIFIER___h */
