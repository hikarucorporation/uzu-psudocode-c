// Function : hb_ucd_decompose
// Namespace: 
// Entry    : 0043bfe0
// Prototype: undefined8 hb_ucd_decompose(undefined8 param_1, uint param_2, uint * param_3, uint * param_4)
// Body     : 0043bfe0 - 0043c15b


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* hb_ucd_decompose(hb_unicode_funcs_t*, unsigned int, unsigned int*, unsigned int*, void*) */

undefined8 __cdecl hb_ucd_decompose(undefined8 param_1,uint param_2,uint *param_3,uint *param_4)

{
  ushort uVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = param_2 - 0xac00;
  if (uVar3 < 0x2ba4) {
    uVar4 = uVar3 & 0xffff;
    uVar3 = uVar3 + (uVar4 / 0x1c) * -0x1c;
    if ((short)uVar3 == 0) {
      *param_3 = uVar4 / 0x24c + 0x1100;
      *param_4 = (uVar4 % 0x24c) / 0x1c + 0x1161;
      return 1;
    }
    uVar3 = uVar3 & 0xffff;
    *param_3 = param_2 - uVar3;
    *param_4 = uVar3 + 0x11a7;
    return 1;
  }
  if ((0x2fa1d < param_2) ||
     (uVar1 = *(ushort *)
               (_hb_ucd_u16 +
               ((ulong)(param_2 & 0xf) |
               (ulong)(byte)(&DAT_0060122c)
                            [(ulong)(byte)(&DAT_006010ae)[param_2 >> 9] << 5 |
                             (ulong)(param_2 >> 4 & 0x1f)] << 4) * 2 + 0x3680), uVar1 == 0)) {
    return 0;
  }
  uVar3 = uVar1 - 1;
  if (uVar3 < 0x3a7) {
    if (uVar3 < 0x339) {
      uVar3 = (uint)*(ushort *)(_hb_ucd_dm1_p0_map + (ulong)uVar3 * 2);
    }
    else {
      uVar3 = *(ushort *)(_hb_ucd_dm1_p2_map + (ulong)(uVar1 - 0x33a) * 2) | 0x20000;
    }
    *param_3 = uVar3;
    *param_4 = 0;
    return 1;
  }
  uVar3 = uVar1 - 0x3a8;
  if (uVar3 < 0x27e) {
    uVar3 = *(uint *)(_hb_ucd_dm2_u32_map + (ulong)uVar3 * 4);
    *param_3 = uVar3 >> 0x15;
    *param_4 = uVar3 >> 0xe & 0x7f | 0x300;
    return 1;
  }
  uVar2 = *(ulong *)(_hb_ucd_dm2_u64_map + (ulong)(uVar1 - 0x626) * 8);
  *param_3 = (uint)(uVar2 >> 0x2a);
  *param_4 = (uint)(uVar2 >> 0x15) & 0x1fffff;
  return 1;
}


