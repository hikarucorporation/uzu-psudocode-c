// Function : canvas_undo_move
// Namespace: 
// Entry    : 005074e0
// Prototype: undefined8 canvas_undo_move(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long * param_9, char * param_10, ulong param_11, undefined8 param_12, char * param_13, undefined4 * param_14)
// Body     : 005074e0 - 00507a41


undefined8
canvas_undo_move(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                long *param_9,char *param_10,ulong param_11,undefined8 param_12,char *param_13,
                undefined4 *param_14)

{
  long *plVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  bool bVar4;
  uint uVar5;
  long *plVar6;
  long *plVar7;
  undefined8 *puVar8;
  long lVar9;
  int iVar10;
  long *plVar11;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  ulong extraout_RDX_01;
  long *plVar12;
  int iVar13;
  char *pcVar14;
  long lVar15;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  undefined4 extraout_XMM0_Da_04;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Db_01;
  undefined4 extraout_XMM0_Db_02;
  undefined4 extraout_XMM0_Db_03;
  undefined4 extraout_XMM0_Db_04;
  float fVar16;
  undefined4 uVar17;
  float fVar18;
  undefined4 uVar19;
  char *in_stack_ffffffffffffff08;
  uint local_e8;
  int local_e4;
  int local_e0;
  undefined4 local_dc;
  float local_d8;
  float local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  long *local_c8;
  long local_c0;
  char local_b8 [136];
  
  if ((int)param_11 - 1U < 2) {
    iVar13 = *(int *)(param_10 + 8);
    local_c8 = (long *)param_10;
    if (iVar13 < 1) {
      local_e8 = 0;
      bVar4 = false;
    }
    else {
      param_13 = (char *)(ulong)*(uint *)((long)param_9 + 0xec);
      lVar15 = 0;
      bVar4 = false;
      local_e8 = 0;
      plVar6 = *(long **)param_10;
      do {
        param_10 = (char *)plVar6;
        uVar5 = *(uint *)((long)param_10 + lVar15 * 0xc);
        param_11 = (ulong)uVar5;
        plVar6 = (long *)param_9[6];
        if ((uVar5 != 0) && (plVar6 != (long *)0x0)) {
          param_11 = (ulong)(uVar5 - 1);
          do {
            plVar6 = (long *)plVar6[1];
            iVar10 = (int)param_11;
            param_11 = (ulong)(iVar10 - 1);
            if (plVar6 == (long *)0x0) break;
          } while (iVar10 != 0);
        }
        if (plVar6 != (long *)0x0) {
          uVar17 = 0;
          local_d4 = *(float *)((long)param_10 + lVar15 * 0xc + 8) * (float)(int)param_13;
          fVar16 = (float)(int)param_13 * *(float *)((long)param_10 + lVar15 * 0xc + 4);
          local_e0 = 0;
          local_e4 = 0;
          local_cc = 0;
          local_d0 = 0;
          local_d8 = fVar16;
          plVar7 = (long *)__tls_get_addr(&PTR_007159b0);
          local_dc = *(undefined4 *)(**(long **)(*plVar7 + 0x48) + 0x40);
          local_c0 = *plVar6;
          lVar9 = param_9[0x18];
          if (lVar9 != 0) {
            puVar8 = *(undefined8 **)(lVar9 + 0x20);
            uVar2 = extraout_RDX;
            pcVar14 = (char *)param_14;
            uVar19 = extraout_XMM0_Da;
            uVar3 = extraout_XMM0_Db;
            while (puVar8 != (undefined8 *)0x0) {
              param_10 = (char *)*puVar8;
              glist_deselect(CONCAT44(uVar3,uVar19),CONCAT44(uVar17,fVar16),param_3,param_4,param_5,
                             param_6,param_7,param_8,param_9,(long *)param_10,uVar2,puVar8,param_13,
                             pcVar14);
              lVar9 = param_9[0x18];
              uVar2 = extraout_RDX_00;
              uVar19 = extraout_XMM0_Da_00;
              uVar3 = extraout_XMM0_Db_00;
              puVar8 = *(undefined8 **)(lVar9 + 0x20);
            }
            if ((*(byte *)(lVar9 + 0x88) & 0x20) != 0) {
              *(byte *)(lVar9 + 0x88) = *(byte *)(lVar9 + 0x88) & 0xdf;
              param_13 = local_b8;
              sprintf(param_13,"l%p",*(undefined8 *)(param_9[0x18] + 0x80));
              in_stack_ffffffffffffff08 = "black";
              param_10 = "crs rs";
              pcVar14 = "-fill";
              pdgui_vmess(CONCAT44(extraout_XMM0_Db_01,extraout_XMM0_Da_01),CONCAT44(uVar17,fVar16),
                          param_3,param_4,param_5,param_6,param_7,param_8,0,"crs rs",param_9,
                          "itemconfigure",param_13,"-fill",0x51);
              if (param_9[0x18] == 0) goto LAB_0050755c;
            }
            puVar8 = getbytes(0x10);
            lVar9 = param_9[0x18];
            plVar11 = *(long **)(lVar9 + 0x20);
            plVar7 = plVar11;
            if (plVar11 == (long *)0x0) {
              plVar11 = (long *)0x0;
            }
            else {
              do {
                if ((long *)*plVar7 == plVar6) {
                  bug(CONCAT44(extraout_XMM0_Db_02,extraout_XMM0_Da_02),CONCAT44(uVar17,fVar16),
                      param_3,param_4,param_5,param_6,param_7,param_8,"glist_select",param_10,plVar7
                      ,plVar11,param_13,pcVar14,(char)in_stack_ffffffffffffff08);
                  lVar9 = param_9[0x18];
                  plVar11 = *(long **)(lVar9 + 0x20);
                  break;
                }
                plVar7 = (long *)plVar7[1];
              } while (plVar7 != (long *)0x0);
            }
            puVar8[1] = plVar11;
            *puVar8 = plVar6;
            *(undefined8 **)(lVar9 + 0x20) = puVar8;
            gobj_select(plVar6,(long)param_9);
          }
LAB_0050755c:
          plVar7 = (long *)&local_e4;
          pcVar14 = (char *)&local_cc;
          param_14 = &local_d0;
          gobj_getrect(plVar6,param_9,&local_e0,(undefined4 *)plVar7,(undefined4 *)pcVar14,param_14)
          ;
          plVar6 = (long *)__tls_get_addr(&PTR_007159b0);
          *(undefined4 *)(**(long **)(*plVar6 + 0x48) + 0x40) = 1;
          uVar17 = 0;
          fVar16 = DAT_005d9038 / (float)*(int *)((long)param_9 + 0xec);
          uVar19 = 0;
          fVar18 = (local_d4 - (float)local_e4) * fVar16;
          canvas_displaceselection
                    ((ulong)(uint)(float)local_e4,(ulong)(uint)fVar16,(ulong)(uint)fVar18,param_4,
                     param_5,param_6,param_7,param_8,param_9,
                     (ulong)(uint)(int)((local_d8 - (float)local_e0) * fVar16),
                     (ulong)(uint)(int)fVar18,plVar7,pcVar14,param_14);
          param_3 = CONCAT44(uVar19,fVar18);
          param_2 = CONCAT44(uVar17,fVar16);
          *(undefined4 *)(**(long **)(*plVar6 + 0x48) + 0x40) = local_dc;
          uVar5 = *(uint *)((long)param_9 + 0xec);
          param_13 = (char *)(ulong)uVar5;
          param_10 = (char *)*local_c8;
          *(float *)((long)param_10 + lVar15 * 0xc + 4) = (float)(local_e0 / (int)uVar5);
          param_1 = (ulong)(uint)(float)(local_e4 / (int)uVar5);
          *(float *)((long)param_10 + lVar15 * 0xc + 8) = (float)(local_e4 / (int)uVar5);
          uVar5 = local_e8;
          if (local_c0 == *(long *)PTR_voutlet_class_00715fc0) {
            uVar5 = 1;
          }
          if (local_c0 != *(long *)PTR_vinlet_class_00715ab8) {
            local_e8 = uVar5;
          }
          param_11 = (ulong)local_e8;
          if (local_c0 == *(long *)PTR_vinlet_class_00715ab8) {
            bVar4 = true;
          }
          iVar13 = (int)local_c8[1];
        }
        lVar15 = lVar15 + 1;
        plVar6 = (long *)param_10;
      } while (lVar15 < iVar13);
    }
    plVar6 = local_c8;
    lVar15 = param_9[0x18];
    if (lVar15 != 0) {
      puVar8 = *(undefined8 **)(lVar15 + 0x20);
      while (puVar8 != (undefined8 *)0x0) {
        param_10 = (char *)*puVar8;
        param_1 = glist_deselect(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                                 param_9,(long *)param_10,param_11,puVar8,param_13,param_14);
        lVar15 = param_9[0x18];
        param_11 = extraout_RDX_01;
        puVar8 = *(undefined8 **)(lVar15 + 0x20);
      }
      if ((*(byte *)(lVar15 + 0x88) & 0x20) != 0) {
        *(byte *)(lVar15 + 0x88) = *(byte *)(lVar15 + 0x88) & 0xdf;
        param_13 = local_b8;
        sprintf(param_13,"l%p",*(undefined8 *)(param_9[0x18] + 0x80));
        in_stack_ffffffffffffff08 = "black";
        param_10 = "crs rs";
        pcVar14 = "-fill";
        param_1 = pdgui_vmess(CONCAT44(extraout_XMM0_Db_03,extraout_XMM0_Da_03),param_2,param_3,
                              param_4,param_5,param_6,param_7,param_8,0,"crs rs",param_9,
                              "itemconfigure",param_13,"-fill",0x51);
        param_14 = (undefined4 *)pcVar14;
      }
    }
    iVar13 = (int)plVar6[1];
    if (0 < iVar13) {
      lVar15 = 0;
      do {
        iVar10 = *(int *)(*plVar6 + lVar15 * 0xc);
        plVar7 = (long *)param_9[6];
        if ((iVar10 != 0) && (plVar7 != (long *)0x0)) {
          do {
            iVar10 = iVar10 + -1;
            plVar7 = (long *)plVar7[1];
            if (plVar7 == (long *)0x0) break;
          } while (iVar10 != 0);
        }
        if ((plVar7 != (long *)0x0) && (param_9[0x18] != 0)) {
          puVar8 = getbytes(0x10);
          lVar9 = param_9[0x18];
          plVar11 = *(long **)(lVar9 + 0x20);
          plVar12 = plVar11;
          if (plVar11 == (long *)0x0) {
            plVar11 = (long *)0x0;
          }
          else {
            do {
              if ((long *)*plVar12 == plVar7) {
                bug(CONCAT44(extraout_XMM0_Db_04,extraout_XMM0_Da_04),param_2,param_3,param_4,
                    param_5,param_6,param_7,param_8,"glist_select",param_10,plVar12,plVar11,param_13
                    ,param_14,(char)in_stack_ffffffffffffff08);
                lVar9 = param_9[0x18];
                plVar11 = *(long **)(lVar9 + 0x20);
                break;
              }
              plVar1 = plVar12 + 1;
              plVar12 = (long *)*plVar1;
            } while ((long *)*plVar1 != (long *)0x0);
          }
          puVar8[1] = plVar11;
          *puVar8 = plVar7;
          *(undefined8 **)(lVar9 + 0x20) = puVar8;
          param_10 = (char *)param_9;
          param_1 = gobj_select(plVar7,(long)param_9);
          iVar13 = (int)plVar6[1];
        }
        lVar15 = lVar15 + 1;
      } while (lVar15 < iVar13);
    }
    if (bVar4) {
      param_1 = canvas_resortinlets(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                                    param_9);
    }
    if (local_e8 != 0) {
      canvas_resortoutlets(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
    }
  }
  else if ((int)param_11 == 0) {
    freebytes(*(void **)param_10);
    freebytes(param_10);
  }
  return 1;
}


