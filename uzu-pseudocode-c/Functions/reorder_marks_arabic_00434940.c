// Function : reorder_marks_arabic
// Namespace: 
// Entry    : 00434940
// Prototype: undefined reorder_marks_arabic(undefined8 param_1, hb_buffer_t * param_2, uint param_3, uint param_4)
// Body     : 00434940 - 00434edb


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* reorder_marks_arabic(hb_ot_shape_plan_t const*, hb_buffer_t*, unsigned int, unsigned int) */

void __cdecl reorder_marks_arabic(undefined8 param_1,hb_buffer_t *param_2,uint param_3,uint param_4)

{
  int *piVar1;
  void *pvVar2;
  ushort uVar3;
  int iVar4;
  long lVar5;
  size_t __n;
  uint *puVar6;
  ulong uVar7;
  ushort *puVar8;
  uint uVar9;
  int *piVar10;
  long lVar11;
  uint uVar12;
  uint uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  uint uVar17;
  ulong uVar18;
  undefined1 local_2b8 [648];
  
  lVar5 = *(long *)(param_2 + 0x70);
  uVar16 = (ulong)param_4;
  uVar15 = (ulong)param_3;
  if (param_3 < param_4) {
    uVar15 = (ulong)param_3;
    puVar6 = (uint *)(lVar5 + uVar15 * 0x14 + 0x10);
    while (((0x1c00U >> (*puVar6 & 0x1f) & 1) == 0 || ((*puVar6 & 0xffff) < 0xdc00))) {
      uVar15 = uVar15 + 1;
      puVar6 = puVar6 + 5;
      if (uVar16 == uVar15) {
        return;
      }
    }
  }
  uVar9 = (uint)uVar15;
  if (uVar9 == param_4) {
    return;
  }
  uVar18 = uVar15 & 0xffffffff;
  uVar3 = *(ushort *)(lVar5 + 0x10 + uVar18 * 0x14);
  uVar12 = (uint)uVar3;
  if ((uVar12 < 0xdd00 || (0x1c00U >> (uVar12 & 0x1f) & 1) == 0) && (uVar9 < param_4)) {
    piVar1 = (int *)(lVar5 + uVar18 * 0x14);
    if (((1 << ((byte)uVar3 & 0x1f) & 0x1c00U) != 0) && ((uVar12 & 0xff00) == 0xdc00)) {
      piVar10 = piVar1;
      while( true ) {
        iVar4 = *piVar10;
        if ((((0x29 < iVar4 - 0x8caU) ||
             ((0x2000000023bU >> ((ulong)(iVar4 - 0x8caU) & 0x3f) & 1) == 0)) &&
            ((0xc < iVar4 - 0x6dcU || ((0x1881U >> (iVar4 - 0x6dcU & 0x1f) & 1) == 0)))) &&
           ((4 < iVar4 - 0x654U || ((0x13U >> (iVar4 - 0x654U & 0x1f) & 1) == 0)))) break;
        if (uVar16 - 1 == uVar18) {
          uVar12 = param_4 - uVar9;
          uVar18 = uVar16;
          goto joined_r0x00434ad8;
        }
        puVar8 = (ushort *)(piVar10 + 9);
        uVar18 = uVar18 + 1;
        if (((0x1c00U >> (*puVar8 & 0x1f) & 1) == 0) ||
           (piVar10 = piVar10 + 5, (*puVar8 & 0xff00) != 0xdc00)) break;
      }
    }
    uVar12 = (int)uVar18 - uVar9;
joined_r0x00434ad8:
    if (uVar12 != 0) {
      uVar17 = (uint)uVar18;
      if (1 < uVar17 - param_3) {
        hb_buffer_t::merge_clusters_impl(param_2,param_3,uVar17);
      }
      memcpy(local_2b8,piVar1,(ulong)uVar12 * 0x14);
      uVar13 = (param_3 - uVar9) + uVar17;
      uVar14 = (ulong)uVar13;
      uVar15 = (ulong)param_3;
      pvVar2 = (void *)(lVar5 + uVar15 * 0x14);
      memmove((void *)(lVar5 + uVar14 * 0x14),pvVar2,(ulong)(uVar9 - param_3) * 0x14);
      memcpy(pvVar2,local_2b8,(ulong)uVar12 * 0x14);
      if (param_3 < uVar13) {
        uVar7 = ~uVar15;
        if ((uVar13 - param_3 & 1) != 0) {
          uVar3 = *(ushort *)(lVar5 + 0x10 + uVar15 * 0x14);
          if ((0x1c00U >> (uVar3 & 0x1f) & 1) != 0) {
            *(ushort *)(lVar5 + uVar15 * 0x14 + 0x10) = uVar3 & 0xff | 0x1900;
          }
          uVar15 = uVar15 + 1;
        }
        param_3 = uVar13;
        if (uVar7 + uVar14 != 0) {
          lVar11 = uVar14 - uVar15;
          puVar8 = (ushort *)(lVar5 + uVar15 * 0x14 + 0x24);
          do {
            if ((0x1c00U >> (puVar8[-10] & 0x1f) & 1) != 0) {
              puVar8[-10] = puVar8[-10] & 0xff | 0x1900;
            }
            if ((0x1c00U >> (*puVar8 & 0x1f) & 1) != 0) {
              *puVar8 = *puVar8 & 0xff | 0x1900;
            }
            puVar8 = puVar8 + 0x14;
            lVar11 = lVar11 + -2;
          } while (lVar11 != 0);
        }
      }
      goto joined_r0x00434ac5;
    }
  }
  uVar18 = uVar15 & 0xffffffff;
  uVar17 = uVar9;
joined_r0x00434ac5:
  if (uVar17 < param_4) {
    uVar18 = (ulong)uVar17;
    puVar6 = (uint *)(lVar5 + uVar18 * 0x14 + 0x10);
    do {
      if (((0x1c00U >> (*puVar6 & 0x1f) & 1) != 0) && (0xe5ff < (*puVar6 & 0xffff)))
      goto LAB_00434c93;
      uVar18 = uVar18 + 1;
      puVar6 = puVar6 + 5;
    } while (uVar16 != uVar18);
  }
  else {
LAB_00434c93:
    uVar9 = (uint)uVar18;
    if (uVar9 != param_4) {
      uVar18 = uVar18 & 0xffffffff;
      uVar3 = *(ushort *)(lVar5 + 0x10 + uVar18 * 0x14);
      uVar12 = (uint)uVar3;
      if ((uVar12 < 0xe700 || (0x1c00U >> (uVar12 & 0x1f) & 1) == 0) && (uVar9 < param_4)) {
        piVar1 = (int *)(lVar5 + uVar18 * 0x14);
        if (((1 << ((byte)uVar3 & 0x1f) & 0x1c00U) != 0) && ((uVar12 & 0xff00) == 0xe600)) {
          piVar10 = piVar1;
          while( true ) {
            iVar4 = *piVar10;
            if ((((0x29 < iVar4 - 0x8caU) ||
                 ((0x2000000023bU >> ((ulong)(iVar4 - 0x8caU) & 0x3f) & 1) == 0)) &&
                ((0xc < iVar4 - 0x6dcU || ((0x1881U >> (iVar4 - 0x6dcU & 0x1f) & 1) == 0)))) &&
               ((4 < iVar4 - 0x654U || ((0x13U >> (iVar4 - 0x654U & 0x1f) & 1) == 0))))
            goto LAB_00434d9e;
            if (uVar16 - 1 == uVar18) break;
            puVar8 = (ushort *)(piVar10 + 9);
            uVar18 = uVar18 + 1;
            if (((0x1c00U >> (*puVar8 & 0x1f) & 1) == 0) ||
               (piVar10 = piVar10 + 5, (*puVar8 & 0xff00) != 0xe600)) goto LAB_00434d9e;
          }
          uVar18 = uVar16;
        }
LAB_00434d9e:
        uVar12 = (uint)uVar18;
        if (uVar12 - uVar9 != 0) {
          if (1 < uVar12 - param_3) {
            hb_buffer_t::merge_clusters_impl(param_2,param_3,uVar12);
          }
          __n = (ulong)(uVar12 - uVar9) * 0x14;
          memcpy(local_2b8,piVar1,__n);
          uVar12 = (param_3 - uVar9) + uVar12;
          uVar15 = (ulong)uVar12;
          uVar16 = (ulong)param_3;
          pvVar2 = (void *)(lVar5 + uVar16 * 0x14);
          memmove((void *)(lVar5 + uVar15 * 0x14),pvVar2,(ulong)(uVar9 - param_3) * 0x14);
          memcpy(pvVar2,local_2b8,__n);
          if (param_3 < uVar12) {
            uVar18 = ~uVar16;
            if ((uVar12 - param_3 & 1) != 0) {
              uVar3 = *(ushort *)(lVar5 + 0x10 + uVar16 * 0x14);
              if ((0x1c00U >> (uVar3 & 0x1f) & 1) != 0) {
                *(ushort *)(lVar5 + uVar16 * 0x14 + 0x10) = uVar3 & 0xff | 0x1a00;
              }
              uVar16 = uVar16 + 1;
            }
            if (uVar18 + uVar15 != 0) {
              lVar11 = uVar15 - uVar16;
              puVar8 = (ushort *)(lVar5 + uVar16 * 0x14 + 0x24);
              do {
                if ((0x1c00U >> (puVar8[-10] & 0x1f) & 1) != 0) {
                  puVar8[-10] = puVar8[-10] & 0xff | 0x1a00;
                }
                if ((0x1c00U >> (*puVar8 & 0x1f) & 1) != 0) {
                  *puVar8 = *puVar8 & 0xff | 0x1a00;
                }
                puVar8 = puVar8 + 0x14;
                lVar11 = lVar11 + -2;
              } while (lVar11 != 0);
            }
          }
        }
      }
    }
  }
  return;
}


