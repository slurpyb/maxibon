#include "ObjectID.hpp"

ObjectID::ObjectID()
{
    this->initialize();
}

ObjectID::~ObjectID()
{
    
}

void ObjectID::initialize()
{
    UUIDv4::UUIDGenerator<std::mt19937_64> uuidGenerator;
    id = uuidGenerator.getUUID();
    idStr = id.str();
    idBytes = id.bytes();
};
