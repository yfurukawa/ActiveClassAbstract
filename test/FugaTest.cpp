#include "FugaTest.h"

FugaTest::FugaTest() {

}

FugaTest::~FugaTest() {

}

void FugaTest::SetUp() {
	sut = new Fuga();
}

void FugaTest::TearDown() {
	delete sut;
}

TEST_F (FugaTest, testNameIsHere_ChangeThis) {
/* Write a test code here. */

}
