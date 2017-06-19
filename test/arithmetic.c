int main() {
  assert (1 + 1, 2);
  assert (-1 + 4, 3);
  assert (2 * 3, 6);
  assert (10 / 2, 5);
  assert (10 / 3, 3);
  assert (6 % 4, 2);
  assert (3 % 9, 3);
  assert (0 > -1, 1);
  assert (3 > 2, 1);
  assert (2 >= 1, 1);
  assert (2 > 3, 0);
  assert (1 < 2, 1);
  assert (4 <= 4, 1);
  assert (3 < 5, 1);
  assert (2 == 2, 1);
  assert (0 == 0, 1);
  assert (1 == 0, 0);
  assert (0 != 1, 1);
  assert (2 != 2, 0);
  assert (1 && 1, 1);
  assert (1 && 0, 0);
  assert (0 && 1, 0);
  assert (2 && 1, 1);
  assert (0 && 2, 0);
  assert (2 && 0, 0);
  assert (1 || 0, 1);
  assert (0 || 1, 1);
  assert (2 || 0, 1);
  assert (0 || 0, 0);
  assert (1 || 1, 1);
  assert (2 || 2, 1);
  assert ((1 == 0) || (2 > 3) || (1 != 0), 1);
  assert (!0, 1);
  assert (!1, 0);
  assert (!(1 == 1), 0);
  assert (!!(1), 1);
  assert (1 == 2 || 1 != 0, 1);
  assert ((1 == 1) && (1 >= 1), 1);
  assert ((1 != 1) && (1 >= 1), 0);
  assert (1 | 2, 3);
  assert (2 | 5, 7);
  assert (2 | 7, 7);
  assert (1 & 2, 0);
  assert (2 & 5, 0);
  assert (2 & 7, 2);
  assert (2 & 5, 0);
  assert (~0, -1);
  assert (~2, -3);
  assert (~-1, 0);
  assert (2 ^ 6, 4);
  assert (15 ^ 5, 10);
  assert (2 << 8, 512);
  assert (3 << 4, 48);
  assert (8 >> 3, 1);
  assert (16 >> 2, 4);
  assert (0x52b2a7 == 5419687, 1);
};
