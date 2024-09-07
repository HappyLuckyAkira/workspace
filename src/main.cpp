#include <stdio.h>
#include <gtest/gtest.h>


int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}

//int main(int argc, char *argv[]) {
//  printf("Hello world\n");
//  return 0;
//}
