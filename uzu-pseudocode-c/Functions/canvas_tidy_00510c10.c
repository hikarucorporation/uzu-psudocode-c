// Function : canvas_tidy
// Namespace: 
// Entry    : 00510c10
// Prototype: undefined canvas_tidy(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, char * param_9)
// Body     : 00510c10 - 005112da


void canvas_tidy(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                char *param_9)

{
  int *piVar1;
  long *plVar2;
  int iVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  uint *puVar7;
  int iVar8;
  ulong extraout_RDX;
  ulong extraout_RDX_00;
  ulong uVar9;
  ulong extraout_RDX_01;
  uint uVar10;
  long *plVar11;
  char *pcVar12;
  char *in_R8;
  uint *in_R9;
  uint uVar13;
  uint uVar14;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Db;
  undefined8 uVar15;
  undefined4 auStack_2e8 [128];
  uint in_stack_ffffffffffffff18;
  int local_e4;
  uint local_e0;
  uint local_dc;
  uint local_d8;
  uint local_d4;
  char local_d0 [4];
  char local_cc [4];
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined8 uStack_44;
  
  if (*(long *)(param_9 + 0xc0) == 0) {
    uVar13 = 1;
  }
  else {
    uVar13 = (uint)(*(long *)(*(long *)(param_9 + 0xc0) + 0x20) == 0);
  }
  plVar5 = canvas_undo_set_move((long)param_9,uVar13 ^ 1);
  canvas_undo_add(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,param_5,
                  param_6,param_7,param_8,(long)param_9,4,&DAT_00654c38,plVar5,in_R8,in_R9);
  plVar5 = *(long **)(param_9 + 0x30);
  if (plVar5 == (long *)0x0) {
    uStack_48 = 0;
    uStack_44 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    local_4c = 0;
    local_68 = 0;
    uStack_60 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_a8 = 0;
    uStack_a0 = 0;
    local_b8 = 0;
    uStack_b0 = 0;
    local_c8 = 0;
    uStack_c0 = 0;
  }
  else {
    do {
      if (uVar13 == 0) {
        if (*(long *)(param_9 + 0xc0) != 0) {
          for (plVar11 = *(long **)(*(long *)(param_9 + 0xc0) + 0x20); plVar11 != (long *)0x0;
              plVar11 = (long *)plVar11[1]) {
            if ((long *)*plVar11 == plVar5) goto LAB_00510c96;
          }
        }
      }
      else {
LAB_00510c96:
        in_R8 = local_cc;
        in_R9 = &local_d4;
        gobj_getrect(plVar5,param_9,&local_dc,&local_e0,(undefined4 *)in_R8,in_R9);
        plVar11 = *(long **)(param_9 + 0x30);
        if (plVar11 != (long *)0x0) {
          do {
            if (uVar13 == 0) {
              if (*(long *)(param_9 + 0xc0) != 0) {
                for (plVar2 = *(long **)(*(long *)(param_9 + 0xc0) + 0x20); plVar2 != (long *)0x0;
                    plVar2 = (long *)plVar2[1]) {
                  if ((long *)*plVar2 == plVar11) goto LAB_00510cd2;
                }
              }
            }
            else {
LAB_00510cd2:
              in_R8 = local_d0;
              in_R9 = &local_d8;
              gobj_getrect(plVar11,param_9,&local_e4,auStack_2e8 + 0x80,(undefined4 *)in_R8,
                           &local_d8);
              if ((((int)in_stack_ffffffffffffff18 <= (int)(local_e0 + 0x11)) &&
                  ((int)(local_e0 - 0x11) <= (int)in_stack_ffffffffffffff18)) &&
                 (local_e4 < (int)local_dc)) goto LAB_00510c80;
            }
            plVar11 = (long *)plVar11[1];
          } while (plVar11 != (long *)0x0);
          for (plVar11 = *(long **)(param_9 + 0x30); plVar11 != (long *)0x0;
              plVar11 = (long *)plVar11[1]) {
            if (uVar13 == 0) {
              if (*(long *)(param_9 + 0xc0) != 0) {
                for (plVar2 = *(long **)(*(long *)(param_9 + 0xc0) + 0x20); plVar2 != (long *)0x0;
                    plVar2 = (long *)plVar2[1]) {
                  if ((long *)*plVar2 == plVar11) goto LAB_00510dc2;
                }
              }
            }
            else {
LAB_00510dc2:
              in_R8 = local_d0;
              in_R9 = &local_d8;
              gobj_getrect(plVar11,param_9,&local_e4,auStack_2e8 + 0x80,(undefined4 *)in_R8,
                           &local_d8);
              if ((((int)in_stack_ffffffffffffff18 <= (int)(local_e0 + 0x11)) &&
                  ((int)(local_e0 - 0x11) <= (int)in_stack_ffffffffffffff18)) &&
                 (local_e0 != in_stack_ffffffffffffff18)) {
                gobj_displace(plVar11);
              }
            }
          }
        }
      }
LAB_00510c80:
      plVar5 = (long *)plVar5[1];
    } while (plVar5 != (long *)0x0);
    plVar5 = *(long **)(param_9 + 0x30);
    uVar15 = 0;
    uStack_48 = 0;
    uStack_44 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    local_4c = 0;
    local_68 = 0;
    uStack_60 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_a8 = 0;
    uStack_a0 = 0;
    local_b8 = 0;
    uStack_b0 = 0;
    local_c8 = 0;
    uStack_c0 = 0;
    if (plVar5 != (long *)0x0) {
      do {
        if (uVar13 == 0) {
          if (*(long *)(param_9 + 0xc0) != 0) {
            for (plVar11 = *(long **)(*(long *)(param_9 + 0xc0) + 0x20); plVar11 != (long *)0x0;
                plVar11 = (long *)plVar11[1]) {
              if ((long *)*plVar11 == plVar5) goto LAB_00510eb6;
            }
          }
        }
        else {
LAB_00510eb6:
          in_R8 = local_cc;
          in_R9 = &local_d4;
          uVar15 = gobj_getrect(plVar5,param_9,&local_dc,&local_e0,(undefined4 *)in_R8,in_R9);
          for (plVar11 = *(long **)(param_9 + 0x30); plVar11 != (long *)0x0;
              plVar11 = (long *)plVar11[1]) {
            if (uVar13 == 0) {
              if (*(long *)(param_9 + 0xc0) != 0) {
                for (plVar2 = *(long **)(*(long *)(param_9 + 0xc0) + 0x20); plVar2 != (long *)0x0;
                    plVar2 = (long *)plVar2[1]) {
                  if ((long *)*plVar2 == plVar11) goto LAB_00510eee;
                }
              }
            }
            else {
LAB_00510eee:
              in_R8 = local_d0;
              in_R9 = &local_d8;
              uVar15 = gobj_getrect(plVar11,param_9,&local_e4,auStack_2e8 + 0x80,
                                    (undefined4 *)local_d0,&local_d8);
              if (((local_e4 <= (int)(local_dc + 0x12)) && ((int)(local_dc - 0x12) <= local_e4)) &&
                 (in_stack_ffffffffffffff18 - local_d4 < 0x23)) {
                piVar1 = (int *)((long)&local_c8 + (ulong)(in_stack_ffffffffffffff18 - local_d4) * 4
                                );
                *piVar1 = *piVar1 + 1;
              }
            }
          }
        }
        plVar5 = (long *)plVar5[1];
      } while (plVar5 != (long *)0x0);
      goto LAB_00510ff8;
    }
  }
  uStack_44 = 0;
  uStack_48 = 0;
  local_4c = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  local_68 = 0;
  uStack_70 = 0;
  local_78 = 0;
  uStack_80 = 0;
  local_88 = 0;
  uStack_90 = 0;
  local_98 = 0;
  uStack_a0 = 0;
  local_a8 = 0;
  uStack_b0 = 0;
  local_b8 = 0;
  uStack_c0 = 0;
  local_c8 = 0;
  uVar15 = 0;
  uStack_c0._0_4_ = 0;
LAB_00510ff8:
  lVar6 = 0;
  uVar14 = 4;
  iVar8 = 0;
  iVar4 = (int)uStack_c0;
  do {
    iVar3 = iVar4 * 3;
    iVar4 = *(int *)((long)&local_c8 + (lVar6 + 3) * 4);
    iVar3 = iVar3 + *(int *)((long)&local_c8 + lVar6 * 4) +
            *(int *)((long)&local_c8 + (lVar6 + 4) * 4) +
            (*(int *)((long)&local_c8 + (lVar6 + 1) * 4) + iVar4) * 2;
    if (iVar8 < iVar3) {
      uVar14 = (int)lVar6 + 2;
      iVar8 = iVar3;
    }
    lVar6 = lVar6 + 1;
  } while ((int)lVar6 != 0x1f);
  pcVar12 = (char *)0x3;
  puVar7 = (uint *)(ulong)uVar14;
  logpost(uVar15,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0,3,
          "tidy: best vertical distance %d",puVar7,in_R8,in_R9,(char)in_stack_ffffffffffffff18);
  plVar5 = *(long **)(param_9 + 0x30);
  uVar9 = extraout_RDX;
  do {
    if (plVar5 == (long *)0x0) {
      canvas_dirty(DAT_005d9038,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                   (long)param_9,pcVar12,uVar9,puVar7,in_R8,in_R9);
      return;
    }
    if (uVar13 == 0) {
      if (*(long *)(param_9 + 0xc0) != 0) {
        for (plVar11 = *(long **)(*(long *)(param_9 + 0xc0) + 0x20); plVar11 != (long *)0x0;
            plVar11 = (long *)plVar11[1]) {
          if ((long *)*plVar11 == plVar5) goto LAB_00511076;
        }
      }
    }
    else {
LAB_00511076:
      puVar7 = &local_e0;
      in_R8 = local_cc;
      in_R9 = &local_d4;
      pcVar12 = param_9;
      gobj_getrect(plVar5,param_9,&local_dc,puVar7,(undefined4 *)in_R8,in_R9);
      plVar11 = *(long **)(param_9 + 0x30);
      uVar9 = extraout_RDX_00;
      if (plVar11 != (long *)0x0) {
        do {
          if (uVar13 == 0) {
            if (*(long *)(param_9 + 0xc0) != 0) {
              for (plVar2 = *(long **)(*(long *)(param_9 + 0xc0) + 0x20); plVar2 != (long *)0x0;
                  plVar2 = (long *)plVar2[1]) {
                if ((long *)*plVar2 == plVar11) goto LAB_005110b2;
              }
            }
          }
          else {
LAB_005110b2:
            in_R8 = local_d0;
            in_R9 = &local_d8;
            pcVar12 = param_9;
            gobj_getrect(plVar11,param_9,&local_e4,auStack_2e8 + 0x80,(undefined4 *)in_R8,in_R9);
            puVar7 = (uint *)(ulong)local_dc;
            uVar9 = (ulong)(local_dc + 0x12);
            if ((local_e4 <= (int)(local_dc + 0x12)) &&
               (puVar7 = (uint *)(ulong)(local_dc - 0x12), (int)(local_dc - 0x12) <= local_e4)) {
              puVar7 = (uint *)(ulong)local_d8;
              uVar9 = (ulong)(local_d8 - 10);
              if (((int)(local_d8 - 10) <= (int)local_e0) &&
                 (puVar7 = (uint *)(ulong)(local_d8 + 0x23), (int)local_e0 < (int)(local_d8 + 0x23))
                 ) goto LAB_00511060;
            }
          }
          plVar11 = (long *)plVar11[1];
        } while (plVar11 != (long *)0x0);
        while (plVar11 = *(long **)(param_9 + 0x30), plVar11 != (long *)0x0) {
          if (uVar13 == 0) {
            lVar6 = *(long *)(param_9 + 0xc0);
            if (lVar6 != 0) {
              do {
                if (lVar6 != 0) {
                  for (plVar2 = *(long **)(lVar6 + 0x20); plVar2 != (long *)0x0;
                      plVar2 = (long *)plVar2[1]) {
                    if ((long *)*plVar2 == plVar11) {
                      in_R8 = local_d0;
                      in_R9 = &local_d8;
                      pcVar12 = param_9;
                      gobj_getrect(plVar11,param_9,&local_e4,auStack_2e8 + 0x80,(undefined4 *)in_R8,
                                   in_R9);
                      uVar9 = (ulong)local_dc;
                      puVar7 = (uint *)(ulong)(local_dc + 0x12);
                      if ((((local_e4 <= (int)(local_dc + 0x12)) &&
                           (puVar7 = (uint *)(ulong)(local_dc - 0x12),
                           (int)(local_dc - 0x12) <= local_e4)) &&
                          (puVar7 = (uint *)(ulong)in_stack_ffffffffffffff18,
                          (int)local_e0 < (int)in_stack_ffffffffffffff18)) &&
                         (pcVar12 = (char *)(ulong)local_d4,
                         (int)in_stack_ffffffffffffff18 < (int)(local_d4 + 0x23)))
                      goto LAB_00511177;
                      break;
                    }
                  }
                }
                plVar11 = (long *)plVar11[1];
                if (plVar11 == (long *)0x0) break;
                lVar6 = *(long *)(param_9 + 0xc0);
              } while( true );
            }
            break;
          }
          while( true ) {
            in_R8 = local_d0;
            in_R9 = &local_d8;
            pcVar12 = param_9;
            gobj_getrect(plVar11,param_9,&local_e4,auStack_2e8 + 0x80,(undefined4 *)in_R8,in_R9);
            uVar9 = (ulong)local_dc;
            puVar7 = (uint *)(ulong)(local_dc + 0x12);
            if (((local_e4 <= (int)(local_dc + 0x12)) &&
                (puVar7 = (uint *)(ulong)(local_dc - 0x12), (int)(local_dc - 0x12) <= local_e4)) &&
               ((puVar7 = (uint *)(ulong)in_stack_ffffffffffffff18,
                (int)local_e0 < (int)in_stack_ffffffffffffff18 &&
                (pcVar12 = (char *)(ulong)local_d4,
                (int)in_stack_ffffffffffffff18 < (int)(local_d4 + 0x23))))) break;
            plVar11 = (long *)plVar11[1];
            if (plVar11 == (long *)0x0) goto LAB_00511060;
          }
LAB_00511177:
          uVar10 = (uVar14 - in_stack_ffffffffffffff18) + local_d4;
          puVar7 = (uint *)(ulong)uVar10;
          pcVar12 = param_9;
          gobj_displace(plVar11);
          local_e0 = in_stack_ffffffffffffff18 + uVar10;
          local_d4 = uVar10 + local_d8;
          uVar9 = extraout_RDX_01;
        }
      }
    }
LAB_00511060:
    plVar5 = (long *)plVar5[1];
  } while( true );
}


