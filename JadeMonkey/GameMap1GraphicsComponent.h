#pragma once

#include "GraphicsComponent.h"

class GameMap1GraphicsComponent : public GraphicsComponent
{
public:
	GameMap1GraphicsComponent(int numRows, int numCols, Game* game, GameEntity* entity);
	virtual void Initialize(void) override;
	virtual void Update(GameEntity* entity, long time) override;
	virtual string GetName(void) override;
};