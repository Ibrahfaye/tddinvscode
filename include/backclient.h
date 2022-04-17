#include "Ibackclient.h"

class Backclient : public IBackclient
{
private:
    status _rslt = none;
public:
    Backclient(); 
    ~Backclient();

    void InsertPhase() override;
    status RequestInsertPhaseResult() override;
    
};
