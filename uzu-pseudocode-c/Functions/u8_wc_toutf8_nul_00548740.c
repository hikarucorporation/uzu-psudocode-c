// Function : u8_wc_toutf8_nul
// Namespace: 
// Entry    : 00548740
// Prototype: undefined u8_wc_toutf8_nul(byte * param_1, uint param_2)
// Body     : 00548740 - 005487f4


void u8_wc_toutf8_nul(byte *param_1,uint param_2)

{
  uint uVar1;
  byte bVar2;
  
  bVar2 = (byte)param_2;
  if (param_2 < 0x80) {
    *param_1 = bVar2;
    uVar1 = 1;
  }
  else {
    if (param_2 < 0x800) {
      *param_1 = (byte)(param_2 >> 6) | 0xc0;
      param_1[1] = bVar2 & 0x3f | 0x80;
      param_1[2] = 0;
      return;
    }
    if (param_2 < 0x10000) {
      *param_1 = (byte)(param_2 >> 0xc) | 0xe0;
      param_1[1] = (byte)(param_2 >> 6) & 0x3f | 0x80;
      param_1[2] = bVar2 & 0x3f | 0x80;
      param_1[3] = 0;
      return;
    }
    uVar1 = 0;
    if (param_2 < 0x110000) {
      *param_1 = (byte)(param_2 >> 0x12) | 0xf0;
      param_1[1] = (byte)(param_2 >> 0xc) & 0x3f | 0x80;
      param_1[2] = (byte)(param_2 >> 6) & 0x3f | 0x80;
      param_1[3] = bVar2 & 0x3f | 0x80;
      param_1[4] = 0;
      return;
    }
  }
  param_1[uVar1] = 0;
  return;
}


