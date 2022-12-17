#pragma once

#include "VirtualMethod.h"

namespace csgo
{

struct ClientClass;
namespace pod { struct Client; }

class Client : public VirtualCallableFromPOD<Client, pod::Client> {
public:
    VIRTUAL_METHOD(ClientClass*, getAllClasses, 8, (), ())
    VIRTUAL_METHOD(bool, dispatchUserMessage, 38, (int messageType, int passthroughFlags, int size, const void* data), (messageType, passthroughFlags, size, data))
};

}
