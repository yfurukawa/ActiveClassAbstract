#ifndef FUGATEST_H_
#define FUGATEST_H_

#include <gtest/gtest.h>
#include "Fuga.h"

class FugaTest : public ::testing::Test {
protected:
	Fuga* sut;
	void SetUp();
	void TearDown();

public:
	FugaTest();
	virtual ~FugaTest();

};

#endif
