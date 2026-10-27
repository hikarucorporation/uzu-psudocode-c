// Function : bsearch_impl<OT::EncodingRecord>
// Namespace: hb_sorted_array_t_OT__EncodingRecord_const_
// Entry    : 0047cd40
// Prototype: ulong bsearch_impl<OT::EncodingRecord>(long param_1, int param_2, ushort * param_3, uint * param_4)
// Body     : 0047cd40 - 0047ce80


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* bool hb_sorted_array_t<OT::EncodingRecord
   const>::bsearch_impl<OT::EncodingRecord>(OT::EncodingRecord const&, unsigned int*) const */

ulong __cdecl
hb_sorted_array_t<OT::EncodingRecord_const>::bsearch_impl<OT::EncodingRecord>
          (long param_1,int param_2,ushort *param_3,uint *param_4)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ulong uVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  uint uVar9;
  uint uVar10;
  ushort uVar11;
  bool bVar12;
  
  if (param_2 < 1) {
    uVar5 = 0;
    uVar6 = 0;
  }
  else {
    uVar10 = param_2 - 1;
    uVar1 = *param_3;
    uVar2 = param_3[1];
    uVar11 = uVar1 << 8 | uVar1 >> 8;
    if (uVar2 == 0xffff) {
      uVar6 = uVar10 >> 1;
      uVar8 = (ulong)uVar6;
      uVar2 = *(ushort *)(param_1 + uVar8 * 8);
      uVar4 = uVar2 << 8 | uVar2 >> 8;
      uVar5 = (ulong)uVar4;
      bVar12 = uVar11 < uVar4;
      if ((bVar12) || (uVar5 = CONCAT71((uint7)(byte)uVar2,1), uVar2 != uVar1)) {
        uVar7 = 0;
        do {
          if (bVar12) {
            uVar10 = (int)uVar8 - 1;
            if ((int)uVar10 < (int)uVar7) goto LAB_0047ce6f;
          }
          else {
            uVar7 = (int)uVar8 + 1;
            if ((int)uVar10 < (int)uVar7) {
LAB_0047ce6f:
              uVar6 = uVar7;
              break;
            }
          }
          uVar6 = uVar7 + uVar10 >> 1;
          uVar8 = (ulong)uVar6;
          uVar2 = *(ushort *)(param_1 + uVar8 * 8);
          uVar5 = (ulong)uVar2;
          bVar12 = uVar11 < (ushort)(uVar2 << 8 | uVar2 >> 8);
        } while ((bVar12) || (uVar2 != uVar1));
        uVar5 = CONCAT71((int7)(uVar5 >> 8),(int)uVar7 <= (int)uVar10);
      }
    }
    else {
      uVar7 = 0;
LAB_0047cd8a:
      do {
        uVar6 = uVar10 + uVar7 >> 1;
        uVar4 = *(ushort *)(param_1 + (ulong)uVar6 * 8);
        uVar3 = uVar4 << 8 | uVar4 >> 8;
        uVar5 = (ulong)uVar3;
        uVar9 = (uint)(uVar4 != uVar1);
        if (uVar11 < uVar3) {
          uVar9 = 0xffffffff;
        }
        if (uVar9 == 0) {
          uVar4 = *(ushort *)(param_1 + 2 + (ulong)uVar6 * 8);
          uVar5 = (ulong)uVar4;
          uVar9 = (uint)(uVar4 != uVar2);
          if ((ushort)(uVar2 << 8 | uVar2 >> 8) < (ushort)(uVar4 << 8 | uVar4 >> 8)) {
            uVar9 = 0xffffffff;
          }
          if (uVar9 != 0) goto LAB_0047cdd5;
LAB_0047ce6b:
          uVar5 = CONCAT71((int7)(uVar5 >> 8),1);
          goto LAB_0047ce78;
        }
LAB_0047cdd5:
        if ((int)uVar9 < 0) {
          uVar10 = uVar6 - 1;
          if ((int)uVar10 < (int)uVar7) break;
          goto LAB_0047cd8a;
        }
        if (uVar9 == 0) goto LAB_0047ce6b;
        uVar7 = uVar6 + 1;
      } while ((int)uVar7 <= (int)uVar10);
      uVar5 = 0;
      uVar6 = uVar7;
    }
  }
LAB_0047ce78:
  *param_4 = uVar6;
  return uVar5;
}


