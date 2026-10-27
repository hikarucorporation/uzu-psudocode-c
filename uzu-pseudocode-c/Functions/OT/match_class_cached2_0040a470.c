// Function : match_class_cached2
// Namespace: OT
// Entry    : 0040a470
// Prototype: undefined8 match_class_cached2(uint * param_1, int param_2, ushort * param_3)
// Body     : 0040a470 - 0040a57c


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* OT::match_class_cached2(hb_glyph_info_t&, unsigned int, void const*) */

undefined8 __cdecl OT::match_class_cached2(uint *param_1,int param_2,ushort *param_3)

{
  ushort uVar1;
  ulong uVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  ushort *puVar6;
  uint uVar7;
  int iVar8;
  
  bVar3 = *(byte *)((long)param_1 + 0xf);
  uVar2 = (ulong)(bVar3 >> 4);
  if (bVar3 >> 4 != 0xf) goto LAB_0040a56d;
  uVar7 = *param_1;
  uVar1 = *param_3 << 8 | *param_3 >> 8;
  if (uVar1 == 2) {
    uVar1 = param_3[1];
    puVar6 = &_hb_Null_OT_RangeRecord;
    if (uVar1 != 0) {
      iVar8 = (ushort)(uVar1 << 8 | uVar1 >> 8) - 1;
      iVar5 = 0;
      do {
        while( true ) {
          uVar4 = (uint)(iVar8 + iVar5) >> 1;
          uVar2 = (ulong)uVar4;
          if (uVar7 < (ushort)(param_3[uVar2 * 3 + 2] << 8 | param_3[uVar2 * 3 + 2] >> 8)) break;
          if (uVar7 <= (ushort)(param_3[uVar2 * 3 + 3] << 8 | param_3[uVar2 * 3 + 3] >> 8)) {
            puVar6 = param_3 + uVar2 * 3 + 2;
            goto LAB_0040a548;
          }
          iVar5 = uVar4 + 1;
          if (iVar8 < iVar5) goto LAB_0040a548;
        }
        iVar8 = uVar4 - 1;
      } while (iVar5 <= iVar8);
    }
LAB_0040a548:
    puVar6 = puVar6 + 2;
LAB_0040a54c:
    uVar1 = *puVar6 << 8 | *puVar6 >> 8;
    uVar2 = (ulong)uVar1;
    if (0xe < uVar1) goto LAB_0040a56d;
    bVar3 = *(byte *)((long)param_1 + 0xf);
  }
  else {
    if (uVar1 == 1) {
      uVar7 = uVar7 - (ushort)(param_3[1] << 8 | param_3[1] >> 8);
      if (uVar7 < (ushort)(param_3[2] << 8 | param_3[2] >> 8)) {
        puVar6 = param_3 + (ulong)uVar7 + 3;
      }
      else {
        puVar6 = (ushort *)&_hb_NullPool;
      }
      goto LAB_0040a54c;
    }
    uVar2 = 0;
  }
  *(byte *)((long)param_1 + 0xf) = (char)uVar2 << 4 | bVar3 & 0xf;
LAB_0040a56d:
  return CONCAT71((int7)(uVar2 >> 8),(int)uVar2 == param_2);
}


