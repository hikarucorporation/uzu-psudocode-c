// Function : hb_ucd_compose
// Namespace: 
// Entry    : 0043be60
// Prototype: undefined8 hb_ucd_compose(undefined8 param_1, long param_2, uint param_3, uint * param_4)
// Body     : 0043be60 - 0043bfd8


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* hb_ucd_compose(hb_unicode_funcs_t*, unsigned int, unsigned int, unsigned int*, void*) */

undefined8 __cdecl hb_ucd_compose(undefined8 param_1,long param_2,uint param_3,uint *param_4)

{
  ulong uVar1;
  short sVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  ulong uVar8;
  
  uVar5 = (uint)param_2;
  if ((uVar5 - 0xac00 < 0x2ba4) && (param_3 - 0x11a8 < 0x1b)) {
    sVar2 = (short)(uVar5 - 0xac00);
    if ((ushort)((ushort)(sVar2 * 0x6db7) >> 2 | sVar2 * -0x4000) < 0x925) {
      *param_4 = (uVar5 + param_3) - 0x11a7;
      return 1;
    }
  }
  else {
    if ((uVar5 - 0x1100 < 0x13) && (param_3 - 0x1161 < 0x15)) {
      uVar5 = (uVar5 * 0x24c + param_3 * 0x1c) - 0x28469c;
      goto LAB_0043bf24;
    }
    if ((uVar5 < 0x800) && ((param_3 & 0xffffff80) == 0x300)) {
      uVar5 = (param_3 & 0x7f) << 0xe | uVar5 << 0x15;
      iVar4 = 0x27d;
      iVar6 = 0;
      while( true ) {
        while( true ) {
          uVar7 = (uint)(iVar4 + iVar6) >> 1;
          uVar3 = *(uint *)(_hb_ucd_dm2_u32_map + (ulong)uVar7 * 4) & 0xffffc000;
          if (uVar3 <= uVar5) break;
          iVar4 = uVar7 - 1;
          if (iVar4 < iVar6) {
            return 0;
          }
        }
        if (uVar5 <= uVar3) break;
        iVar6 = uVar7 + 1;
        if (iVar4 < iVar6) {
          return 0;
        }
      }
      uVar5 = *(uint *)(_hb_ucd_dm2_u32_map + (ulong)uVar7 * 4) & 0x3fff;
      if (uVar5 == 0) {
        return 0;
      }
      goto LAB_0043bf24;
    }
  }
  uVar8 = (ulong)param_3 << 0x15 | param_2 << 0x2a;
  iVar4 = 0x197;
  iVar6 = 0;
  while( true ) {
    while( true ) {
      uVar5 = (uint)(iVar4 + iVar6) >> 1;
      uVar1 = *(ulong *)(_hb_ucd_dm2_u64_map + (ulong)uVar5 * 8);
      if ((uVar1 & 0x7fffffffffe00000) <= uVar8) break;
      iVar4 = uVar5 - 1;
      if (iVar4 < iVar6) {
        return 0;
      }
    }
    if (uVar8 <= (uVar1 & 0x7fffffffffe00000)) break;
    iVar6 = uVar5 + 1;
    if (iVar4 < iVar6) {
      return 0;
    }
  }
  uVar5 = (uint)uVar1 & 0x1fffff;
  if ((uVar1 & 0x1fffff) == 0) {
    return 0;
  }
LAB_0043bf24:
  *param_4 = uVar5;
  return 1;
}


