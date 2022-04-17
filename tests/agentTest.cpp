#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include "backclient.h"

using namespace testing;

class agentTest : public Test
{
protected:
    IBackclient* _client; 

    void SetUp() override
    {
        _client = new Backclient();
    }

    void TearDown() override {

    }
};

TEST_F(agentTest,IsClientnotnullptr){

    EXPECT_TRUE(_client!=NULL);
}

TEST_F(agentTest, RequestInsertPhase)
{
    _client->InsertPhase();

    auto rslt = _client->RequestInsertPhaseResult();

    EXPECT_EQ(rslt,status::succeed);
}

