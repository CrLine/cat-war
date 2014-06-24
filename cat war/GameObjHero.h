//
//  GameObjHero.h
//  cat war
//
//  Created by 李涛 on 21/9/13.
//
//

#ifndef __cat_war__GameObjHero__
#define __cat_war__GameObjHero__

#include <iostream>
#include "cocos2d.h"
using namespace cocos2d;

class GameObjHero:public CCNode{
public:
    CCSprite* lefthand;
    CCSprite* righthand;
    CCPoint offset;
    GameObjHero(void);
    ~GameObjHero();
    virtual void onEnter();
    virtual void onExit();
    
};

#endif /* defined(__cat_war__GameObjHero__) */
