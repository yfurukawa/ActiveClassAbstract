#include "HogeTest.h"

HogeTest::HogeTest() {

}

HogeTest::~HogeTest() {

}

void HogeTest::SetUp() {
	sut = new Hoge();
}

void HogeTest::TearDown() {
	delete sut;
}

TEST_F (HogeTest, testNameIsHere_ChangeThis) {
/* Write a test code here. */

}
