// Function : scale_new
// Namespace: 
// Entry    : 005605e0
// Prototype: long * scale_new(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, undefined8 param_9, ulong param_10, int * param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 005605e0 - 00560871


long * scale_new(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                undefined8 param_9,ulong param_10,int *param_11,undefined8 param_12,char *param_13,
                undefined8 param_14)

{
  int iVar1;
  long *plVar2;
  undefined8 *puVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  undefined8 extraout_RDX_02;
  undefined8 extraout_RDX_03;
  uint uVar7;
  ulong uVar8;
  long lVar9;
  int iVar10;
  float fVar11;
  float extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 uVar13;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Db_01;
  undefined4 extraout_XMM0_Db_02;
  undefined8 uVar12;
  
  uVar8 = param_10 & 0xffffffff;
  plVar2 = pd_new(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,scale_class,
                  param_10,param_11,param_12,param_13,param_14);
  iVar10 = 0;
  if ((int)param_10 < 1) {
    param_2 = 0;
    lVar9 = 0;
  }
  else {
    lVar9 = 0;
    fVar11 = 0.0;
    uVar13 = 0;
    uVar12 = extraout_RDX;
    do {
      while( true ) {
        uVar7 = (uint)uVar8;
        if (*param_11 == 2) break;
        if (*param_11 != 1) {
LAB_0056084d:
          pd_error(CONCAT44(uVar13,fVar11),param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                   (long)plVar2,"scale~: improper args",uVar12,param_12,param_13,param_14);
          return (long *)0x0;
        }
        fVar11 = (float)atom_getfloatarg(0,uVar7,(long)param_11);
        switch(iVar10) {
        case 0:
          break;
        case 1:
          break;
        case 2:
          break;
        case 3:
          break;
        case 4:
        }
        uVar8 = (ulong)(uVar7 - 1);
        param_11 = param_11 + 4;
        iVar10 = iVar10 + 1;
        uVar12 = extraout_RDX_00;
        uVar13 = extraout_XMM0_Db;
        if ((int)(uVar7 - 1) < 1) goto LAB_0056075b;
      }
      puVar3 = (undefined8 *)atom_getsymbolarg(0,uVar7,(long)param_11);
      iVar1 = strcmp((char *)*puVar3,"@classic");
      uVar12 = extraout_RDX_01;
      fVar11 = extraout_XMM0_Da;
      uVar13 = extraout_XMM0_Db_00;
      if ((iVar1 != 0) || (uVar7 < 2)) goto LAB_0056084d;
      fVar11 = (float)atom_getfloatarg(1,uVar7,(long)param_11);
      lVar9 = (long)(int)fVar11;
      uVar8 = (ulong)(uVar7 - 2);
      param_11 = param_11 + 8;
      uVar12 = extraout_RDX_02;
      uVar13 = extraout_XMM0_Db_01;
    } while (0 < (int)(uVar7 - 2));
  }
LAB_0056075b:
  plVar4 = (long *)__tls_get_addr(&PTR_007159b0);
  plVar5 = inlet_new(CONCAT44(extraout_XMM0_Db_02,extraout_XMM0_Da_00),param_2,param_3,param_4,
                     param_5,param_6,param_7,param_8,(long)plVar2,(long)plVar2,*plVar4 + 0xf0,
                     *plVar4 + 0xf0,param_13,param_14);
  plVar2[6] = (long)plVar5;
  uVar12 = pd_float(plVar5);
  plVar5 = inlet_new(uVar12,param_2,param_3,param_4,param_5,param_6,param_7,param_8,(long)plVar2,
                     (long)plVar2,*plVar4 + 0xf0,*plVar4 + 0xf0,param_13,param_14);
  plVar2[7] = (long)plVar5;
  uVar12 = pd_float(plVar5);
  plVar5 = inlet_new(uVar12,param_2,param_3,param_4,param_5,param_6,param_7,param_8,(long)plVar2,
                     (long)plVar2,*plVar4 + 0xf0,*plVar4 + 0xf0,param_13,param_14);
  plVar2[8] = (long)plVar5;
  uVar12 = pd_float(plVar5);
  plVar5 = inlet_new(uVar12,param_2,param_3,param_4,param_5,param_6,param_7,param_8,(long)plVar2,
                     (long)plVar2,*plVar4 + 0xf0,*plVar4 + 0xf0,param_13,param_14);
  plVar2[9] = (long)plVar5;
  uVar12 = pd_float(plVar5);
  lVar6 = *plVar4 + 0xf0;
  plVar5 = inlet_new(uVar12,param_2,param_3,param_4,param_5,param_6,param_7,param_8,(long)plVar2,
                     (long)plVar2,lVar6,lVar6,param_13,param_14);
  plVar2[10] = (long)plVar5;
  uVar12 = pd_float(plVar5);
  outlet_new(uVar12,param_2,param_3,param_4,param_5,param_6,param_7,param_8,(long)plVar2,
             *plVar4 + 0xf0,extraout_RDX_03,lVar6,param_13,param_14);
  plVar2[0xb] = lVar9;
  return plVar2;
}


