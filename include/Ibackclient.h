#include "RequestStatus.h"

class IBackclient{
public:
    virtual void InsertPhase() = 0;
    virtual status RequestInsertPhaseResult() = 0;
};