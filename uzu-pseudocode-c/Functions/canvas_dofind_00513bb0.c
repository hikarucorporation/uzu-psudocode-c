// Function : canvas_dofind
// Namespace: 
// Entry    : 00513bb0
// Prototype: uint canvas_dofind(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long * param_9, int * param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined * param_14)
// Body     : 00513bb0 - 0051408b


uint canvas_dofind(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  long *param_9,int *param_10,undefined8 param_11,long *param_12,char *param_13,
                  undefined *param_14)

{
  long *plVar1;
  byte bVar2;
  undefined *puVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  long *plVar11;
  ulong uVar12;
  ulong uVar13;
  char *pcVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  char *pcVar17;
  undefined8 extraout_RDX;
  ulong extraout_RDX_00;
  undefined8 extraout_RDX_01;
  ulong uVar18;
  ulong extraout_RDX_02;
  ulong extraout_RDX_03;
  undefined8 extraout_RDX_04;
  undefined8 extraout_RDX_05;
  undefined8 extraout_RDX_06;
  undefined8 extraout_RDX_07;
  char *pcVar19;
  undefined4 extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  float fVar20;
  float extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  undefined4 extraout_XMM0_Da_04;
  undefined4 extraout_XMM0_Da_05;
  undefined4 extraout_XMM0_Da_06;
  undefined4 extraout_XMM0_Da_07;
  undefined4 extraout_XMM0_Da_08;
  undefined4 extraout_XMM0_Da_09;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Db_01;
  undefined4 uVar22;
  undefined4 extraout_XMM0_Db_02;
  undefined8 uVar21;
  undefined4 extraout_XMM0_Db_03;
  undefined4 extraout_XMM0_Db_04;
  undefined4 extraout_XMM0_Db_05;
  undefined4 extraout_XMM0_Db_06;
  undefined4 extraout_XMM0_Db_07;
  undefined4 extraout_XMM0_Db_08;
  undefined4 uVar23;
  undefined4 extraout_XMM0_Db_09;
  char *in_stack_fffffffffffffef8;
  uint local_fc;
  char local_b8 [136];
  
  plVar7 = (long *)__tls_get_addr(&PTR_007159b0);
  uVar4 = binbuf_getnatom(*(undefined4 **)(**(long **)(*plVar7 + 0x48) + 0x60));
  lVar8 = binbuf_getvec(*(long *)(**(long **)(*plVar7 + 0x48) + 0x60));
  plVar7 = (long *)param_9[6];
  if (plVar7 == (long *)0x0) {
    return 0;
  }
  local_fc = 0;
  pcVar19 = param_14;
  do {
    plVar9 = pd_checkobject(plVar7);
    uVar21 = extraout_RDX;
    uVar22 = extraout_XMM0_Da;
    uVar23 = extraout_XMM0_Db;
    if (plVar9 != (long *)0x0) {
      iVar5 = binbuf_getnatom((undefined4 *)plVar9[2]);
      lVar10 = binbuf_getvec(plVar9[2]);
      plVar11 = (long *)__tls_get_addr(&PTR_007159b0);
      param_12 = (long *)(ulong)uVar4;
      if (iVar5 < (int)uVar4) {
LAB_00513ca1:
        iVar5 = clone_get_n(plVar9);
        pcVar17 = (char *)param_12;
        uVar21 = extraout_RDX_01;
        uVar22 = extraout_XMM0_Da_01;
        uVar23 = extraout_XMM0_Db_01;
        if (iVar5 != 0) {
LAB_0051400e:
          plVar9 = (long *)clone_get_instance(plVar9,0);
          uVar6 = canvas_dofind(CONCAT44(extraout_XMM0_Db_07,extraout_XMM0_Da_07),param_2,param_3,
                                param_4,param_5,param_6,param_7,param_8,plVar9,param_10,
                                extraout_RDX_05,(long *)pcVar17,param_13,pcVar19);
          local_fc = local_fc | uVar6;
          param_12 = (long *)pcVar17;
          uVar21 = extraout_RDX_06;
          uVar22 = extraout_XMM0_Da_08;
          uVar23 = extraout_XMM0_Db_08;
        }
      }
      else {
        pcVar17 = (char *)**(long **)(*plVar11 + 0x48);
        uVar18 = extraout_RDX_00;
        fVar20 = extraout_XMM0_Da_00;
        uVar22 = extraout_XMM0_Db_00;
        if (0 < (int)uVar4) {
          uVar12 = (ulong)(iVar5 + (1 - uVar4));
          if (*(int *)((long)pcVar17 + 0x5c) == 0) {
            lVar10 = lVar10 + 8;
            uVar13 = 0;
LAB_00513da3:
            plVar11 = (long *)0x0;
            do {
              uVar6 = *(uint *)(lVar10 + -8 + (long)plVar11);
              if (uVar6 < 10) {
                if ((0x30U >> (uVar6 & 0x1f) & 1) == 0) {
                  if ((0x102U >> (uVar6 & 0x1f) & 1) == 0) {
                    param_12 = (long *)0x204;
                    if ((0x204U >> (uVar6 & 0x1f) & 1) != 0) {
                      if ((*(int *)(lVar8 + (long)plVar11) != 9) &&
                         (*(int *)(lVar8 + (long)plVar11) != 2)) goto LAB_00513e35;
                      pcVar14 = strstr((char *)**(undefined8 **)(lVar10 + (long)plVar11),
                                       (char *)**(undefined8 **)(lVar8 + 8 + (long)plVar11));
                      uVar18 = extraout_RDX_02;
                      fVar20 = extraout_XMM0_Da_02;
                      uVar22 = extraout_XMM0_Db_02;
                      if (pcVar14 == (char *)0x0) goto LAB_00513e35;
                    }
                  }
                  else {
                    if (*(uint *)(lVar8 + (long)plVar11) != uVar6) goto LAB_00513e35;
                    fVar20 = *(float *)(lVar10 + (long)plVar11);
                    uVar22 = 0;
                    if (fVar20 != *(float *)(lVar8 + 8 + (long)plVar11)) goto LAB_00513e35;
                  }
                }
                else if (*(uint *)(lVar8 + (long)plVar11) != uVar6) goto LAB_00513e35;
              }
              plVar11 = plVar11 + 2;
              if ((long *)((ulong)uVar4 << 4) == plVar11) goto LAB_00513e60;
            } while( true );
          }
          lVar10 = lVar10 + 8;
          uVar13 = 0;
LAB_00513d0e:
          param_12 = (long *)0x0;
          do {
            uVar6 = *(uint *)(lVar10 + -8 + (long)param_12);
            uVar18 = (ulong)uVar6;
            if (uVar6 < 10) {
              if ((0x30U >> (uVar6 & 0x1f) & 1) == 0) {
                if ((0x102U >> (uVar6 & 0x1f) & 1) == 0) {
                  if (((0x204U >> (uVar6 & 0x1f) & 1) != 0) &&
                     (((*(int *)(lVar8 + (long)param_12) != 9 &&
                       (*(int *)(lVar8 + (long)param_12) != 2)) ||
                      (uVar18 = *(ulong *)(lVar10 + (long)param_12),
                      uVar18 != *(ulong *)(lVar8 + 8 + (long)param_12))))) goto LAB_00513d85;
                }
                else {
                  if (*(uint *)(lVar8 + (long)param_12) != uVar6) goto LAB_00513d85;
                  fVar20 = *(float *)(lVar10 + (long)param_12);
                  uVar22 = 0;
                  if (fVar20 != *(float *)(lVar8 + 8 + (long)param_12)) goto LAB_00513d85;
                }
              }
              else if (*(uint *)(lVar8 + (long)param_12) != uVar6) goto LAB_00513d85;
            }
            param_12 = param_12 + 2;
            if ((long *)((ulong)uVar4 << 4) == param_12) break;
          } while( true );
        }
LAB_00513e60:
        uVar21 = CONCAT44(uVar22,fVar20);
        if (*param_10 == (int)*(long *)((long)pcVar17 + 0x58)) {
          lVar10 = param_9[0x18];
          if (lVar10 != 0) {
            puVar15 = *(undefined8 **)(lVar10 + 0x20);
            while (puVar15 != (undefined8 *)0x0) {
              uVar21 = glist_deselect(uVar21,param_2,param_3,param_4,param_5,param_6,param_7,param_8
                                      ,param_9,(long *)*puVar15,uVar18,puVar15,param_13,pcVar19);
              lVar10 = param_9[0x18];
              uVar18 = extraout_RDX_03;
              puVar15 = *(undefined8 **)(lVar10 + 0x20);
            }
            bVar2 = *(byte *)(lVar10 + 0x88);
            pcVar17 = (char *)(ulong)bVar2;
            if ((bVar2 & 0x20) != 0) {
              *(byte *)(lVar10 + 0x88) = bVar2 & 0xdf;
              param_13 = local_b8;
              sprintf(param_13,"l%p",*(undefined8 *)(param_9[0x18] + 0x80));
              in_stack_fffffffffffffef8 = "black";
              pcVar17 = "itemconfigure";
              pcVar19 = "-fill";
              pdgui_vmess(CONCAT44(extraout_XMM0_Db_03,extraout_XMM0_Da_03),param_2,param_3,param_4,
                          param_5,param_6,param_7,param_8,0,"crs rs",param_9,"itemconfigure",
                          param_13,"-fill",0x51);
            }
          }
          puVar15 = gensym("menu-open");
          pd_vmess(CONCAT44(extraout_XMM0_Db_04,extraout_XMM0_Da_04),param_2,param_3,param_4,param_5
                   ,param_6,param_7,param_8,(long)param_9,puVar15,0x5e2ee7,pcVar17,param_13,pcVar19,
                   (double)in_stack_fffffffffffffef8);
          canvas_editmode(DAT_005d9038,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                          (ulong)param_9);
          if (param_9[0x18] == 0) {
            local_fc = 1;
          }
          else {
            puVar16 = getbytes(0x10);
            lVar10 = param_9[0x18];
            pcVar17 = *(char **)(lVar10 + 0x20);
            plVar11 = (long *)pcVar17;
            if ((long *)pcVar17 == (long *)0x0) {
              pcVar17 = (char *)0x0;
            }
            else {
              do {
                if ((long *)*plVar11 == plVar7) {
                  bug(CONCAT44(extraout_XMM0_Db_05,extraout_XMM0_Da_05),param_2,param_3,param_4,
                      param_5,param_6,param_7,param_8,"glist_select",puVar15,plVar11,pcVar17,
                      param_13,pcVar19,(char)in_stack_fffffffffffffef8);
                  lVar10 = param_9[0x18];
                  pcVar17 = *(char **)(lVar10 + 0x20);
                  break;
                }
                plVar1 = plVar11 + 1;
                plVar11 = (long *)*plVar1;
              } while ((long *)*plVar1 != (long *)0x0);
            }
            puVar16[1] = pcVar17;
            *puVar16 = plVar7;
            *(undefined8 **)(lVar10 + 0x20) = puVar16;
            local_fc = 1;
            gobj_select(plVar7,(long)param_9);
          }
        }
        *param_10 = *param_10 + 1;
        iVar5 = clone_get_n(plVar9);
        param_12 = (long *)pcVar17;
        uVar21 = extraout_RDX_04;
        uVar22 = extraout_XMM0_Da_06;
        uVar23 = extraout_XMM0_Db_06;
        if (iVar5 != 0) goto LAB_0051400e;
      }
    }
    puVar3 = PTR_canvas_class_00715918;
    plVar7 = (long *)plVar7[1];
    if (plVar7 == (long *)0x0) {
      plVar7 = (long *)param_9[6];
      if (plVar7 == (long *)0x0) {
        return local_fc;
      }
      lVar8 = *(long *)PTR_canvas_class_00715918;
      do {
        if (*plVar7 == lVar8) {
          uVar4 = canvas_dofind(CONCAT44(uVar23,uVar22),param_2,param_3,param_4,param_5,param_6,
                                param_7,param_8,plVar7,param_10,uVar21,param_12,param_13,pcVar19);
          local_fc = local_fc | uVar4;
          lVar8 = *(long *)puVar3;
          uVar21 = extraout_RDX_07;
          uVar22 = extraout_XMM0_Da_09;
          uVar23 = extraout_XMM0_Db_09;
        }
        plVar7 = (long *)plVar7[1];
      } while (plVar7 != (long *)0x0);
      return local_fc;
    }
  } while( true );
LAB_00513e35:
  uVar13 = uVar13 + 1;
  lVar10 = lVar10 + 0x10;
  if (uVar13 == uVar12) goto LAB_00513ca1;
  goto LAB_00513da3;
LAB_00513d85:
  uVar13 = uVar13 + 1;
  lVar10 = lVar10 + 0x10;
  if (uVar13 == uVar12) goto LAB_00513ca1;
  goto LAB_00513d0e;
}


