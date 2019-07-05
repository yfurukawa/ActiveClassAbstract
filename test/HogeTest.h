#ifndef HOGETEST_H_
#define HOGETEST_H_

#include <gtest/gtest.h>
#include "Hoge.h"

class HogeTest : public ::testing::Test {
protected:
	Hoge* sut;
	void SetUp();
	void TearDown();

public:
	HogeTest();
	virtual ~HogeTest();

};

#endif
