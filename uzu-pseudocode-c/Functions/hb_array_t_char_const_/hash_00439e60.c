// Function : hash
// Namespace: hb_array_t_char_const_
// Entry    : 00439e60
// Prototype: int hash(byte * param_1, uint param_2)
// Body     : 00439e60 - 00439fe5


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* hb_array_t<char const>::hash() const */

int __cdecl hb_array_t<char_const>::hash(byte *param_1,uint param_2)

{
  byte *pbVar1;
  uint uVar2;
  byte *pbVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar7 = (ulong)(param_2 >> 3);
  pbVar1 = param_1 + uVar7 * 8;
  uVar5 = (ulong)param_2 * -0x77fcaa0de192e69b ^ 0xf437ffe6;
  pbVar3 = param_1;
  if (((ulong)param_1 & 7) == 0) {
    if (pbVar1 != param_1) {
      lVar4 = 0;
      do {
        uVar6 = (*(ulong *)(param_1 + lVar4) >> 0x17 ^ *(ulong *)(param_1 + lVar4)) *
                0x2127599bf4325c37;
        uVar5 = (uVar5 ^ uVar6 ^ uVar6 >> 0x2f) * -0x77fcaa0de192e69b;
        lVar4 = lVar4 + 8;
        pbVar3 = pbVar1;
      } while (uVar7 * 8 != lVar4);
    }
  }
  else if (pbVar1 != param_1) {
    lVar4 = 0;
    do {
      uVar6 = (*(ulong *)(param_1 + lVar4) >> 0x17 ^ *(ulong *)(param_1 + lVar4)) *
              0x2127599bf4325c37;
      uVar5 = (uVar5 ^ uVar6 ^ uVar6 >> 0x2f) * -0x77fcaa0de192e69b;
      lVar4 = lVar4 + 8;
      pbVar3 = pbVar1;
    } while (uVar7 * 8 != lVar4);
  }
  uVar7 = (ulong)(param_2 & 7) - 1;
  if (uVar7 < 7) {
    uVar6 = 0;
    switch(uVar7) {
    case 6:
      uVar6 = (ulong)pbVar3[6] << 0x30;
    case 5:
      uVar6 = uVar6 | (ulong)pbVar3[5] << 0x28;
    case 4:
      uVar6 = uVar6 ^ (ulong)pbVar3[4] << 0x20;
    case 3:
      uVar6 = uVar6 ^ (ulong)pbVar3[3] << 0x18;
    case 2:
      uVar6 = uVar6 ^ (ulong)pbVar3[2] << 0x10;
    case 1:
      uVar6 = uVar6 ^ (ulong)pbVar3[1] << 8;
    case 0:
      uVar7 = (uVar6 >> 0x17 ^ uVar6 ^ (ulong)*pbVar3) * 0x2127599bf4325c37;
      uVar5 = (uVar7 ^ uVar5 ^ uVar7 >> 0x2f) * -0x77fcaa0de192e69b;
    }
  }
  lVar4 = (uVar5 >> 0x17 ^ uVar5) * 0x2127599bf4325c37;
  uVar2 = (uint)((ulong)lVar4 >> 0x20);
  return (uVar2 >> 0xf ^ (uint)lVar4) - uVar2;
}


