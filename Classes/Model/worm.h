#ifndef  _WORM_
#define  _WORM_

#include "cocos2d.h"

class BaseWorm : public cocos2d::CCSprite{

	BaseWorm();
	~BaseWorm();

public:
	void move();
	bool isDie();
	bool attack(BaseWorm *enemy);

private:
	int HP;
};


#endif
