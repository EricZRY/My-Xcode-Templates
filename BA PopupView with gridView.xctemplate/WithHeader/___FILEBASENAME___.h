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
#include "DefaultTableViewDelegate.h"
#include "CCMultiColTableView.h"
#include "CCTableViewTouchIFCell.h"

class ___FILEBASENAMEASIDENTIFIER___
:public PopupBaseView
,public CCBMemberVariableAssigner
,public CCBSelectorResolver
,public CCMultiColTableViewDataSource
,public CCMultiColTableViewDelegate
{
public:
	static ___FILEBASENAMEASIDENTIFIER___* create();
protected:
    void generateData();
    void refreshView();

	virtual void onEnter();
    virtual void onExit();
    
	virtual bool onTouchBegan(cocos2d::CCTouch *pTouch, cocos2d::CCEvent *pEvent);
    virtual void onTouchEnded(cocos2d::CCTouch *pTouch, cocos2d::CCEvent *pEvent);
    virtual void onTouchMoved(cocos2d::CCTouch *pTouch, cocos2d::CCEvent *pEvent){};

    virtual void scrollViewDidScroll(CCScrollView* view){};
    virtual void scrollViewDidZoom(CCScrollView* view){};
    virtual cocos2d::CCSize tableCellSizeForIndex(CCTableView *table, ssize_t idx);
    virtual void gridTouched(cocos2d::extension::CCMultiColTableView* table, CCTableViewCell* cell){};
    virtual cocos2d::CCSize gridSizeForTable(cocos2d::extension::CCMultiColTableView *table);
    virtual CCTableViewCell* gridAtIndex(cocos2d::extension::CCMultiColTableView *table, ssize_t idx);
    virtual ssize_t numberOfCellsInTableView(cocos2d::extension::CCMultiColTableView *table);
    virtual ssize_t numberOfGridsInCell(cocos2d::extension::CCMultiColTableView *multiTable);
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
    vector<int> m_data;
	CCSafeObject<CCMultiColTableView> m_tableView;
};

class ___FILEBASENAMEASIDENTIFIER___Cell
:public CCTableViewTouchIFCell
,public CCBMemberVariableAssigner
,public CCBSelectorResolver
{
public:
	static ___FILEBASENAMEASIDENTIFIER___Cell* create(BASendFriendGiftBagView* parent);
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

	bool init(BASendFriendGiftBagView* parent);
	virtual bool onAssignCCBMemberVariable(cocos2d::CCObject * pTarget, const char * pMemberVariableName, cocos2d::CCNode * pNode);
    virtual cocos2d::SEL_MenuHandler onResolveCCBCCMenuItemSelector(cocos2d::CCObject * pTarget, const char * pSelectorName){return NULL;}
    virtual void onResolveCCBCCControlSelector(cocos2d::CCObject * pTarget, const char * pSelectorName, SEL_CCControlHandler& h);
private:
    ___FILEBASENAMEASIDENTIFIER___* m_parent;
};
#endif /* ___FILEBASENAMEASIDENTIFIER___h */
