// Function : hb_aat_layout_remove_deleted_glyphs
// Namespace: 
// Entry    : 003ed410
// Prototype: undefined hb_aat_layout_remove_deleted_glyphs(hb_buffer_t * param_1)
// Body     : 003ed410 - 003ed541


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* hb_aat_layout_remove_deleted_glyphs(hb_buffer_t*) */

void __cdecl hb_aat_layout_remove_deleted_glyphs(hb_buffer_t *param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  uint *puVar9;
  ulong uVar10;
  undefined4 uVar11;
  int iVar12;
  ulong uVar13;
  ulong uVar14;
  
  uVar14 = (ulong)*(uint *)(param_1 + 0x60);
  if (uVar14 == 0) {
    uVar11 = 0;
  }
  else {
    uVar10 = 0;
    uVar13 = 0;
    do {
      lVar5 = *(long *)(param_1 + 0x70);
      iVar12 = (int)uVar13;
      if (*(int *)(lVar5 + uVar10 * 0x14) == 0xffff) {
        uVar2 = *(uint *)(lVar5 + 8 + uVar10 * 0x14);
        if (uVar10 + 1 < uVar14) {
          if (uVar2 != *(uint *)(lVar5 + 8 + (uVar10 + 1) * 0x14)) {
            if (iVar12 != 0) goto LAB_003ed4d5;
            hb_buffer_t::merge_clusters_impl(param_1,(uint)uVar10,(uint)uVar10 + 2);
            uVar13 = 0;
          }
        }
        else if (iVar12 == 0) {
          uVar13 = 0;
        }
        else {
LAB_003ed4d5:
          uVar3 = *(uint *)(lVar5 + 8 + (ulong)(iVar12 - 1) * 0x14);
          if (uVar2 < uVar3) {
            uVar4 = *(uint *)(lVar5 + 4 + uVar10 * 0x14);
            puVar9 = (uint *)(lVar5 + uVar13 * 0x14 + -0xc);
            uVar8 = uVar13;
            do {
              if (*puVar9 != uVar3) break;
              uVar8 = uVar8 - 1;
              puVar9[-1] = puVar9[-1] & 0xfffffff8 | uVar4 & 7;
              *puVar9 = uVar2;
              puVar9 = puVar9 + -5;
            } while (uVar8 != 0);
          }
        }
      }
      else {
        if (uVar10 != uVar13) {
          puVar1 = (undefined8 *)(lVar5 + uVar10 * 0x14);
          lVar6 = uVar13 * 0x14;
          *(undefined4 *)(lVar5 + 0x10 + lVar6) = *(undefined4 *)(puVar1 + 2);
          uVar7 = puVar1[1];
          *(undefined8 *)(lVar5 + lVar6) = *puVar1;
          ((undefined8 *)(lVar5 + lVar6))[1] = uVar7;
          lVar5 = *(long *)(param_1 + 0x80);
          *(undefined4 *)(lVar5 + 0x10 + lVar6) = *(undefined4 *)(lVar5 + 0x10 + uVar10 * 0x14);
          puVar1 = (undefined8 *)(lVar5 + uVar10 * 0x14);
          uVar7 = puVar1[1];
          *(undefined8 *)(lVar5 + lVar6) = *puVar1;
          ((undefined8 *)(lVar5 + lVar6))[1] = uVar7;
        }
        uVar13 = (ulong)(iVar12 + 1);
      }
      uVar10 = uVar10 + 1;
      uVar11 = (undefined4)uVar13;
    } while (uVar10 != uVar14);
  }
  *(undefined4 *)(param_1 + 0x60) = uVar11;
  return;
}


