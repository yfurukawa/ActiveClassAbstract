#include "ActiveClassBaseTest.h"

ActiveClassBaseTest::ActiveClassBaseTest() {

}

ActiveClassBaseTest::~ActiveClassBaseTest() {

}

void ActiveClassBaseTest::SetUp() {
	sut = new ActiveClassBase();
}

void ActiveClassBaseTest::TearDown() {
	delete sut;
}

TEST_F (ActiveClassBaseTest, testNameIsHere_ChangeThis) {
/* Write a test code here. */

}
