//
//  GameLayer.h
//  nyandash
//
//  Created by shun-tak on 14/01/19.
//
//

#ifndef __GAME_LAYER__
#define __GAME_LAYER__

#include "cocos2d.h"
#include "cocos-ext.h"

USING_NS_CC;
USING_NS_CC_EXT;

#define GOAL_COUNT 100

class GameLayer : public CCLayer
, public CCBSelectorResolver
, public CCBMemberVariableAssigner
{
    CCSprite* mBg1;
    CCSprite* mBg2;
    CCSprite* mBg3;

    virtual SEL_MenuHandler onResolveCCBCCMenuItemSelector(CCObject* pTarget, const char* pSelectorName);
    virtual SEL_CCControlHandler onResolveCCBCCControlSelector(CCObject* pTarget, const char* pSelectorName);
    virtual bool onAssignCCBMemberVariable(CCObject* pTarget, const char* pMemberVariableName, CCNode* pNode);

    void tappedLeftFoot(CCObject* pSender, CCControlEvent pCCControlEvent);
    void tappedRightFoot(CCObject* pSender, CCControlEvent pCCControlEvent);
    void tappedFoot();

public:
    GameLayer();
    virtual ~GameLayer();
    CCB_STATIC_NEW_AUTORELEASE_OBJECT_WITH_INIT_METHOD(GameLayer, create);
};

#endif /* __GAME_LAYER__ */
