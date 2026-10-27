// Function : reorder_marks_hebrew
// Namespace: 
// Entry    : 00423790
// Prototype: undefined reorder_marks_hebrew(undefined8 param_1, hb_buffer_t * param_2, int param_3, uint param_4)
// Body     : 00423790 - 0042389e


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* reorder_marks_hebrew(hb_ot_shape_plan_t const*, hb_buffer_t*, unsigned int, unsigned int) */

void __cdecl reorder_marks_hebrew(undefined8 param_1,hb_buffer_t *param_2,int param_3,uint param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ushort uVar3;
  undefined4 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  char cVar9;
  uint uVar10;
  uint uVar11;
  ushort *puVar12;
  ulong uVar13;
  ulong uVar14;
  
  if (param_3 + 2U < param_4) {
    lVar5 = *(long *)(param_2 + 0x70);
    uVar13 = (ulong)(param_3 + 2U);
    puVar12 = (ushort *)(lVar5 + uVar13 * 0x14 + 0x10);
    uVar11 = param_3 + 3;
    do {
      uVar14 = (ulong)(uVar11 - 2);
      uVar3 = *(ushort *)(lVar5 + 0x10 + uVar14 * 0x14);
      uVar10 = (uint)*(ushort *)(lVar5 + 0x10 + (ulong)((int)uVar13 - 2) * 0x14);
      if (((((0x1c00U >> (uVar10 & 0x1f) & 1) != 0) && ((uVar10 & 0xfe00) == 0x1400)) &&
          ((1 << ((byte)uVar3 & 0x1f) & 0x1c00U) != 0)) && ((uVar3 & 0xfe00) == 0x1600)) {
        cVar9 = (char)(*puVar12 >> 8);
        if ((0x1c00U >> (*puVar12 & 0x1f) & 1) == 0) {
          cVar9 = '\0';
        }
        if ((cVar9 == '\x19') || (cVar9 == -0x24)) {
          uVar13 = uVar13 & 0xffffffff;
          hb_buffer_t::merge_clusters_impl(param_2,uVar11 - 2,uVar11);
          uVar4 = *(undefined4 *)(lVar5 + 0x10 + uVar14 * 0x14);
          puVar1 = (undefined8 *)(lVar5 + uVar14 * 0x14);
          uVar6 = *puVar1;
          uVar7 = puVar1[1];
          *(undefined4 *)(lVar5 + 0x10 + uVar14 * 0x14) =
               *(undefined4 *)(lVar5 + 0x10 + uVar13 * 0x14);
          puVar1 = (undefined8 *)(lVar5 + uVar13 * 0x14);
          uVar8 = puVar1[1];
          puVar2 = (undefined8 *)(lVar5 + uVar14 * 0x14);
          *puVar2 = *puVar1;
          puVar2[1] = uVar8;
          *(undefined4 *)(lVar5 + 0x10 + uVar13 * 0x14) = uVar4;
          puVar1 = (undefined8 *)(lVar5 + uVar13 * 0x14);
          *puVar1 = uVar6;
          puVar1[1] = uVar7;
          return;
        }
      }
      uVar13 = uVar13 + 1;
      puVar12 = puVar12 + 10;
      uVar11 = uVar11 + 1;
    } while (param_4 != (uint)uVar13);
  }
  return;
}


