// Function : match_class_cached1
// Namespace: OT
// Entry    : 0040a270
// Prototype: undefined8 match_class_cached1(uint * param_1, uint param_2, ushort * param_3)
// Body     : 0040a270 - 0040a378


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* OT::match_class_cached1(hb_glyph_info_t&, unsigned int, void const*) */

undefined8 __cdecl OT::match_class_cached1(uint *param_1,uint param_2,ushort *param_3)

{
  ushort uVar1;
  ulong uVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  ushort *puVar7;
  int iVar8;
  
  uVar2 = (ulong)*(byte *)((long)param_1 + 0xf);
  uVar4 = *(byte *)((long)param_1 + 0xf) & 0xf;
  if ((char)uVar4 != '\x0f') goto LAB_0040a369;
  uVar4 = *param_1;
  uVar3 = *param_3 << 8 | *param_3 >> 8;
  if (uVar3 == 2) {
    uVar3 = param_3[1];
    puVar7 = &_hb_Null_OT_RangeRecord;
    if (uVar3 != 0) {
      iVar8 = (ushort)(uVar3 << 8 | uVar3 >> 8) - 1;
      iVar6 = 0;
      do {
        while( true ) {
          uVar5 = (uint)(iVar8 + iVar6) >> 1;
          uVar2 = (ulong)uVar5;
          if (uVar4 < (ushort)(param_3[uVar2 * 3 + 2] << 8 | param_3[uVar2 * 3 + 2] >> 8)) break;
          if (uVar4 <= (ushort)(param_3[uVar2 * 3 + 3] << 8 | param_3[uVar2 * 3 + 3] >> 8)) {
            puVar7 = param_3 + uVar2 * 3 + 2;
            goto LAB_0040a348;
          }
          iVar6 = uVar5 + 1;
          if (iVar8 < iVar6) goto LAB_0040a348;
        }
        iVar8 = uVar5 - 1;
      } while (iVar6 <= iVar8);
    }
LAB_0040a348:
    puVar7 = puVar7 + 2;
LAB_0040a34c:
    uVar3 = *puVar7;
    uVar1 = uVar3 << 8 | uVar3 >> 8;
    uVar2 = (ulong)uVar1;
    uVar4 = (uint)uVar1;
    if (0xe < uVar1) goto LAB_0040a369;
    uVar2 = (ulong)CONCAT11((char)uVar3,*(undefined1 *)((long)param_1 + 0xf));
  }
  else {
    if (uVar3 == 1) {
      uVar4 = uVar4 - (ushort)(param_3[1] << 8 | param_3[1] >> 8);
      if (uVar4 < (ushort)(param_3[2] << 8 | param_3[2] >> 8)) {
        puVar7 = param_3 + (ulong)uVar4 + 3;
      }
      else {
        puVar7 = (ushort *)&_hb_NullPool;
      }
      goto LAB_0040a34c;
    }
    uVar4 = 0;
  }
  uVar2 = uVar2 & 0xfffffffffffffff0;
  *(byte *)((long)param_1 + 0xf) = (byte)uVar4 | (byte)uVar2;
LAB_0040a369:
  return CONCAT71((int7)(uVar2 >> 8),uVar4 == param_2);
}


