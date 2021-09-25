#include <gtest/gtest.h>

#include "simple.hpp"

class TestSimple : public Simple {
  public:
    TestSimple() {};
    TestSimple(const TestSimple&) = default;
    TestSimple(TestSimple&&) = default;
    TestSimple& operator=(const TestSimple&) {return *this;};
    TestSimple& operator=(const TestSimple&&) {return *this;};
};

// Demonstrate some basic assertions.
TEST(HelloTest, BasicAssertions) {
  TestSimple t{};
  // Expect equality.
  EXPECT_EQ(t.add(40,2), 42);
}