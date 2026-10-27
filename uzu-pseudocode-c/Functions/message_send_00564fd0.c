// Function : message_send
// Namespace: 
// Entry    : 00564fd0
// Prototype: undefined8 * message_send(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, double param_5, double param_6, double param_7, undefined8 param_8, long param_9, undefined8 * param_10, int param_11, uint * param_12, uint * param_13, uint * param_14)
// Body     : 00564fd0 - 0056569c


undefined8 *
message_send(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            double param_5,double param_6,double param_7,undefined8 param_8,long param_9,
            undefined8 *param_10,int param_11,uint *param_12,uint *param_13,uint *param_14)

{
  uint *puVar1;
  char cVar2;
  char cVar3;
  uint uVar4;
  char *pcVar5;
  bool bVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  undefined4 extraout_var_02;
  long *plVar9;
  undefined4 extraout_var_03;
  undefined4 extraout_var_04;
  uint *puVar10;
  ulong uVar11;
  undefined8 *puVar12;
  long *plVar13;
  bool bVar14;
  uint uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 extraout_XMM0_Qa_02;
  undefined8 extraout_XMM0_Qa_03;
  undefined8 extraout_XMM0_Qa_04;
  undefined8 extraout_XMM0_Qa_05;
  undefined8 extraout_XMM0_Qa_06;
  undefined8 extraout_XMM0_Qa_07;
  undefined8 extraout_XMM0_Qa_08;
  undefined8 extraout_XMM0_Qa_09;
  undefined8 extraout_XMM0_Qa_10;
  undefined8 uVar19;
  undefined8 extraout_XMM0_Qa_11;
  undefined8 extraout_XMM0_Qa_12;
  undefined8 *local_68;
  undefined8 *local_58;
  undefined8 *local_50;
  
  if (param_11 == 0) {
    pcVar5 = (char *)*param_10;
    iVar7 = strcmp(pcVar5,";");
    puVar8 = (undefined8 *)CONCAT44(extraout_var_03,iVar7);
    if (iVar7 != 0) {
      iVar7 = strcmp(pcVar5,",");
      puVar8 = (undefined8 *)CONCAT44(extraout_var_04,iVar7);
      if (iVar7 != 0) {
        puVar8 = (undefined8 *)
                 outlet_anything(extraout_XMM0_Qa_12,param_2,param_3,param_4,param_5,param_6,param_7
                                 ,param_8,*(long **)(param_9 + 0x18),param_10,0,(int *)0x0,param_13,
                                 param_14);
        return puVar8;
      }
    }
  }
  else {
    puVar8 = gensym(",");
    cVar2 = *(char *)*puVar8;
    puVar8 = gensym(";");
    if (0 < param_11) {
      cVar3 = *(char *)*puVar8;
      lVar18 = (long)param_11;
      puVar1 = param_12 + 4;
      local_68 = (undefined8 *)0x0;
      lVar16 = 0;
      local_58 = (undefined8 *)0x0;
      bVar14 = false;
      local_50 = (undefined8 *)0x0;
      do {
        puVar12 = local_58;
        if (bVar14) {
          local_50 = (undefined8 *)0x1;
        }
        puVar8 = local_50;
        lVar17 = lVar16;
        if (lVar16 < lVar18) {
          puVar10 = param_12 + lVar16 * 4;
          do {
            if (*puVar10 == 2) {
              puVar8 = (undefined8 *)atom_getsymbol((int *)puVar10);
              if (*(char *)*puVar8 == cVar3) {
                puVar8 = (undefined8 *)0x0;
                local_58 = (undefined8 *)0x0;
                uVar11 = lVar17 - lVar16;
                bVar6 = true;
                goto joined_r0x0056512a;
              }
              if ((*puVar10 == 2) &&
                 (puVar8 = (undefined8 *)atom_getsymbol((int *)puVar10), *(char *)*puVar8 == cVar2))
              {
                puVar8 = (undefined8 *)0x1;
                local_58 = (undefined8 *)0x1;
                uVar11 = lVar17 - lVar16;
                bVar6 = false;
                goto joined_r0x0056512a;
              }
            }
            lVar17 = lVar17 + 1;
            puVar10 = puVar10 + 4;
          } while (lVar18 != lVar17);
          puVar8 = local_58;
          lVar17 = lVar18;
        }
        uVar11 = lVar17 - lVar16;
        bVar6 = bVar14;
joined_r0x0056512a:
        uVar15 = (uint)uVar11;
        if (lVar16 == 0) {
          pcVar5 = (char *)*param_10;
          puVar12 = param_10;
          if (uVar11 == 0) {
            iVar7 = strcmp(pcVar5,"list");
            if (iVar7 == 0) {
              puVar8 = (undefined8 *)
                       outlet_bang(extraout_XMM0_Qa_02,param_2,param_3,param_4,param_5,param_6,
                                   param_7,param_8,*(long **)(param_9 + 0x18));
            }
            else {
              iVar7 = strcmp(pcVar5,";");
              puVar8 = (undefined8 *)CONCAT44(extraout_var_01,iVar7);
              if (iVar7 != 0) {
                iVar7 = strcmp(pcVar5,",");
                puVar8 = (undefined8 *)CONCAT44(extraout_var_02,iVar7);
                if (iVar7 != 0) {
                  plVar13 = *(long **)(param_9 + 0x18);
                  uVar15 = 0;
                  puVar10 = param_12 + -4;
                  uVar19 = extraout_XMM0_Qa_03;
                  goto LAB_005655d1;
                }
              }
            }
LAB_0056507d:
            bVar14 = bVar6;
          }
          else {
            iVar7 = strcmp(pcVar5,";");
            if (iVar7 == 0) {
              uVar4 = *param_12;
              puVar8 = (undefined8 *)(ulong)uVar4;
              if (uVar4 == 2) {
                puVar8 = (undefined8 *)atom_getsymbol((int *)param_12);
LAB_005654f2:
                local_68 = puVar8;
              }
              else if (uVar4 == 1) {
                puVar8 = gensym("float");
                goto LAB_005654f2;
              }
              plVar13 = (long *)local_68[1];
              bVar14 = true;
              if (plVar13 != (long *)0x0) {
                if (1 < (long)uVar11) {
                  uVar4 = *puVar1;
                  if (uVar4 == 2) {
                    puVar8 = (undefined8 *)atom_getsymbol((int *)puVar1);
                    uVar15 = uVar15 - 2;
                    puVar10 = param_12 + 8;
                    uVar19 = extraout_XMM0_Qa_10;
                  }
                  else {
                    puVar8 = (undefined8 *)(ulong)uVar4;
                    if (uVar4 != 1) goto LAB_00565080;
                    plVar9 = (long *)__tls_get_addr(&PTR_007159b0);
                    puVar8 = (undefined8 *)(*plVar9 + 0xc0);
                    uVar15 = uVar15 - 1;
                    puVar10 = puVar1;
                    uVar19 = extraout_XMM0_Qa_08;
                  }
                  puVar8 = (undefined8 *)
                           pd_typedmess(uVar19,param_2,param_3,param_4,param_5,param_6,param_7,
                                        param_8,plVar13,puVar8,uVar15,(int *)puVar10,param_13,
                                        param_14);
                  bVar14 = true;
                }
              }
            }
            else {
              iVar7 = strcmp(pcVar5,",");
              if (iVar7 == 0) {
                uVar4 = *param_12;
                puVar8 = (undefined8 *)(ulong)uVar4;
                if (uVar4 != 2) {
                  if (uVar4 != 1) goto LAB_0056507d;
                  plVar13 = *(long **)(param_9 + 0x18);
                  plVar9 = (long *)__tls_get_addr(&PTR_007159b0);
                  puVar12 = (undefined8 *)(*plVar9 + 0xc0);
                  uVar19 = extraout_XMM0_Qa_06;
                  goto LAB_0056531d;
                }
                plVar13 = *(long **)(param_9 + 0x18);
                puVar12 = (undefined8 *)atom_getsymbol((int *)param_12);
                uVar15 = uVar15 - 1;
                puVar10 = puVar1;
                uVar19 = extraout_XMM0_Qa_09;
              }
              else {
                plVar13 = *(long **)(param_9 + 0x18);
                uVar19 = extraout_XMM0_Qa_01;
LAB_0056531d:
                puVar10 = param_12;
              }
LAB_005655d1:
              puVar8 = (undefined8 *)
                       outlet_anything(uVar19,param_2,param_3,param_4,param_5,param_6,param_7,
                                       param_8,plVar13,puVar12,uVar15,(int *)puVar10,param_13,
                                       param_14);
              bVar14 = bVar6;
            }
          }
        }
        else {
          if (local_50 == (undefined8 *)0x0) {
            puVar10 = param_12 + lVar16 * 4;
            uVar4 = param_12[lVar16 * 4];
            puVar8 = (undefined8 *)(ulong)uVar4;
            if (uVar4 == 1) {
              plVar13 = *(long **)(param_9 + 0x18);
              plVar9 = (long *)__tls_get_addr(&PTR_007159b0);
              puVar8 = (undefined8 *)(*plVar9 + 0xc0);
              uVar19 = extraout_XMM0_Qa_04;
            }
            else {
              bVar14 = bVar6;
              if (uVar4 != 2) goto LAB_00565080;
              puVar8 = (undefined8 *)atom_getsymbol((int *)puVar10);
              iVar7 = strcmp((char *)*puVar8,",");
              puVar8 = (undefined8 *)CONCAT44(extraout_var,iVar7);
              if (iVar7 == 0) {
LAB_0056521f:
                if (uVar11 == 0) goto LAB_005654e0;
              }
              else {
                puVar8 = (undefined8 *)atom_getsymbol((int *)puVar10);
                iVar7 = strcmp((char *)*puVar8,";");
                puVar8 = (undefined8 *)CONCAT44(extraout_var_00,iVar7);
                if (iVar7 == 0) goto LAB_0056521f;
              }
              plVar13 = *(long **)(param_9 + 0x18);
              puVar8 = (undefined8 *)atom_getsymbol((int *)puVar10);
              uVar11 = (ulong)(uVar15 - 1);
              puVar10 = puVar10 + 4;
              uVar19 = extraout_XMM0_Qa;
            }
            puVar8 = (undefined8 *)
                     outlet_anything(uVar19,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                                     plVar13,puVar8,(uint)uVar11,(int *)puVar10,param_13,param_14);
          }
          else {
            if ((!bVar14) || (puVar12 != (undefined8 *)0x0)) {
              bVar14 = bVar6;
              if (puVar12 != (undefined8 *)0x0) {
                plVar13 = (long *)local_68[1];
                if (plVar13 != (long *)0x0) {
                  puVar10 = param_12 + lVar16 * 4;
                  uVar4 = param_12[lVar16 * 4];
                  puVar8 = (undefined8 *)(ulong)uVar4;
                  if (uVar4 == 2) {
                    puVar8 = (undefined8 *)atom_getsymbol((int *)puVar10);
                    iVar7 = strcmp((char *)*puVar8,",");
                    if (iVar7 == 0) {
joined_r0x005655a4:
                      puVar8 = (undefined8 *)0x0;
                      if (uVar11 == 0) goto LAB_0056507d;
                    }
                    else {
                      puVar8 = (undefined8 *)atom_getsymbol((int *)puVar10);
                      iVar7 = strcmp((char *)*puVar8,";");
                      if (iVar7 == 0) goto joined_r0x005655a4;
                    }
                    plVar13 = (long *)local_68[1];
                    puVar8 = (undefined8 *)atom_getsymbol((int *)puVar10);
                    uVar11 = (ulong)(uVar15 - 1);
                    puVar10 = puVar10 + 4;
                    uVar19 = extraout_XMM0_Qa_11;
                  }
                  else {
                    if (uVar4 != 1) goto LAB_00565080;
                    plVar9 = (long *)__tls_get_addr(&PTR_007159b0);
                    puVar8 = (undefined8 *)(*plVar9 + 0xc0);
                    uVar19 = extraout_XMM0_Qa_00;
                  }
                  puVar8 = (undefined8 *)
                           pd_typedmess(uVar19,param_2,param_3,param_4,param_5,param_6,param_7,
                                        param_8,plVar13,puVar8,(uint)uVar11,(int *)puVar10,param_13,
                                        param_14);
                  goto LAB_0056507d;
                }
              }
              goto LAB_00565080;
            }
            puVar10 = param_12 + lVar16 * 4;
            if (param_12[lVar16 * 4] == 2) {
              local_68 = (undefined8 *)atom_getsymbol((int *)puVar10);
            }
            else if (param_12[lVar16 * 4] == 1) {
              local_68 = gensym("float");
            }
            plVar13 = (long *)local_68[1];
            puVar8 = local_68;
            bVar14 = bVar6;
            if ((plVar13 == (long *)0x0) || ((long)uVar11 < 2)) goto LAB_00565080;
            if (puVar10[4] == 2) {
              puVar8 = (undefined8 *)atom_getsymbol((int *)(puVar10 + 4));
              puVar8 = (undefined8 *)
                       pd_typedmess(extraout_XMM0_Qa_07,param_2,param_3,param_4,param_5,param_6,
                                    param_7,param_8,plVar13,puVar8,uVar15 - 2,(int *)(puVar10 + 8),
                                    param_13,param_14);
            }
            else {
              if (puVar10[4] != 1) goto LAB_00565080;
              plVar9 = (long *)__tls_get_addr(&PTR_007159b0);
              puVar8 = (undefined8 *)
                       pd_typedmess(extraout_XMM0_Qa_05,param_2,param_3,param_4,param_5,param_6,
                                    param_7,param_8,plVar13,(undefined8 *)(*plVar9 + 0xc0),
                                    uVar15 - 1,(int *)(puVar10 + 4),param_13,param_14);
            }
          }
LAB_005654e0:
          bVar14 = bVar6;
        }
LAB_00565080:
        lVar16 = lVar17 + 1;
      } while (lVar16 < lVar18);
    }
  }
  return puVar8;
}


