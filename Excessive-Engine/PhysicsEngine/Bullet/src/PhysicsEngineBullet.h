#pragma once
#include "../../Interfaces/IEngine.h"
#include "../../Interfaces/IEntity.h"

#include "../Common/src/BasicTypes.h"
#include "mymath/mymath.h"
#include <vector>

class btSoftRigidDynamicsWorld;
class btDiscreteDynamicsWorld;

struct rPhysicsEngineBullet {

};

class PhysicsEngineBullet : public physics::IEngine
{
public:
	PhysicsEngineBullet(const rPhysicsEngineBullet& d);
	~PhysicsEngineBullet();
	void release() override;

	void update(float deltaTime) override;

	// Create, add DYNAMIC rigid body to physics world
	physics::IEntity* addEntityRigidDynamic(mm::vec3* vertices, u32 nVertices, float mass = 1) override;

	// Create, add STATIC rigid body to physics world
	physics::IEntity* addEntityRigidStatic(mm::vec3* vertices, u32 nVertices, void* indices, u32 indexStride, u32 nIndices) override;

	void GetDebugData(mm::vec3* nonIndexedVertices, uint32_t vertsByteSize, uint32_t& nVertices) override;

private:
	btDiscreteDynamicsWorld* world;

	std::vector<physics::IEntity*> entities;
};

