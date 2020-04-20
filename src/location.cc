// Copyright (c) 2020 Kanav Bhatnagar. All rights reserved.

#include <island/location.h>

namespace island {

Location::Location(int row, int col) : row_(row), col_(col) {}

Location Location::operator+(const Location& rhs) const {
  return { row_ + rhs.row_, col_ + rhs.col_ };
}

int mod(int a, int b) {
  int c = a % b;
  return c + (c < 0 ? b : 0);
}

Location Location::operator%(const Location& rhs) const {
  return {mod(row_, rhs.row_), mod(col_, rhs.col_)};
}

}  // namespace island