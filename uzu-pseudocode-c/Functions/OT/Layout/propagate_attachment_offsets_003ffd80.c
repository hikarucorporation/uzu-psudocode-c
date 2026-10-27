// Function : propagate_attachment_offsets
// Namespace: OT:Layout
// Entry    : 003ffd80
// Prototype: undefined propagate_attachment_offsets(long param_1, undefined8 param_2, uint param_3, uint param_4, int param_5)
// Body     : 003ffd80 - 003fff2f


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* OT::Layout::propagate_attachment_offsets(hb_glyph_position_t*, unsigned int, unsigned int,
   hb_direction_t, unsigned int) */

void __cdecl
OT::Layout::propagate_attachment_offsets
          (long param_1,undefined8 param_2,uint param_3,uint param_4,int param_5)

{
  uint uVar1;
  long lVar2;
  int *piVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  byte bVar6;
  short sVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  uint uVar11;
  long lVar12;
  ulong uVar13;
  int iVar14;
  int iVar15;
  
  uVar9 = (ulong)param_3;
  sVar7 = *(short *)(param_1 + 0x10 + uVar9 * 0x14);
  uVar11 = (uint)sVar7;
  if (uVar11 != 0) {
    bVar6 = *(byte *)(param_1 + 0x12 + uVar9 * 0x14);
    *(undefined2 *)(param_1 + uVar9 * 0x14 + 0x10) = 0;
    if ((param_5 != 0) && (uVar1 = uVar11 + param_3, uVar1 < (uint)param_2)) {
      propagate_attachment_offsets(param_1,param_2,uVar1,param_4,param_5 + -1);
      if ((bVar6 & 2) == 0) {
        uVar8 = (ulong)uVar1;
        lVar2 = param_1 + uVar9 * 0x14;
        uVar4 = *(undefined8 *)(param_1 + 8 + uVar8 * 0x14);
        uVar5 = *(undefined8 *)(param_1 + 8 + uVar9 * 0x14);
        iVar14 = (int)uVar5 + (int)uVar4;
        iVar15 = (int)((ulong)uVar5 >> 0x20) + (int)((ulong)uVar4 >> 0x20);
        *(int *)(param_1 + 8 + uVar9 * 0x14) = iVar14;
        *(int *)(param_1 + 0xc + uVar9 * 0x14) = iVar15;
        if ((param_4 & 0xfffffffd) == 4) {
          if (param_3 <= uVar1) {
            return;
          }
          uVar13 = ~uVar8;
          if ((param_3 - uVar1 & 1) != 0) {
            uVar4 = *(undefined8 *)(param_1 + uVar8 * 0x14);
            iVar14 = iVar14 - (int)uVar4;
            iVar15 = iVar15 - (int)((ulong)uVar4 >> 0x20);
            uVar8 = uVar8 + 1;
          }
          if (uVar13 + uVar9 != 0) {
            lVar12 = uVar9 - uVar8;
            puVar10 = (undefined8 *)(param_1 + uVar8 * 0x14);
            do {
              iVar14 = iVar14 - ((int)*(undefined8 *)((long)puVar10 + 0x14) + (int)*puVar10);
              iVar15 = iVar15 - ((int)((ulong)*(undefined8 *)((long)puVar10 + 0x14) >> 0x20) +
                                (int)((ulong)*puVar10 >> 0x20));
              puVar10 = puVar10 + 5;
              lVar12 = lVar12 + -2;
            } while (lVar12 != 0);
          }
        }
        else {
          if (param_3 + 1 <= uVar1 + 1) {
            return;
          }
          uVar9 = uVar8 + 1;
          if ((uVar11 & 1) != 0) {
            uVar4 = *(undefined8 *)(param_1 + uVar9 * 0x14);
            iVar14 = iVar14 + (int)uVar4;
            iVar15 = iVar15 + (int)((ulong)uVar4 >> 0x20);
            uVar9 = uVar8 + 2;
          }
          if (sVar7 != -1) {
            puVar10 = (undefined8 *)(param_1 + uVar9 * 0x14);
            do {
              iVar14 = (int)*(undefined8 *)((long)puVar10 + 0x14) + (int)*puVar10 + iVar14;
              iVar15 = (int)((ulong)*(undefined8 *)((long)puVar10 + 0x14) >> 0x20) +
                       (int)((ulong)*puVar10 >> 0x20) + iVar15;
              uVar11 = (int)uVar9 + 2;
              uVar9 = (ulong)uVar11;
              puVar10 = puVar10 + 5;
            } while (uVar11 < param_3 + 1);
          }
        }
        *(int *)(lVar2 + 8) = iVar14;
        *(int *)(lVar2 + 0xc) = iVar15;
      }
      else if ((param_4 & 0xfffffffe) == 4) {
        piVar3 = (int *)(param_1 + 0xc + uVar9 * 0x14);
        *piVar3 = *piVar3 + *(int *)(param_1 + 0xc + (ulong)uVar1 * 0x14);
      }
      else {
        piVar3 = (int *)(param_1 + 8 + uVar9 * 0x14);
        *piVar3 = *piVar3 + *(int *)(param_1 + 8 + (ulong)uVar1 * 0x14);
      }
    }
  }
  return;
}


