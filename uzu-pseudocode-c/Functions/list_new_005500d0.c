// Function : list_new
// Namespace: 
// Entry    : 005500d0
// Prototype: undefined8 list_new(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, undefined8 param_9, undefined8 param_10, ulong param_11, int * param_12, char * param_13, undefined8 param_14)
// Body     : 005500d0 - 00550467


undefined8
list_new(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
        undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
        undefined8 param_9,undefined8 param_10,ulong param_11,int *param_12,char *param_13,
        undefined8 param_14)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  void *pvVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  int *piVar8;
  int *piVar9;
  int iVar10;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  undefined8 extraout_RDX_02;
  undefined8 extraout_RDX_03;
  undefined8 extraout_RDX_04;
  undefined8 extraout_RDX_05;
  undefined8 extraout_RDX_06;
  undefined8 uVar11;
  undefined8 extraout_RDX_07;
  undefined8 extraout_RDX_08;
  undefined8 extraout_RDX_09;
  undefined8 extraout_RDX_10;
  undefined8 extraout_RDX_11;
  undefined8 extraout_RDX_12;
  undefined8 extraout_RDX_13;
  undefined8 uVar12;
  ulong uVar13;
  char *pcVar14;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  undefined4 extraout_XMM0_Da_04;
  undefined4 extraout_XMM0_Da_05;
  undefined4 extraout_XMM0_Da_06;
  undefined4 extraout_XMM0_Da_07;
  undefined4 extraout_XMM0_Da_08;
  undefined4 extraout_XMM0_Da_09;
  undefined4 extraout_XMM0_Da_10;
  undefined4 uVar15;
  undefined4 extraout_XMM0_Da_11;
  undefined4 extraout_XMM0_Da_12;
  undefined4 extraout_XMM0_Da_13;
  undefined4 extraout_XMM0_Da_14;
  undefined4 extraout_XMM0_Da_15;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Db_01;
  undefined4 extraout_XMM0_Db_02;
  undefined4 extraout_XMM0_Db_03;
  undefined4 extraout_XMM0_Db_04;
  undefined4 extraout_XMM0_Db_05;
  undefined4 extraout_XMM0_Db_06;
  undefined4 extraout_XMM0_Db_07;
  undefined4 extraout_XMM0_Db_08;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Db_09;
  undefined4 extraout_XMM0_Db_10;
  undefined4 extraout_XMM0_Db_11;
  undefined4 extraout_XMM0_Db_12;
  undefined4 extraout_XMM0_Db_13;
  undefined4 extraout_XMM0_Db_14;
  undefined4 extraout_XMM0_Db_15;
  undefined4 extraout_XMM0_Db_16;
  
  iVar10 = (int)param_11;
  if (iVar10 == 0) {
    plVar7 = pd_new(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                    *(long *)PTR_list_append_class_00715640,param_10,param_11,param_12,param_13,
                    param_14);
    plVar3 = plVar7 + 6;
    plVar7[6] = *(long *)PTR_alist_class_00715f58;
    plVar7[7] = 0;
    plVar7[8] = 0;
    pvVar4 = getbytes(0);
    plVar7[8] = (long)pvVar4;
    *(undefined4 *)(plVar7 + 7) = 0;
    if (pvVar4 == (void *)0x0) {
      pd_error(CONCAT44(extraout_XMM0_Db_06,extraout_XMM0_Da_06),param_2,param_3,param_4,param_5,
               param_6,param_7,param_8,0,"list: out of memory",extraout_RDX_05,param_12,param_13,
               param_14);
    }
    else {
      *(undefined4 *)((long)plVar7 + 0x3c) = 0;
    }
LAB_0055026e:
    plVar6 = (long *)__tls_get_addr(&PTR_007159b0);
    outlet_new(CONCAT44(extraout_XMM0_Db_07,extraout_XMM0_Da_07),param_2,param_3,param_4,param_5,
               param_6,param_7,param_8,(long)plVar7,*plVar6 + 0xc0,extraout_RDX_06,param_12,param_13
               ,param_14);
    inlet_new(CONCAT44(extraout_XMM0_Db_08,extraout_XMM0_Da_08),param_2,param_3,param_4,param_5,
              param_6,param_7,param_8,(long)plVar7,(long)plVar3,0,0,param_13,param_14);
LAB_0055029d:
    plVar3 = (long *)__tls_get_addr(&PTR_007159b0);
    lVar5 = *plVar3;
  }
  else {
    uVar13 = param_11 & 0xffffffff;
    if (*param_12 != 2) {
      plVar7 = pd_new(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                      *(long *)PTR_list_append_class_00715640,param_10,param_11,param_12,param_13,
                      param_14);
      plVar3 = plVar7 + 6;
      plVar7[6] = *(long *)PTR_alist_class_00715f58;
      plVar7[7] = 0;
      plVar7[8] = 0;
      alist_list(0,param_2,param_3,param_4,param_5,param_6,param_7,param_8,(long)plVar3,0,uVar13,
                 (undefined8 *)param_12,param_13,param_14);
      goto LAB_0055026e;
    }
    puVar1 = *(undefined8 **)(param_12 + 2);
    piVar8 = param_12;
    uVar12 = param_10;
    puVar2 = gensym("append");
    if (puVar1 != puVar2) {
      puVar2 = gensym("prepend");
      if (puVar1 == puVar2) {
        plVar3 = (long *)PTR_list_prepend_class_00715770;
        uVar11 = extraout_RDX_00;
        uVar15 = extraout_XMM0_Da_00;
        uVar16 = extraout_XMM0_Db_00;
        goto LAB_005502d5;
      }
      puVar2 = gensym("split");
      if (puVar1 == puVar2) {
        uVar15 = atom_getfloatarg(1,iVar10,(long)param_12);
        plVar7 = pd_new(CONCAT44(extraout_XMM0_Db_11,uVar15),param_2,param_3,param_4,param_5,param_6
                        ,param_7,param_8,*(long *)PTR_list_split_class_00715c58,uVar13,
                        extraout_RDX_08,piVar8,param_13,param_14);
        plVar3 = (long *)__tls_get_addr(&PTR_007159b0);
        plVar6 = outlet_new(CONCAT44(extraout_XMM0_Db_12,extraout_XMM0_Da_11),param_2,param_3,
                            param_4,param_5,param_6,param_7,param_8,(long)plVar7,*plVar3 + 0xc0,
                            extraout_RDX_09,piVar8,param_13,param_14);
        plVar7[7] = (long)plVar6;
        plVar6 = outlet_new(CONCAT44(extraout_XMM0_Db_13,extraout_XMM0_Da_12),param_2,param_3,
                            param_4,param_5,param_6,param_7,param_8,(long)plVar7,*plVar3 + 0xc0,
                            extraout_RDX_10,piVar8,param_13,param_14);
        plVar7[8] = (long)plVar6;
        plVar6 = outlet_new(CONCAT44(extraout_XMM0_Db_14,extraout_XMM0_Da_13),param_2,param_3,
                            param_4,param_5,param_6,param_7,param_8,(long)plVar7,*plVar3 + 0xc0,
                            extraout_RDX_11,piVar8,param_13,param_14);
        plVar7[9] = (long)plVar6;
        floatinlet_new(CONCAT44(extraout_XMM0_Db_15,extraout_XMM0_Da_14),param_2,param_3,param_4,
                       param_5,param_6,param_7,param_8,(long)plVar7,(long)(plVar7 + 6),
                       extraout_RDX_12,piVar8,param_13,param_14);
        *(undefined4 *)(plVar7 + 6) = uVar15;
        lVar5 = *plVar3;
        goto LAB_0055033f;
      }
      puVar2 = gensym("trim");
      if (puVar1 == puVar2) {
        plVar7 = pd_new(CONCAT44(extraout_XMM0_Db_01,extraout_XMM0_Da_01),param_2,param_3,param_4,
                        param_5,param_6,param_7,param_8,*(long *)PTR_list_trim_class_00715f90,uVar12
                        ,extraout_RDX_01,piVar8,param_13,param_14);
        plVar3 = (long *)__tls_get_addr(&PTR_007159b0);
        outlet_new(CONCAT44(extraout_XMM0_Db_16,extraout_XMM0_Da_15),param_2,param_3,param_4,param_5
                   ,param_6,param_7,param_8,(long)plVar7,*plVar3 + 0xc0,extraout_RDX_13,piVar8,
                   param_13,param_14);
        goto LAB_0055033b;
      }
      pcVar14 = "length";
      puVar2 = gensym("length");
      if (puVar1 == puVar2) {
        plVar7 = list_length_new(CONCAT44(extraout_XMM0_Db_02,extraout_XMM0_Da_02),param_2,param_3,
                                 param_4,param_5,param_6,param_7,param_8,pcVar14,uVar12,
                                 extraout_RDX_02,piVar8,param_13,param_14);
      }
      else {
        pcVar14 = "fromsymbol";
        puVar2 = gensym("fromsymbol");
        if (puVar1 == puVar2) {
          plVar7 = list_fromsymbol_new(CONCAT44(extraout_XMM0_Db_03,extraout_XMM0_Da_03),param_2,
                                       param_3,param_4,param_5,param_6,param_7,param_8,pcVar14,
                                       uVar12,extraout_RDX_03,piVar8,param_13,param_14);
        }
        else {
          pcVar14 = "tosymbol";
          puVar2 = gensym("tosymbol");
          if (puVar1 == puVar2) {
            plVar7 = list_tosymbol_new(CONCAT44(extraout_XMM0_Db_04,extraout_XMM0_Da_04),param_2,
                                       param_3,param_4,param_5,param_6,param_7,param_8,pcVar14,
                                       uVar12,extraout_RDX_04,piVar8,param_13,param_14);
          }
          else {
            puVar2 = gensym("store");
            if (puVar1 != puVar2) {
              pd_error(CONCAT44(extraout_XMM0_Db_05,extraout_XMM0_Da_05),param_2,param_3,param_4,
                       param_5,param_6,param_7,param_8,0,"list %s: unknown function",*puVar1,piVar8,
                       param_13,param_14);
              plVar3 = (long *)__tls_get_addr(&PTR_007159b0);
              lVar5 = *plVar3;
              *(undefined8 *)(lVar5 + 0x58) = 0;
              goto LAB_00550343;
            }
            plVar7 = list_store_new(CONCAT44(extraout_XMM0_Db_05,extraout_XMM0_Da_05),param_2,
                                    param_3,param_4,param_5,param_6,param_7,param_8,param_10,
                                    (ulong)(iVar10 - 1),(undefined8 *)(param_12 + 4),piVar8,param_13
                                    ,param_14);
          }
        }
      }
      goto LAB_0055029d;
    }
    plVar3 = (long *)PTR_list_append_class_00715640;
    uVar11 = extraout_RDX;
    uVar15 = extraout_XMM0_Da;
    uVar16 = extraout_XMM0_Db;
LAB_005502d5:
    piVar9 = param_12 + 4;
    plVar7 = pd_new(CONCAT44(uVar16,uVar15),param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                    *plVar3,uVar12,uVar11,piVar8,param_13,param_14);
    plVar7[6] = *(long *)PTR_alist_class_00715f58;
    plVar7[7] = 0;
    plVar7[8] = 0;
    alist_list(0,param_2,param_3,param_4,param_5,param_6,param_7,param_8,(long)(plVar7 + 6),0,
               (ulong)(iVar10 - 1),(undefined8 *)piVar9,param_13,param_14);
    plVar3 = (long *)__tls_get_addr(&PTR_007159b0);
    outlet_new(CONCAT44(extraout_XMM0_Db_09,extraout_XMM0_Da_09),param_2,param_3,param_4,param_5,
               param_6,param_7,param_8,(long)plVar7,*plVar3 + 0xc0,extraout_RDX_07,piVar9,param_13,
               param_14);
    inlet_new(CONCAT44(extraout_XMM0_Db_10,extraout_XMM0_Da_10),param_2,param_3,param_4,param_5,
              param_6,param_7,param_8,(long)plVar7,(long)(plVar7 + 6),0,0,param_13,param_14);
LAB_0055033b:
    lVar5 = *plVar3;
  }
LAB_0055033f:
  *(long **)(lVar5 + 0x58) = plVar7;
LAB_00550343:
  return *(undefined8 *)(lVar5 + 0x58);
}


