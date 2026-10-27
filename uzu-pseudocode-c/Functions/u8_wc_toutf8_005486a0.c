// Function : u8_wc_toutf8
// Namespace: 
// Entry    : 005486a0
// Prototype: undefined8 u8_wc_toutf8(byte * param_1, uint param_2)
// Body     : 005486a0 - 0054873c


undefined8 u8_wc_toutf8(byte *param_1,uint param_2)

{
  undefined8 uVar1;
  byte bVar2;
  
  bVar2 = (byte)param_2;
  if (param_2 < 0x80) {
    *param_1 = bVar2;
    return 1;
  }
  if (param_2 < 0x800) {
    *param_1 = (byte)(param_2 >> 6) | 0xc0;
    param_1[1] = bVar2 & 0x3f | 0x80;
    return 2;
  }
  if (param_2 < 0x10000) {
    *param_1 = (byte)(param_2 >> 0xc) | 0xe0;
    param_1[1] = (byte)(param_2 >> 6) & 0x3f | 0x80;
    param_1[2] = bVar2 & 0x3f | 0x80;
    return 3;
  }
  uVar1 = 0;
  if (param_2 < 0x110000) {
    *param_1 = (byte)(param_2 >> 0x12) | 0xf0;
    param_1[1] = (byte)(param_2 >> 0xc) & 0x3f | 0x80;
    param_1[2] = (byte)(param_2 >> 6) & 0x3f | 0x80;
    param_1[3] = bVar2 & 0x3f | 0x80;
    uVar1 = 4;
  }
  return uVar1;
}


