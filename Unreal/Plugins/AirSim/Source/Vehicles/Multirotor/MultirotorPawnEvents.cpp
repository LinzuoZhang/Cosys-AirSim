#include "MultirotorPawnEvents.h"

MultirotorPawnEvents::ActuatorsSignal& MultirotorPawnEvents::getActuatorSignal()
{
    return actuator_signal_;
}
MultirotorPawnEvents::MessagesSignal& MultirotorPawnEvents::getMessagesSignal()
{
    return messages_signal_;
}