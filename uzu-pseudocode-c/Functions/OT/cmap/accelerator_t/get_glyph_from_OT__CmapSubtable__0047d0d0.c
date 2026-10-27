// Function : get_glyph_from<OT::CmapSubtable>
// Namespace: OT:cmap:accelerator_t
// Entry    : 0047d0d0
// Prototype: ulong get_glyph_from<OT::CmapSubtable>(ushort * param_1, uint param_2, uint * param_3)
// Body     : 0047d0d0 - 0047d0d4


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* bool OT::cmap::accelerator_t::get_glyph_from<OT::CmapSubtable>(void const*, unsigned int,
   unsigned int*) */

ulong __cdecl
OT::cmap::accelerator_t::get_glyph_from<OT::CmapSubtable>
          (ushort *param_1,uint param_2,uint *param_3)

{
  byte bVar1;
  ushort uVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  ushort uVar7;
  uint uVar8;
  int iVar9;
  uint *puVar10;
  ushort *puVar11;
  uint uVar12;
  int iVar13;
  bool bVar14;
  
  uVar7 = (ushort)_hb_NullPool;
  switch(*param_1 << 8 | *param_1 >> 8) {
  case 0:
    if ((param_2 < 0x100) &&
       (bVar1 = *(byte *)((long)param_1 + (ulong)param_2 + 6), uVar5 = (ulong)bVar1, bVar1 != 0)) {
LAB_0047d4ba:
      *param_3 = (uint)uVar5;
      return CONCAT71((int7)(uVar5 >> 8),1);
    }
    break;
  case 4:
    uVar7 = param_1[3] << 8 | param_1[3] >> 8;
    iVar13 = 0;
    if (uVar7 < 2) {
      return 0;
    }
    uVar12 = (uint)(uVar7 >> 1);
    uVar5 = (ulong)(uVar12 * 2);
    lVar3 = uVar5 * 3 + 0x10;
    iVar9 = uVar12 - 1;
    do {
      while( true ) {
        uVar8 = (uint)(iVar13 + iVar9) >> 1;
        uVar6 = (ulong)(iVar13 + iVar9 & 0xfffffffe);
        uVar7 = *(ushort *)((long)param_1 + uVar6 + 0xe);
        if ((ushort)(uVar7 << 8 | uVar7 >> 8) < param_2) break;
        uVar7 = *(ushort *)((long)param_1 + (ulong)(uVar12 + 1) * 2 + uVar6 + 0xe);
        if ((ushort)(uVar7 << 8 | uVar7 >> 8) <= param_2) {
          uVar6 = (ulong)uVar8;
          uVar7 = *(ushort *)((long)param_1 + uVar6 * 2 + lVar3);
          if (uVar7 != 0) {
            uVar2 = *(ushort *)((long)param_1 + uVar6 * 2 + uVar5 + 0x10);
            uVar8 = ((param_2 - uVar12) + uVar8 + (uint)((ushort)(uVar7 << 8 | uVar7 >> 8) >> 1)) -
                    (uint)(ushort)(uVar2 << 8 | uVar2 >> 8);
            if (((uint)(ushort)(param_1[1] << 8 | param_1[1] >> 8) + uVar12 * -8) - 0x10 >> 1 <=
                uVar8) {
              return 0;
            }
            uVar7 = *(ushort *)((long)param_1 + (ulong)uVar8 * 2 + uVar5 + lVar3);
            if (uVar7 == 0) {
              return 0;
            }
            param_2 = (uint)(ushort)(uVar7 << 8 | uVar7 >> 8);
          }
          uVar12 = (ushort)(param_1[uVar5 + uVar6 + 8] << 8 | param_1[uVar5 + uVar6 + 8] >> 8) +
                   param_2 & 0xffff;
          uVar5 = (ulong)uVar12;
          if (uVar12 == 0) {
            return 0;
          }
          goto LAB_0047d4ba;
        }
        iVar9 = uVar8 - 1;
        if (iVar9 < iVar13) {
          return 0;
        }
      }
      iVar13 = uVar8 + 1;
    } while (iVar13 <= iVar9);
    break;
  case 6:
    uVar12 = param_2 - (ushort)(param_1[3] << 8 | param_1[3] >> 8);
    if (uVar12 < (ushort)(param_1[4] << 8 | param_1[4] >> 8)) {
      uVar7 = param_1[(ulong)uVar12 + 5];
    }
    goto joined_r0x0047d32b;
  case 10:
    uVar12 = *(uint *)(param_1 + 6);
    uVar8 = *(uint *)(param_1 + 8);
    uVar12 = param_2 - (uVar12 >> 0x18 | (uVar12 & 0xff0000) >> 8 | (uVar12 & 0xff00) << 8 |
                       uVar12 << 0x18);
    if (uVar12 < (uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 | uVar8 << 0x18))
    {
      uVar7 = param_1[(ulong)uVar12 + 10];
    }
joined_r0x0047d32b:
    uVar5 = (ulong)uVar7;
    if (uVar7 != 0) {
      *param_3 = (uint)(ushort)(uVar7 << 8 | uVar7 >> 8);
    }
    bVar14 = uVar7 == 0;
LAB_0047d44c:
    return CONCAT71((int7)(uVar5 >> 8),!bVar14);
  case 0xc:
    uVar12 = *(uint *)(param_1 + 6);
    uVar12 = uVar12 >> 0x18 | (uVar12 & 0xff0000) >> 8 | (uVar12 & 0xff00) << 8 | uVar12 << 0x18;
    puVar10 = &_hb_Null_OT_CmapSubtableLongGroup;
    if (0 < (int)uVar12) {
      iVar13 = uVar12 - 1;
      iVar9 = 0;
      do {
        while( true ) {
          uVar8 = (uint)(iVar13 + iVar9) >> 1;
          uVar5 = (ulong)uVar8;
          uVar12 = *(uint *)(param_1 + uVar5 * 6 + 8);
          if (param_2 < (uVar12 >> 0x18 | (uVar12 & 0xff0000) >> 8 | (uVar12 & 0xff00) << 8 |
                        uVar12 << 0x18)) break;
          uVar12 = *(uint *)(param_1 + uVar5 * 6 + 10);
          if (param_2 <=
              (uVar12 >> 0x18 | (uVar12 & 0xff0000) >> 8 | (uVar12 & 0xff00) << 8 | uVar12 << 0x18))
          {
            puVar10 = (uint *)(param_1 + uVar5 * 6 + 8);
            goto LAB_0047d409;
          }
          iVar9 = uVar8 + 1;
          if (iVar13 < iVar9) goto LAB_0047d409;
        }
        iVar13 = uVar8 - 1;
      } while (iVar9 <= iVar13);
    }
LAB_0047d409:
    uVar12 = *puVar10;
    uVar8 = puVar10[1];
    uVar4 = uVar12 >> 0x18 | (uVar12 & 0xff0000) >> 8 | (uVar12 & 0xff00) << 8 | uVar12 << 0x18;
    bVar14 = (uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 | uVar8 << 0x18) <
             uVar4;
    uVar12 = puVar10[2];
    uVar12 = (param_2 - uVar4) +
             (uVar12 >> 0x18 | (uVar12 & 0xff0000) >> 8 | (uVar12 & 0xff00) << 8 | uVar12 << 0x18);
    if (uVar12 != 0 && !bVar14) {
      *param_3 = uVar12;
    }
    return (ulong)CONCAT31((int3)(uVar4 >> 8),uVar12 == 0 || bVar14) ^ 1;
  case 0xd:
    uVar12 = *(uint *)(param_1 + 6);
    uVar12 = uVar12 >> 0x18 | (uVar12 & 0xff0000) >> 8 | (uVar12 & 0xff00) << 8 | uVar12 << 0x18;
    puVar11 = (ushort *)&_hb_Null_OT_CmapSubtableLongGroup;
    if (0 < (int)uVar12) {
      iVar13 = uVar12 - 1;
      iVar9 = 0;
      do {
        while( true ) {
          uVar8 = (uint)(iVar13 + iVar9) >> 1;
          uVar5 = (ulong)uVar8;
          uVar12 = *(uint *)(param_1 + uVar5 * 6 + 8);
          if (param_2 < (uVar12 >> 0x18 | (uVar12 & 0xff0000) >> 8 | (uVar12 & 0xff00) << 8 |
                        uVar12 << 0x18)) break;
          uVar12 = *(uint *)(param_1 + uVar5 * 6 + 10);
          if (param_2 <=
              (uVar12 >> 0x18 | (uVar12 & 0xff0000) >> 8 | (uVar12 & 0xff00) << 8 | uVar12 << 0x18))
          {
            puVar11 = param_1 + uVar5 * 6 + 8;
            goto LAB_0047d43c;
          }
          iVar9 = uVar8 + 1;
          if (iVar13 < iVar9) goto LAB_0047d43c;
        }
        iVar13 = uVar8 - 1;
      } while (iVar9 <= iVar13);
    }
LAB_0047d43c:
    uVar12 = *(uint *)(puVar11 + 4);
    uVar5 = (ulong)uVar12;
    if (uVar12 != 0) {
      *param_3 = uVar12 >> 0x18 | (uVar12 & 0xff0000) >> 8 | (uVar12 & 0xff00) << 8 | uVar12 << 0x18
      ;
    }
    bVar14 = uVar12 == 0;
    goto LAB_0047d44c;
  }
  return 0;
}


