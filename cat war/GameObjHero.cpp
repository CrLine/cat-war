//
//  GameObjHero.cpp
//  cat war
//
//  Created by 李涛 on 21/9/13.
//
//

#include "GameObjHero.h"

GameObjHero::GameObjHero(){
    
}

GameObjHero::~GameObjHero(){
    
}

void GameObjHero::onEnter()
{
    CCNode::onEnter();
    this->setContentSize(CCSizeMake(85, 90));
    CCDirector* pDirector=CCDirector::sharedDirector();
    CCSprite *mainsprite=CCSprite::create("catBody1.png");
    
    //主体动画
    CCAnimation* animation=CCAnimation::create();
    animation->addSpriteFrameWithFileName("catBody1.png");
    animation->addSpriteFrameWithFileName("catBody2-4.png");
    animation->addSpriteFrameWithFileName("catBody3.png");
    animation->addSpriteFrameWithFileName("catBody2-4.png");
    animation->setDelayPerUnit(0.1f);
    animation->setRestoreOriginalFrame(true);
    CCAnimate* action=CCAnimate::create(animation);
    mainsprite->runAction(CCRepeatForever::create(action));
    addChild(mainsprite);
    
    //尾巴
    CCSprite *tail=CCSprite::create("cateTail.png");
    tail->setAnchorPoint(ccp(0.5,1));
    tail->setPosition(ccp(-5, -29));
    tail->setScale(0.5);
    tail->setRotation(20);
    tail->runAction(CCRepeatForever::create((CCActionInterval*)CCSequence::create(CCRotateBy::create(0.5,-40),CCRotateBy::create(0.5,40), NULL) ));
    addChild(tail);
    
    //手
    lefthand=CCSprite::create("catHand1.png");
    lefthand->setAnchorPoint(ccp(1, 0.5));
    lefthand->setPosition(ccp(-18, -20));
    addChild(lefthand);
    righthand=CCSprite::create("catHand1.png");
    righthand->setPosition(ccp(18, -20));
    righthand->setAnchorPoint(ccp(0,0.5));
    addChild(righthand);
    offset=ccp(0, 0);
    
}

void GameObjHero::onExit(){
    CCDirector* pDirector=CCDirector::sharedDirector();
    CCNode::onExit();
}

