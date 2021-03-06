#pragma once
#include "../GraphicsEngine/Interfaces/IEntity.h"
#include "../PhysicsEngine/Interfaces/IEntity.h"


// The class which has graphical, physical, etc representation in the game world
// That you can transform, iteract with it.
class Entity
{
public:
	Entity(graphics::IEntity* g, physics::IEntity* p);

	void setPos(const mm::vec3& p);
	void setScale(const mm::vec3& s);

	graphics::IEntity*	getComponentGraphics() { return gEntity; }
	physics::IEntity*	getComponentPhysics() { return pEntity; }

protected:
	graphics::IEntity* gEntity;
	physics::IEntity* pEntity;
};