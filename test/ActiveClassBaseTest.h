#ifndef ACTIVECLASSBASETEST_H_
#define ACTIVECLASSBASETEST_H_

#include <gtest/gtest.h>
#include "ActiveClassBase.h"

class ActiveClassBaseTest : public ::testing::Test {
protected:
	ActiveClassBase* sut;
	void SetUp();
	void TearDown();

public:
	ActiveClassBaseTest();
	virtual ~ActiveClassBaseTest();

};

#endif
