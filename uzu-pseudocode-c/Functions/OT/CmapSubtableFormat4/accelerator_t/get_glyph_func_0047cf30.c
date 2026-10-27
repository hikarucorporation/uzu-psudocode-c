// Function : get_glyph_func
// Namespace: OT:CmapSubtableFormat4:accelerator_t
// Entry    : 0047cf30
// Prototype: undefined8 get_glyph_func(long * param_1, uint param_2, uint * param_3)
// Body     : 0047cf30 - 0047d004


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* OT::CmapSubtableFormat4::accelerator_t::get_glyph_func(void const*, unsigned int, unsigned int*)
    */

undefined8 __cdecl
OT::CmapSubtableFormat4::accelerator_t::get_glyph_func(long *param_1,uint param_2,uint *param_3)

{
  ushort uVar1;
  ushort uVar2;
  ulong uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  
  uVar4 = *(uint *)(param_1 + 5);
  iVar6 = 0;
  if ((int)uVar4 < 1) {
    return 0;
  }
  iVar5 = uVar4 - 1;
  while( true ) {
    while( true ) {
      uVar7 = (uint)(iVar5 + iVar6) >> 1;
      uVar3 = (ulong)(iVar5 + iVar6 & 0xfffffffe);
      uVar1 = *(ushort *)(*param_1 + uVar3);
      if (param_2 <= (ushort)(uVar1 << 8 | uVar1 >> 8)) break;
      iVar6 = uVar7 + 1;
      if (iVar5 < iVar6) {
        return 0;
      }
    }
    uVar1 = *(ushort *)(uVar3 + *param_1 + 2 + (ulong)uVar4 * 2);
    if ((ushort)(uVar1 << 8 | uVar1 >> 8) <= param_2) break;
    iVar5 = uVar7 - 1;
    if (iVar5 < iVar6) {
      return 0;
    }
  }
  uVar3 = (ulong)uVar7;
  uVar1 = *(ushort *)(param_1[3] + uVar3 * 2);
  if (uVar1 != 0) {
    uVar2 = *(ushort *)(param_1[1] + uVar3 * 2);
    uVar4 = ((param_2 - uVar4) + uVar7 + (uint)((ushort)(uVar1 << 8 | uVar1 >> 8) >> 1)) -
            (uint)(ushort)(uVar2 << 8 | uVar2 >> 8);
    if (*(uint *)((long)param_1 + 0x2c) <= uVar4) {
      return 0;
    }
    uVar1 = *(ushort *)(param_1[4] + (ulong)uVar4 * 2);
    if (uVar1 == 0) {
      return 0;
    }
    param_2 = (uint)(ushort)(uVar1 << 8 | uVar1 >> 8);
  }
  uVar1 = *(ushort *)(param_1[2] + uVar3 * 2);
  uVar4 = (ushort)(uVar1 << 8 | uVar1 >> 8) + param_2 & 0xffff;
  if (uVar4 == 0) {
    return 0;
  }
  *param_3 = uVar4;
  return CONCAT71((uint7)(uint3)(uVar4 >> 8),1);
}


