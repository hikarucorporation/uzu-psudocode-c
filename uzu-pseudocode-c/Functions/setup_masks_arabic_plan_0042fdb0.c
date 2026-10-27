// Function : setup_masks_arabic_plan
// Namespace: 
// Entry    : 0042fdb0
// Prototype: undefined setup_masks_arabic_plan(long param_1, hb_buffer_t * param_2, int param_3)
// Body     : 0042fdb0 - 00430437


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* setup_masks_arabic_plan(arabic_shape_plan_t const*, hb_buffer_t*, hb_script_t) */

void __cdecl setup_masks_arabic_plan(long param_1,hb_buffer_t *param_2,int param_3)

{
  long lVar1;
  long lVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  undefined7 extraout_var;
  undefined7 extraout_var_00;
  undefined7 extraout_var_01;
  long lVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  byte *pbVar11;
  uint uVar12;
  undefined1 *puVar13;
  ulong uVar14;
  ulong uVar15;
  uint *puVar16;
  uint uVar17;
  ulong uVar18;
  ulong uVar19;
  
  param_2[0xb8] = (hb_buffer_t)((byte)param_2[0xb8] | 0x80);
  uVar19 = (ulong)*(uint *)(param_2 + 0x60);
  lVar6 = *(long *)(param_2 + 0x70);
  if (*(int *)(param_2 + 0xb0) == 0) {
    uVar14 = 0;
    if (uVar19 != 0) goto LAB_0042fe47;
LAB_004301e2:
    uVar7 = 0xffffffff;
  }
  else {
    uVar18 = 0;
    do {
      uVar7 = *(uint *)(param_2 + uVar18 * 4 + 0x88);
      lVar8 = *(long *)(param_2 + 0x10);
      uVar4 = (**(code **)(lVar8 + 0x28))(lVar8,uVar7,*(undefined8 *)(lVar8 + 0x68));
      cVar3 = get_joining_type(uVar7,uVar4);
      if ((int)CONCAT71(extraout_var,cVar3) != 7) {
        uVar14 = (ulong)*(ushort *)
                         (arabic_state_table + (CONCAT71(extraout_var,cVar3) & 0xffffffff) * 4 + 2);
        break;
      }
      uVar18 = uVar18 + 1;
      uVar14 = 0;
    } while (uVar18 < *(uint *)(param_2 + 0xb0));
    if (uVar19 == 0) goto LAB_004301e2;
LAB_0042fe47:
    uVar7 = 0xffffffff;
    uVar4 = 1;
    uVar18 = 0;
    do {
      lVar8 = lVar6 + uVar18 * 0x14;
      cVar3 = get_joining_type(*(uint *)(lVar6 + uVar18 * 0x14),
                               *(ushort *)(lVar6 + 0x10 + uVar18 * 0x14) & 0x1f);
      uVar5 = (uint)CONCAT71(extraout_var_00,cVar3);
      if (uVar5 == 7) {
        *(undefined1 *)(lVar8 + 0x13) = 7;
      }
      else {
        uVar10 = CONCAT71(extraout_var_00,cVar3) & 0xffffffff;
        lVar1 = uVar14 * 0x18;
        uVar17 = (uint)uVar18;
        if ((arabic_state_table[uVar10 * 4 + lVar1] == '\a') || (uVar7 == 0xffffffff)) {
          if (uVar7 == 0xffffffff) {
            if ((1 < uVar5) && (((byte)param_2[0x18] & 0x40) != 0)) {
              uVar7 = *(uint *)(param_2 + 0x60);
              uVar5 = uVar17 + 1;
              if (uVar7 < uVar17 + 1) {
                uVar5 = uVar7;
              }
              param_2[0xc0] = (hb_buffer_t)((byte)param_2[0xc0] | 0x20);
              if (param_2[0x5a] == (hb_buffer_t)0x0) {
                if (uVar5 != 0) {
                  lVar2 = *(long *)(param_2 + 0x70);
                  if ((ulong)uVar5 - 1 < 3) {
                    uVar14 = 0;
                  }
                  else {
                    uVar12 = uVar4;
                    if (uVar7 < uVar4) {
                      uVar12 = uVar7;
                    }
                    pbVar11 = (byte *)(lVar2 + 0x40);
                    uVar14 = 0;
                    do {
                      pbVar11[-0x3c] = pbVar11[-0x3c] | 2;
                      pbVar11[-0x28] = pbVar11[-0x28] | 2;
                      pbVar11[-0x14] = pbVar11[-0x14] | 2;
                      *pbVar11 = *pbVar11 | 2;
                      uVar14 = uVar14 + 4;
                      pbVar11 = pbVar11 + 0x50;
                    } while ((uVar12 & 0xfffffffc) != uVar14);
                  }
                  if ((uVar5 & 3) != 0) {
                    if (uVar4 <= uVar7) {
                      uVar7 = uVar4;
                    }
                    lVar9 = 0;
                    do {
                      pbVar11 = (byte *)(lVar2 + uVar14 * 0x14 + 4 + lVar9);
                      *pbVar11 = *pbVar11 | 2;
                      lVar9 = lVar9 + 0x14;
                    } while ((ulong)(uVar7 & 3) * 0x14 != lVar9);
                  }
                }
              }
              else {
                uVar12 = *(uint *)(param_2 + 100);
                if ((ulong)uVar12 != 0) {
                  lVar2 = *(long *)(param_2 + 0x78);
                  if ((ulong)uVar12 - 1 < 3) {
                    uVar14 = 0;
                  }
                  else {
                    pbVar11 = (byte *)(lVar2 + 0x40);
                    uVar14 = 0;
                    do {
                      pbVar11[-0x3c] = pbVar11[-0x3c] | 2;
                      pbVar11[-0x28] = pbVar11[-0x28] | 2;
                      pbVar11[-0x14] = pbVar11[-0x14] | 2;
                      *pbVar11 = *pbVar11 | 2;
                      uVar14 = uVar14 + 4;
                      pbVar11 = pbVar11 + 0x50;
                    } while ((uVar12 & 0xfffffffc) != uVar14);
                  }
                  if ((ulong)(uVar12 & 3) != 0) {
                    lVar9 = 0;
                    do {
                      pbVar11 = (byte *)(lVar2 + uVar14 * 0x14 + 4 + lVar9);
                      *pbVar11 = *pbVar11 | 2;
                      lVar9 = lVar9 + 0x14;
                    } while ((ulong)(uVar12 & 3) * 0x14 != lVar9);
                  }
                }
                uVar12 = *(uint *)(param_2 + 0x5c);
                uVar14 = (ulong)uVar12;
                if (uVar12 < uVar5) {
                  lVar2 = *(long *)(param_2 + 0x70);
                  uVar15 = ~uVar14;
                  if ((uVar5 - uVar12 & 3) != 0) {
                    pbVar11 = (byte *)(lVar2 + uVar14 * 0x14 + 4);
                    cVar3 = (char)uVar4;
                    if (uVar7 < uVar4) {
                      cVar3 = (char)uVar7;
                    }
                    lVar9 = 0;
                    do {
                      *pbVar11 = *pbVar11 | 2;
                      lVar9 = lVar9 + -1;
                      pbVar11 = pbVar11 + 0x14;
                    } while (-lVar9 != (ulong)((byte)(cVar3 - (char)uVar12) & 3));
                    uVar14 = uVar14 - lVar9;
                  }
                  if (2 < uVar15 + uVar5) {
                    if (uVar4 <= uVar7) {
                      uVar7 = uVar4;
                    }
                    lVar9 = uVar7 - uVar14;
                    pbVar11 = (byte *)(lVar2 + uVar14 * 0x14 + 0x40);
                    do {
                      pbVar11[-0x3c] = pbVar11[-0x3c] | 2;
                      pbVar11[-0x28] = pbVar11[-0x28] | 2;
                      pbVar11[-0x14] = pbVar11[-0x14] | 2;
                      *pbVar11 = *pbVar11 | 2;
                      pbVar11 = pbVar11 + 0x50;
                      lVar9 = lVar9 + -4;
                    } while (lVar9 != 0);
                  }
                }
              }
            }
          }
          else if (((1 < uVar5) || ((int)uVar14 - 2U < 4)) && (((byte)param_2[0x18] & 0x40) != 0)) {
            uVar5 = uVar17 + 1;
            if (*(uint *)(param_2 + 0x60) <= uVar18) {
              uVar5 = *(uint *)(param_2 + 0x60);
            }
            param_2[0xc0] = (hb_buffer_t)((byte)param_2[0xc0] | 0x20);
            uVar12 = uVar5 - uVar7;
            if (uVar7 <= uVar5 && uVar12 != 0) {
              lVar2 = *(long *)(param_2 + 0x70);
              uVar14 = (ulong)uVar7;
              uVar15 = ~uVar14;
              if ((uVar12 & 3) != 0) {
                pbVar11 = (byte *)(lVar2 + uVar14 * 0x14 + 4);
                lVar9 = 0;
                do {
                  *pbVar11 = *pbVar11 | 2;
                  lVar9 = lVar9 + -1;
                  pbVar11 = pbVar11 + 0x14;
                } while (-lVar9 != ((ulong)uVar12 & 3));
                uVar14 = uVar14 - lVar9;
              }
              if (2 < uVar15 + uVar5) {
                lVar9 = uVar5 - uVar14;
                pbVar11 = (byte *)(lVar2 + uVar14 * 0x14 + 0x40);
                do {
                  pbVar11[-0x3c] = pbVar11[-0x3c] | 2;
                  pbVar11[-0x28] = pbVar11[-0x28] | 2;
                  pbVar11[-0x14] = pbVar11[-0x14] | 2;
                  *pbVar11 = *pbVar11 | 2;
                  pbVar11 = pbVar11 + 0x50;
                  lVar9 = lVar9 + -4;
                } while (lVar9 != 0);
              }
            }
          }
        }
        else {
          *(undefined1 *)(lVar6 + 0x13 + (ulong)uVar7 * 0x14) =
               arabic_state_table[uVar10 * 4 + lVar1];
          hb_buffer_t::safe_to_insert_tatweel(param_2,uVar7,uVar17 + 1);
        }
        *(undefined1 *)(lVar8 + 0x13) = *(undefined1 *)(lVar1 + 0x5f7351 + uVar10 * 4);
        uVar14 = (ulong)*(ushort *)(lVar1 + 0x5f7352 + uVar10 * 4);
        uVar7 = uVar17;
      }
      uVar18 = uVar18 + 1;
      uVar4 = uVar4 + 1;
    } while (uVar18 != uVar19);
  }
  if (*(int *)(param_2 + 0xb4) != 0) {
    uVar19 = 0;
    do {
      uVar4 = *(uint *)(param_2 + uVar19 * 4 + 0x9c);
      lVar8 = *(long *)(param_2 + 0x10);
      uVar5 = (**(code **)(lVar8 + 0x28))(lVar8,uVar4,*(undefined8 *)(lVar8 + 0x68));
      cVar3 = get_joining_type(uVar4,uVar5);
      if ((int)CONCAT71(extraout_var_01,cVar3) != 7) {
        if ((arabic_state_table[(CONCAT71(extraout_var_01,cVar3) & 0xffffffff) * 4 + uVar14 * 0x18]
             == '\a') || (uVar7 == 0xffffffff)) {
          if (((int)uVar14 - 2U < 4) && (((byte)param_2[0x18] & 0x40) != 0)) {
            uVar4 = *(uint *)(param_2 + 0x60);
            param_2[0xc0] = (hb_buffer_t)((byte)param_2[0xc0] | 0x20);
            if (uVar7 < uVar4) {
              lVar6 = *(long *)(param_2 + 0x70);
              uVar19 = (ulong)uVar7;
              uVar14 = ~uVar19;
              if ((uVar4 - uVar7 & 3) != 0) {
                pbVar11 = (byte *)(lVar6 + uVar19 * 0x14 + 4);
                lVar8 = 0;
                do {
                  *pbVar11 = *pbVar11 | 2;
                  lVar8 = lVar8 + -1;
                  pbVar11 = pbVar11 + 0x14;
                } while (-lVar8 != ((ulong)(uVar4 - uVar7) & 3));
                uVar19 = uVar19 - lVar8;
              }
              if (2 < uVar14 + uVar4) {
                lVar8 = uVar4 - uVar19;
                pbVar11 = (byte *)(lVar6 + uVar19 * 0x14 + 0x40);
                do {
                  pbVar11[-0x3c] = pbVar11[-0x3c] | 2;
                  pbVar11[-0x28] = pbVar11[-0x28] | 2;
                  pbVar11[-0x14] = pbVar11[-0x14] | 2;
                  *pbVar11 = *pbVar11 | 2;
                  pbVar11 = pbVar11 + 0x50;
                  lVar8 = lVar8 + -4;
                } while (lVar8 != 0);
              }
            }
          }
        }
        else {
          *(undefined1 *)(lVar6 + 0x13 + (ulong)uVar7 * 0x14) =
               arabic_state_table
               [(CONCAT71(extraout_var_01,cVar3) & 0xffffffff) * 4 + uVar14 * 0x18];
          hb_buffer_t::safe_to_insert_tatweel(param_2,uVar7,*(uint *)(param_2 + 0x60));
        }
        break;
      }
      uVar19 = uVar19 + 1;
    } while (uVar19 < *(uint *)(param_2 + 0xb4));
  }
  if (param_3 == 0x4d6f6e67) {
    uVar7 = *(uint *)(param_2 + 0x60);
    lVar6 = *(long *)(param_2 + 0x70);
    if ((ulong)uVar7 < 2) goto LAB_004302df;
    uVar19 = (ulong)uVar7 - 1;
    lVar8 = 1;
    if (uVar7 != 2) {
      puVar13 = (undefined1 *)(lVar6 + 0x13);
      lVar8 = 1;
      do {
        if ((*(int *)(puVar13 + 1) - 0x180bU < 5) && (*(int *)(puVar13 + 1) - 0x180bU != 3)) {
          puVar13[0x14] = *puVar13;
        }
        if ((*(int *)(puVar13 + 0x15) - 0x180bU < 5) && (*(int *)(puVar13 + 0x15) - 0x180bU != 3)) {
          puVar13[0x28] = puVar13[0x14];
        }
        puVar13 = puVar13 + 0x28;
        lVar1 = lVar8 - (uVar19 & 0xfffffffffffffffe);
        lVar8 = lVar8 + 2;
      } while (lVar1 != -1);
    }
    if ((((uVar19 & 1) != 0) && (uVar7 = *(int *)(lVar6 + lVar8 * 0x14) - 0x180b, uVar7 < 5)) &&
       (uVar7 != 3)) {
      *(undefined1 *)(lVar6 + 0x13 + lVar8 * 0x14) = *(undefined1 *)(lVar6 + -1 + lVar8 * 0x14);
    }
  }
  uVar7 = *(uint *)(param_2 + 0x60);
  lVar6 = *(long *)(param_2 + 0x70);
LAB_004302df:
  if (uVar7 != 0) {
    if (uVar7 == 1) {
      uVar19 = 0;
    }
    else {
      puVar16 = (uint *)(lVar6 + 4);
      uVar19 = 0;
      do {
        *puVar16 = *puVar16 | *(uint *)(param_1 + (ulong)*(byte *)((long)puVar16 + 0xf) * 4);
        puVar16[5] = puVar16[5] | *(uint *)(param_1 + (ulong)*(byte *)((long)puVar16 + 0x23) * 4);
        uVar19 = uVar19 + 2;
        puVar16 = puVar16 + 10;
      } while ((uVar7 & 0xfffffffe) != uVar19);
    }
    if ((uVar7 & 1) != 0) {
      puVar16 = (uint *)(lVar6 + 4 + uVar19 * 0x14);
      *puVar16 = *puVar16 | *(uint *)(param_1 + (ulong)*(byte *)(lVar6 + 0x13 + uVar19 * 0x14) * 4);
    }
  }
  return;
}


