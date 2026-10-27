// Function : bicoeff_new
// Namespace: 
// Entry    : 005677a0
// Prototype: long * bicoeff_new(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, undefined8 param_9, ulong param_10, int * param_11, int * param_12, char * param_13, undefined8 param_14)
// Body     : 005677a0 - 00567a78


/* WARNING: Type propagation algorithm not settling */

long * bicoeff_new(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,ulong param_10,int *param_11,int *param_12,char *param_13,
                  undefined8 param_14)

{
  uint uVar1;
  long *param3;
  long extraout_RAX;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 *puVar4;
  int iVar5;
  long *plVar6;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  undefined8 extraout_RDX_02;
  undefined8 uVar7;
  undefined8 extraout_RDX_03;
  undefined8 extraout_RDX_04;
  undefined8 extraout_RDX_05;
  int *piVar8;
  uint uVar9;
  ulong uVar10;
  int iVar11;
  int iVar12;
  float extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  float fVar13;
  float extraout_XMM0_Da_02;
  float extraout_XMM0_Da_03;
  float extraout_XMM0_Da_04;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Db_01;
  undefined4 extraout_XMM0_Db_02;
  undefined4 uVar14;
  undefined4 extraout_XMM0_Db_03;
  undefined4 extraout_XMM0_Db_04;
  undefined4 extraout_XMM0_Db_05;
  undefined8 *local_420;
  char local_418 [1000];
  
  uVar10 = param_10 & 0xffffffff;
  param3 = pd_new(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                  *(long *)PTR_bicoeff_class_00715af8,param_10,param_11,param_12,param_13,param_14);
  local_420 = gensym("peaking");
  uVar9 = (uint)param_10;
  fVar13 = extraout_XMM0_Da;
  uVar14 = extraout_XMM0_Db;
  if (uVar9 == 0) {
    iVar11 = 0x1c2;
    iVar12 = 0x96;
  }
  else {
    if (*param_11 == 1) {
      iVar11 = 100;
      if (100 < (int)(float)param_11[2]) {
        iVar11 = (int)(float)param_11[2];
      }
      uVar1 = uVar9 - 1;
      if (uVar1 != 0) {
        param_12 = param_11 + 4;
        iVar12 = 0x96;
        piVar8 = param_12;
        if (*param_12 == 1) {
          iVar12 = 0x32;
          if (0x32 < (int)(float)param_11[6]) {
            iVar12 = (int)(float)param_11[6];
          }
          uVar1 = uVar9 - 2;
          if (uVar1 == 0) goto joined_r0x00567a6e;
          param_12 = param_11 + 8;
          piVar8 = param_12;
          if (*param_12 == 2) {
            local_420 = *(undefined8 **)(param_11 + 10);
            uVar1 = uVar9 - 3;
            piVar8 = param_11 + 0xc;
          }
        }
        uVar10 = (ulong)uVar1;
        goto joined_r0x00567877;
      }
      iVar12 = 0x96;
    }
    else {
      iVar12 = 0x96;
      iVar11 = 0x1c2;
      piVar8 = param_11;
      uVar1 = uVar9;
joined_r0x00567877:
      uVar7 = extraout_RDX;
      if (0 < (int)uVar1) {
LAB_005679b1:
        do {
          if (*piVar8 != 2) {
LAB_00567a2f:
            pd_error(CONCAT44(uVar14,fVar13),param_2,param_3,param_4,param_5,param_6,param_7,param_8
                     ,(long)param3,"[bicoeff]: improper args",uVar7,param_12,param_13,param_14);
            return (long *)0x0;
          }
          uVar9 = (uint)uVar10;
          puVar2 = (undefined8 *)atom_getsymbolarg(0,uVar9,(long)piVar8);
          puVar4 = gensym("-dim");
          if (puVar2 == puVar4) {
            uVar7 = extraout_RDX_03;
            fVar13 = extraout_XMM0_Da_02;
            uVar14 = extraout_XMM0_Db_03;
            if ((uVar9 < 3) || (piVar8[4] != 1)) goto LAB_00567a2f;
            fVar13 = (float)atom_getfloatarg(1,uVar9,(long)piVar8);
            iVar11 = (int)fVar13;
            fVar13 = (float)atom_getfloatarg(2,uVar9,(long)piVar8);
            iVar12 = (int)fVar13;
            param_12 = (int *)&DAT_00000030;
            piVar8 = piVar8 + 0xc;
            uVar10 = (ulong)(uVar9 - 3);
            uVar7 = extraout_RDX_02;
            uVar14 = extraout_XMM0_Db_02;
            if (uVar9 - 3 == 0 || (int)uVar9 < 3) break;
            goto LAB_005679b1;
          }
          puVar4 = gensym("-type");
          uVar7 = extraout_RDX_04;
          fVar13 = extraout_XMM0_Da_03;
          uVar14 = extraout_XMM0_Db_04;
          if (((puVar2 != puVar4) || (uVar9 < 2)) || (piVar8[4] != 2)) goto LAB_00567a2f;
          local_420 = (undefined8 *)atom_getsymbolarg(1,uVar9,(long)piVar8);
          param_12 = (int *)0x20;
          piVar8 = piVar8 + 8;
          uVar10 = (ulong)(uVar9 - 2);
          uVar7 = extraout_RDX_05;
          fVar13 = extraout_XMM0_Da_04;
          uVar14 = extraout_XMM0_Db_05;
        } while (uVar9 - 2 != 0 && 1 < (int)uVar9);
      }
    }
joined_r0x00567a6e:
    iVar5 = 200;
    if (iVar11 < 0xc9) goto LAB_00567893;
  }
  iVar5 = iVar11;
LAB_00567893:
  *(int *)(param3 + 7) = iVar5;
  iVar11 = 100;
  if (100 < iVar12) {
    iVar11 = iVar12;
  }
  *(int *)((long)param3 + 0x3c) = iVar11;
  param3[9] = (long)local_420;
  canvas_getcurrent(CONCAT44(uVar14,fVar13),param_2,param_3,param_4,param_5,param_6,param_7,param_8)
  ;
  param3[6] = extraout_RAX;
  *(undefined4 *)(param3 + 8) = *(undefined4 *)(extraout_RAX + 0xec);
  snprintf((char *)(param3 + 0x88),1000,"T%lx",param3);
  plVar6 = param3;
  snprintf((char *)(param3 + 0x105),1000,"::N%lx",(ulong)param3);
  sprintf(local_418,"#R%lx",(ulong)param3);
  puVar2 = gensym(local_418);
  param3[10] = (long)puVar2;
  pd_bind(CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00),param_2,param_3,param_4,param_5,param_6,
          param_7,param_8,param3,(long)puVar2,extraout_RDX_00,plVar6,param_13,param_14);
  plVar3 = (long *)__tls_get_addr(&PTR_007159b0);
  outlet_new(CONCAT44(extraout_XMM0_Db_01,extraout_XMM0_Da_01),param_2,param_3,param_4,param_5,
             param_6,param_7,param_8,(long)param3,*plVar3 + 0xc0,extraout_RDX_01,plVar6,param_13,
             param_14);
  return param3;
}


