// Function : match_class
// Namespace: OT
// Entry    : 0040a380
// Prototype: undefined8 match_class(uint * param_1, int param_2, ushort * param_3)
// Body     : 0040a380 - 0040a461


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* OT::match_class(hb_glyph_info_t&, unsigned int, void const*) */

undefined8 __cdecl OT::match_class(uint *param_1,int param_2,ushort *param_3)

{
  ulong uVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  ushort *puVar5;
  uint uVar6;
  int iVar7;
  
  uVar6 = *param_1;
  uVar2 = *param_3 << 8 | *param_3 >> 8;
  if (uVar2 == 2) {
    uVar2 = param_3[1];
    puVar5 = &_hb_Null_OT_RangeRecord;
    if (uVar2 != 0) {
      iVar7 = (ushort)(uVar2 << 8 | uVar2 >> 8) - 1;
      iVar4 = 0;
      do {
        while( true ) {
          uVar3 = (uint)(iVar7 + iVar4) >> 1;
          uVar1 = (ulong)uVar3;
          if (uVar6 < (ushort)(param_3[uVar1 * 3 + 2] << 8 | param_3[uVar1 * 3 + 2] >> 8)) break;
          if (uVar6 <= (ushort)(param_3[uVar1 * 3 + 3] << 8 | param_3[uVar1 * 3 + 3] >> 8)) {
            puVar5 = param_3 + uVar1 * 3 + 2;
            goto LAB_0040a444;
          }
          iVar4 = uVar3 + 1;
          if (iVar7 < iVar4) goto LAB_0040a444;
        }
        iVar7 = uVar3 - 1;
      } while (iVar4 <= iVar7);
    }
LAB_0040a444:
    puVar5 = puVar5 + 2;
  }
  else {
    uVar1 = 0;
    if (uVar2 != 1) goto LAB_0040a453;
    uVar6 = uVar6 - (ushort)(param_3[1] << 8 | param_3[1] >> 8);
    if (uVar6 < (ushort)(param_3[2] << 8 | param_3[2] >> 8)) {
      puVar5 = param_3 + (ulong)uVar6 + 3;
    }
    else {
      puVar5 = (ushort *)&_hb_NullPool;
    }
  }
  uVar1 = (ulong)(ushort)(*puVar5 << 8 | *puVar5 >> 8);
LAB_0040a453:
  return CONCAT71((int7)(uVar1 >> 8),(int)uVar1 == param_2);
}


