// Function : text_sequence_new
// Namespace: 
// Entry    : 00559f40
// Prototype: long * text_sequence_new(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, undefined8 param_9, ulong param_10, int * param_11, int * param_12, char * param_13, undefined8 param_14)
// Body     : 00559f40 - 0055a2fb


long * text_sequence_new(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4
                        ,undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8
                        ,undefined8 param_9,ulong param_10,int *param_11,int *param_12,
                        char *param_13,undefined8 param_14)

{
  char *__s1;
  bool bVar1;
  int iVar2;
  int iVar3;
  long *plVar4;
  long extraout_RAX;
  long lVar5;
  undefined8 *puVar6;
  void *pvVar7;
  long *plVar8;
  undefined8 extraout_RDX;
  undefined8 uVar9;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  undefined8 extraout_RDX_02;
  undefined8 extraout_RDX_03;
  undefined8 extraout_RDX_04;
  undefined8 extraout_RDX_05;
  undefined8 extraout_RDX_06;
  undefined8 extraout_RDX_07;
  undefined8 extraout_RDX_08;
  undefined8 extraout_RDX_09;
  uint uVar10;
  ulong uVar11;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  float fVar12;
  undefined4 extraout_XMM0_Da_04;
  undefined4 extraout_XMM0_Da_05;
  undefined4 extraout_XMM0_Da_06;
  undefined4 extraout_XMM0_Da_07;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Db_01;
  undefined4 extraout_XMM0_Db_02;
  undefined4 extraout_XMM0_Db_03;
  undefined8 uVar13;
  undefined4 extraout_XMM0_Db_04;
  undefined4 extraout_XMM0_Db_05;
  undefined4 extraout_XMM0_Db_06;
  undefined4 extraout_XMM0_Db_07;
  int local_40;
  float local_3c;
  long *local_38;
  
  uVar11 = param_10 & 0xffffffff;
  plVar4 = pd_new(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                  *(long *)PTR_text_sequence_class_00715ce8,param_10,param_11,param_12,param_13,
                  param_14);
  plVar8 = plVar4 + 6;
  plVar4[6] = 0;
  plVar4[10] = 0;
  plVar4[0xb] = 0;
  gpointer_init(plVar4 + 7);
  iVar3 = (int)param_10;
  local_38 = plVar8;
  if (iVar3 == 0) {
    uVar11 = 0;
  }
  else if (*param_11 == 2) {
    puVar6 = *(undefined8 **)(param_11 + 2);
    iVar2 = strcmp((char *)*puVar6,"-s");
    if (iVar2 == 0) {
      if (((iVar3 < 3) || (param_11[4] != 2)) || (param_11[8] != 2)) {
        pd_error(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,param_5,param_6
                 ,param_7,param_8,(long)plVar4,"%s: \'-s\' needs a struct and field name",
                 "text sequence",param_12,param_13,param_14);
      }
      else {
        canvas_makebindsym(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,
                           param_5,param_6,param_7,param_8,*(undefined8 **)(param_11 + 6));
        plVar4[10] = extraout_RAX;
        plVar4[0xb] = *(long *)(param_11 + 10);
        uVar11 = (ulong)(iVar3 - 3);
        param_11 = param_11 + 0xc;
      }
    }
    else {
      *plVar8 = (long)puVar6;
      uVar11 = (ulong)(iVar3 - 1);
      param_11 = param_11 + 4;
    }
  }
  bVar1 = false;
  plVar4[0x11] = 0;
  *(undefined4 *)(plVar4 + 0x12) = 0;
  *(undefined2 *)(plVar4 + 0x16) = 0;
  plVar4[0x15] = 0;
  lVar5 = clock_new(plVar4,text_sequence_tick);
  uVar13 = CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00);
  plVar4[0x13] = lVar5;
  uVar9 = extraout_RDX;
  if ((int)uVar11 != 0) {
    bVar1 = false;
    do {
      uVar10 = (uint)uVar11;
      if ((*param_11 != 2) || (__s1 = (char *)**(undefined8 **)(param_11 + 2), *__s1 != '-')) {
        uVar13 = post(uVar13,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                      "warning: text sequence ignoring extra argument: ");
        uVar13 = postatom(uVar13,param_2,param_3,param_4,param_5,param_6,param_7,param_8,uVar10,
                          param_11,extraout_RDX_04,param_12,param_13,param_14);
        uVar13 = endpost(uVar13,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
        uVar9 = extraout_RDX_05;
        break;
      }
      iVar3 = strcmp(__s1,"-w");
      uVar13 = CONCAT44(extraout_XMM0_Db_01,extraout_XMM0_Da_01);
      if ((iVar3 == 0) && (1 < (int)uVar10)) {
        if (param_11[4] == 2) {
          plVar4[0x11] = *(long *)(param_11 + 6);
          iVar3 = 0;
        }
        else {
          plVar4[0x11] = 0;
          iVar3 = (int)(float)param_11[6];
          param_12 = (int *)0x0;
          if (iVar3 < 0) {
            iVar3 = 0;
          }
        }
        *(int *)(plVar4 + 0x12) = iVar3;
        uVar10 = uVar10 - 1;
        param_11 = param_11 + 4;
        uVar9 = extraout_RDX_00;
      }
      else {
        iVar3 = strcmp(__s1,"-g");
        uVar13 = CONCAT44(extraout_XMM0_Db_02,extraout_XMM0_Da_02);
        if (iVar3 == 0) {
          bVar1 = true;
          uVar9 = extraout_RDX_01;
        }
        else {
          iVar3 = strcmp(__s1,"-t");
          if ((iVar3 == 0) && (2 < (int)uVar10)) {
            puVar6 = (undefined8 *)atom_getsymbolarg(2,uVar10,(long)param_11);
            fVar12 = (float)atom_getfloatarg(1,uVar10,(long)param_11);
            param_12 = &local_40;
            parsetimeunits(fVar12,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                           (long)plVar4,puVar6,&local_3c,param_12,param_13,param_14);
            uVar13 = clock_setunit((double)local_3c,(double *)plVar4[0x13],local_40);
            uVar10 = uVar10 - 2;
            param_11 = param_11 + 8;
            uVar9 = extraout_RDX_02;
          }
          else {
            uVar13 = pd_error(CONCAT44(extraout_XMM0_Db_03,extraout_XMM0_Da_03),param_2,param_3,
                              param_4,param_5,param_6,param_7,param_8,(long)plVar4,
                              "text sequence: unknown flag \'%s\'...",__s1,param_12,param_13,
                              param_14);
            uVar9 = extraout_RDX_03;
          }
        }
      }
      param_11 = param_11 + 4;
      uVar11 = (ulong)(uVar10 - 1);
    } while (uVar10 - 1 != 0);
  }
  if (plVar4[10] == 0) {
    symbolinlet_new(uVar13,param_2,param_3,param_4,param_5,param_6,param_7,param_8,(long)plVar4,
                    (long)local_38,uVar9,param_12,param_13,param_14);
  }
  else {
    pointerinlet_new(uVar13,param_2,param_3,param_4,param_5,param_6,param_7,param_8,(long)plVar4,
                     (long)(plVar4 + 7),uVar9,param_12,param_13,param_14);
  }
  *(undefined4 *)((long)plVar4 + 0x7c) = 0;
  pvVar7 = getbytes(0);
  plVar4[0x10] = (long)pvVar7;
  *(undefined4 *)(plVar4 + 0xf) = 0x7fffffff;
  if (bVar1) {
    plVar4[0xc] = 0;
  }
  else {
    plVar8 = (long *)__tls_get_addr(&PTR_007159b0);
    plVar8 = outlet_new(CONCAT44(extraout_XMM0_Db_04,extraout_XMM0_Da_04),param_2,param_3,param_4,
                        param_5,param_6,param_7,param_8,(long)plVar4,*plVar8 + 0xc0,extraout_RDX_06,
                        param_12,param_13,param_14);
    plVar4[0xc] = (long)plVar8;
    if ((plVar4[0x11] == 0) && ((int)plVar4[0x12] == 0)) {
      plVar8 = (long *)0x0;
      goto LAB_0055a290;
    }
  }
  plVar8 = (long *)__tls_get_addr(&PTR_007159b0);
  plVar8 = outlet_new(CONCAT44(extraout_XMM0_Db_05,extraout_XMM0_Da_05),param_2,param_3,param_4,
                      param_5,param_6,param_7,param_8,(long)plVar4,*plVar8 + 0xc0,extraout_RDX_07,
                      param_12,param_13,param_14);
LAB_0055a290:
  plVar4[0xd] = (long)plVar8;
  plVar8 = (long *)__tls_get_addr(&PTR_007159b0);
  plVar8 = outlet_new(CONCAT44(extraout_XMM0_Db_06,extraout_XMM0_Da_06),param_2,param_3,param_4,
                      param_5,param_6,param_7,param_8,(long)plVar4,*plVar8 + 0xa8,extraout_RDX_08,
                      param_12,param_13,param_14);
  plVar4[0xe] = (long)plVar8;
  if (bVar1) {
    if ((int)plVar4[0x12] != 0) {
      pd_error(CONCAT44(extraout_XMM0_Db_07,extraout_XMM0_Da_07),param_2,param_3,param_4,param_5,
               param_6,param_7,param_8,(long)plVar4,
               "warning: text sequence: numeric \'w\' argument ignored if \'-g\' given",
               extraout_RDX_09,param_12,param_13,param_14);
    }
    *(undefined4 *)(plVar4 + 0x12) = 0x40000000;
  }
  return plVar4;
}


