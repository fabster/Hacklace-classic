const unsigned char font[] PROGMEM = {
	0x00, 0x00, 0x00, 0x80, 0x80, 	//    (code 32)
	0x5F, 0x80, 0x80, 0x80, 0x80, 	//  ! (code 33)
	0x03, 0x00, 0x03, 0x80, 0x80, 	//  " (code 34)
	0x14, 0x7F, 0x14, 0x7F, 0x14, 	//  # (code 35)
	0x24, 0x2A, 0x7F, 0x2A, 0x12, 	//  $ (code 36)
	0x23, 0x13, 0x08, 0x64, 0x62, 	//  % (code 37)
	0x36, 0x49, 0x56, 0x20, 0x50, 	//  & (code 38)
	0x05, 0x03, 0x80, 0x80, 0x80, 	//  ' (code 39)
	0x1C, 0x22, 0x41, 0x80, 0x80, 	//  ( (code 40)
	0x41, 0x22, 0x1C, 0x80, 0x80, 	//  ) (code 41)
	0x22, 0x14, 0x6B, 0x14, 0x22, 	//  * (code 42)
	0x08, 0x08, 0x3E, 0x08, 0x08, 	//  + (code 43)
	0x50, 0x30, 0x80, 0x80, 0x80, 	//  , (code 44)
	0x08, 0x08, 0x08, 0x08, 0x80, 	//  - (code 45)
	0x60, 0x60, 0x80, 0x80, 0x80, 	//  . (code 46)
	0x60, 0x10, 0x08, 0x04, 0x03, 	//  / (code 47)
	0x3E, 0x41, 0x41, 0x3E, 0x80, 	//  0 (code 48)
	0x42, 0x7F, 0x40, 0x80, 0x80, 	//  1 (code 49)
	0x62, 0x51, 0x49, 0x46, 0x80, 	//  2 (code 50)
	0x22, 0x41, 0x49, 0x36, 0x80, 	//  3 (code 51)
	0x18, 0x14, 0x12, 0x7F, 0x80, 	//  4 (code 52)
	0x27, 0x45, 0x45, 0x39, 0x80, 	//  5 (code 53)
	0x3C, 0x4A, 0x49, 0x31, 0x80, 	//  6 (code 54)
	0x01, 0x71, 0x0D, 0x03, 0x80, 	//  7 (code 55)
	0x36, 0x49, 0x49, 0x36, 0x80, 	//  8 (code 56)
	0x06, 0x49, 0x29, 0x1E, 0x80, 	//  9 (code 57)
	0x36, 0x36, 0x80, 0x80, 0x80, 	//  : (code 58)
	0x56, 0x36, 0x80, 0x80, 0x80, 	//  ; (code 59)
	0x08, 0x14, 0x22, 0x41, 0x80, 	//  < (code 60)
	0x14, 0x14, 0x14, 0x14, 0x80, 	//  = (code 61)
	0x41, 0x22, 0x14, 0x08, 0x80, 	//  > (code 62)
	0x02, 0x51, 0x09, 0x06, 0x80, 	//  ? (code 63)
	0x32, 0x49, 0x79, 0x41, 0x3E, 	//  @ (code 64)
	0x7E, 0x09, 0x09, 0x7E, 0x80, 	//  A (code 65)
	0x7F, 0x49, 0x49, 0x36, 0x80, 	//  B (code 66)
	0x3E, 0x41, 0x41, 0x22, 0x80, 	//  C (code 67)
	0x7F, 0x41, 0x41, 0x3E, 0x80, 	//  D (code 68)
	0x7F, 0x49, 0x49, 0x41, 0x80, 	//  E (code 69)
	0x7F, 0x09, 0x09, 0x01, 0x80, 	//  F (code 70)
	0x3E, 0x49, 0x49, 0x3A, 0x80, 	//  G (code 71)
	0x7F, 0x08, 0x08, 0x7F, 0x80, 	//  H (code 72)
	0x41, 0x7F, 0x41, 0x80, 0x80, 	//  I (code 73)
	0x20, 0x40, 0x40, 0x3F, 0x80, 	//  J (code 74)
	0x7F, 0x08, 0x14, 0x63, 0x80, 	//  K (code 75)
	0x7F, 0x40, 0x40, 0x40, 0x80, 	//  L (code 76)
	0x7F, 0x02, 0x0C, 0x02, 0x7F, 	//  M (code 77)
	0x7F, 0x06, 0x18, 0x7F, 0x80, 	//  N (code 78)
	0x3E, 0x41, 0x41, 0x3E, 0x80, 	//  O (code 79)
	0x7F, 0x09, 0x09, 0x06, 0x80, 	//  P (code 80)
	0x3E, 0x41, 0x21, 0x5E, 0x80, 	//  Q (code 81)
	0x7F, 0x09, 0x19, 0x66, 0x80, 	//  R (code 82)
	0x26, 0x49, 0x49, 0x32, 0x80, 	//  S (code 83)
	0x01, 0x01, 0x7F, 0x01, 0x01, 	//  T (code 84)
	0x3F, 0x40, 0x40, 0x3F, 0x80, 	//  U (code 85)
	0x07, 0x18, 0x60, 0x18, 0x07, 	//  V (code 86)
	0x3F, 0x40, 0x38, 0x40, 0x3F, 	//  W (code 87)
	0x63, 0x14, 0x08, 0x14, 0x63, 	//  X (code 88)
	0x03, 0x04, 0x78, 0x04, 0x03, 	//  Y (code 89)
	0x61, 0x59, 0x45, 0x43, 0x80, 	//  Z (code 90)
	0x7F, 0x41, 0x41, 0x80, 0x80, 	//  [ (code 91)
	0x03, 0x04, 0x08, 0x10, 0x60, 	//  \ (code 92)
	0x41, 0x41, 0x7F, 0x80, 0x80, 	//  ] (code 93)
	0x02, 0x01, 0x02, 0x80, 0x80, 	//  ^ (code 94)
	0x40, 0x40, 0x40, 0x40, 0x80, 	//  _ (code 95)
	0x03, 0x04, 0x80, 0x80, 0x80, 	//  ` (code 96)
	0x20, 0x54, 0x54, 0x78, 0x80, 	//  a (code 97)
	0x7F, 0x48, 0x48, 0x30, 0x80, 	//  b (code 98)
	0x38, 0x44, 0x44, 0x28, 0x80, 	//  c (code 99)
	0x38, 0x44, 0x44, 0x7F, 0x80, 	//  d (code 100)
	0x38, 0x54, 0x54, 0x48, 0x80, 	//  e (code 101)
	0x04, 0x7E, 0x05, 0x01, 0x80, 	//  f (code 102)
	0x48, 0x54, 0x54, 0x38, 0x80, 	//  g (code 103)
	0x7F, 0x08, 0x08, 0x70, 0x80, 	//  h (code 104)
	0x7A, 0x80, 0x80, 0x80, 0x80, 	//  i (code 105)
	0x20, 0x40, 0x3A, 0x80, 0x80, 	//  j (code 106)
	0x7F, 0x08, 0x14, 0x62, 0x80, 	//  k (code 107)
	0x41, 0x7F, 0x40, 0x80, 0x80, 	//  l (code 108)
	0x7C, 0x04, 0x78, 0x04, 0x78, 	//  m (code 109)
	0x7C, 0x04, 0x04, 0x78, 0x80, 	//  n (code 110)
	0x38, 0x44, 0x44, 0x38, 0x80, 	//  o (code 111)
	0x7C, 0x24, 0x24, 0x18, 0x80, 	//  p (code 112)
	0x18, 0x24, 0x24, 0x7C, 0x80, 	//  q (code 113)
	0x78, 0x04, 0x04, 0x80, 0x80, 	//  r (code 114)
	0x48, 0x54, 0x54, 0x24, 0x80, 	//  s (code 115)
	0x04, 0x3F, 0x44, 0x44, 0x80, 	//  t (code 116)
	0x3C, 0x40, 0x40, 0x7C, 0x80, 	//  u (code 117)
	0x0C, 0x30, 0x40, 0x30, 0x8C, 	//  v (code 118)
	0x3C, 0x40, 0x30, 0x40, 0x3C, 	//  w (code 119)
	0x44, 0x28, 0x10, 0x28, 0x44, 	//  x (code 120)
	0x4C, 0x50, 0x50, 0x3C, 0x80, 	//  y (code 121)
	0x64, 0x54, 0x4C, 0x44, 0x80, 	//  z (code 122)
	0x08, 0x36, 0x41, 0x80, 0x80, 	//  { (code 123)
	0x7F, 0x80, 0x80, 0x80, 0x80, 	//  | (code 124)
	0x41, 0x36, 0x08, 0x80, 0x80, 	//  } (code 125)
	0x08, 0x04, 0x08, 0x10, 0x08, 	//  ~ (code 126)
	0x80, 0x80, 0x80, 0x80, 0x80, 	//   (code 127)
	0x1C, 0x2A, 0x49, 0x49, 0x22, 	//   (code 128)
	0x1F, 0x04, 0x7F, 0x40, 0x40, 	//   (code 129)
	0x20, 0x12, 0x10, 0x12, 0x20, 	//   (code 130)
	0x10, 0x22, 0x20, 0x22, 0x10, 	//   (code 131)
	0x21, 0x54, 0x54, 0x79, 0x80, 	//   (code 132)
	0x79, 0x14, 0x14, 0x79, 0x80, 	//   (code 133)
	0x39, 0x44, 0x44, 0x39, 0x80, 	//   (code 134)
	0x39, 0x44, 0x44, 0x39, 0x80, 	//   (code 135)
	0x3D, 0x40, 0x40, 0x7D, 0x80, 	//   (code 136)
	0x3D, 0x40, 0x40, 0x3D, 0x80, 	//   (code 137)
	0x7E, 0x25, 0x25, 0x1A, 0x80, 	//   (code 138)
	0x6C, 0x1A, 0x6F, 0x1A, 0x6C, 	//   (code 139)
	0x7D, 0x5A, 0x1E, 0x5A, 0x7D, 	//   (code 140)
	0x4E, 0x7B, 0x0F, 0x7B, 0x4E, 	//   (code 141)
	0x7C, 0x3A, 0x7E, 0x3A, 0x7C, 	//   (code 142)
	0x1C, 0x76, 0x2E, 0x76, 0x1C, 	//   (code 143)
	0x1E, 0x34, 0x7C, 0x34, 0x1E, 	//   (code 144)
	0x0C, 0x12, 0x24, 0x12, 0x0C, 	//   (code 145)
	0x08, 0x1C, 0x3E, 0x7F, 0x80, 	//   (code 146)
	0x7F, 0x3E, 0x1C, 0x08, 0x80, 	//   (code 147)
	0x30, 0x3F, 0x01, 0x62, 0x7E, 	//   (code 148)
	0x30, 0x3F, 0x02, 0x80, 0x80, 	//   (code 149)
	0x1E, 0x3D, 0x77, 0x73, 0x31, 	//   (code 150)
	0x60, 0x7E, 0x7B, 0x7E, 0x60, 	//   (code 151)
	0x20, 0x5F, 0x23, 0x80, 0x80, 	//   (code 152)
	0x7E, 0x7A, 0x7A, 0x7F, 0x80, 	//   (code 153)
	0x03, 0x45, 0x79, 0x45, 0x03, 	//   (code 154)
	0x10, 0x28, 0x24, 0x28, 0x10, 	//   (code 155)
	0x08, 0x14, 0x2A, 0x14, 0x08, 	//   (code 156)
	0x00, 0x00, 0x00, 0x00, 0x00, 	//   (code 157)
	0x36, 0x36, 0x08, 0x36, 0x36, 	//   (code 158)
	0x1E, 0x14, 0x3C, 0x28, 0x78, 	//   (code 159)
	0x44, 0x24, 0x1D, 0x24, 0x44, 	//    (code 160)
	0x42, 0x24, 0x1D, 0x62, 0x01, 	//  ¡ (code 161)
	0x08, 0x65, 0x1C, 0x22, 0x41, 	//  ¢ (code 162)
	0x46, 0x24, 0x1D, 0x24, 0x4C, 	//  £ (code 163)
	0x08, 0x44, 0x3D, 0x44, 0x08, 	//  ¤ (code 164)
	0x4C, 0x24, 0x1D, 0x24, 0x46, 	//  ¥ (code 165)
	0x01, 0x62, 0x1D, 0x62, 0x01, 	//  ¦ (code 166)
	0x42, 0x24, 0x1D, 0x24, 0x42, 	//  § (code 167)
	0x7C, 0x46, 0x57, 0x46, 0x7C, 	//  ¨ (code 168)
	0x7F, 0x2A, 0x2A, 0x7F, 0x80, 	//  © (code 169)
	0x2A, 0x7F, 0x41, 0x7F, 0x2A, 	//  ª (code 170)
	0x0A, 0x00, 0x55, 0x00, 0x0A, 	//  « (code 171)
	0x30, 0x48, 0x4D, 0x33, 0x07, 	//  ¬ (code 172)
	0x06, 0x29, 0x79, 0x29, 0x06, 	//  ­ (code 173)
	0x08, 0x1C, 0x2A, 0x08, 0x08, 	//  ® (code 174)
	0x08, 0x08, 0x2A, 0x1C, 0x08	//  ¯ (code 175)
};