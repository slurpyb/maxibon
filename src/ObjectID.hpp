#ifndef OBJECTID_HPP
#define OBJECTID_HPP

#include <string>
#include <memory>

#include "../include/UUIDv4/uuid_v4.h"

struct ObjectID
{
    ObjectID();
    ~ObjectID();
    UUIDv4::UUID id;
    std::string idStr;
    std::string idBytes;

    bool operator==(const UUIDv4::UUID& rhs) const { return id == rhs;}

    private:
        void initialize();

};

#endif // OBJECTID_HPP
