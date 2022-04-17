#include "backclient.h"

Backclient::Backclient()
{

}

void Backclient::InsertPhase(){
    _rslt = succeed;
}

status Backclient::RequestInsertPhaseResult(){
    return _rslt;
}

Backclient::~Backclient(){
}