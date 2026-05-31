#include <gtest/gtest.h>
#include <print.hpp>
#include <sstream>

TEST(PrintTest, OutputCheck) {
    std::stringstream ss;
    print("Hello", ss);
    EXPECT_EQ(ss.str(), "Hello");
}
