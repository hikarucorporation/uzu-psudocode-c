// Function : loadbanger_new
// Namespace: 
// Entry    : 0056a2a0
// Prototype: long * loadbanger_new(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, undefined8 param_9, ulong param_10, int * param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 0056a2a0 - 0056a456


long * loadbanger_new(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                     undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                     undefined8 param_9,ulong param_10,int *param_11,undefined8 param_12,
                     char *param_13,undefined8 param_14)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  undefined8 extraout_RDX_02;
  undefined8 uVar7;
  undefined8 extraout_RDX_03;
  uint uVar8;
  ulong uVar9;
  uint uVar10;
  int iVar11;
  float extraout_XMM0_Da;
  float fVar12;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Db;
  undefined4 uVar13;
  undefined4 extraout_XMM0_Db_00;
  
  uVar9 = param_10 & 0xffffffff;
  plVar1 = pd_new(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,loadbanger_class,
                  param_10,param_11,param_12,param_13,param_14);
  *(undefined8 *)((long)plVar1 + 0x34) = 0;
  uVar7 = extraout_RDX;
  fVar12 = extraout_XMM0_Da;
  uVar13 = extraout_XMM0_Db;
  if (2 < (int)param_10) {
LAB_0056a394:
    pd_error(CONCAT44(uVar13,fVar12),param_2,param_3,param_4,param_5,param_6,param_7,param_8,
             (long)plVar1,"[loadbanger]: improper args",uVar7,param_12,param_13,param_14);
    return (long *)0x0;
  }
  if (0 < (int)param_10) {
    uVar10 = 1;
    fVar12 = 0.0;
    do {
      uVar13 = 0;
      iVar11 = (int)uVar9;
      if ((*param_11 == 1) && (fVar12 == DAT_005d9058)) {
        fVar12 = (float)atom_getfloatarg(0,iVar11,(long)param_11);
        uVar10 = (uint)fVar12;
        uVar7 = extraout_RDX_00;
        fVar12 = DAT_005d9038;
      }
      else {
        if ((*param_11 != 2) || (fVar12 != DAT_005d9058)) goto LAB_0056a394;
        puVar2 = (undefined8 *)atom_getsymbolarg(0,iVar11,(long)param_11);
        puVar3 = gensym("-init");
        if (puVar2 == puVar3) {
          *(undefined4 *)((long)plVar1 + 0x34) = 1;
          uVar7 = extraout_RDX_01;
        }
        else {
          puVar3 = gensym("-fin");
          uVar13 = 0;
          uVar7 = extraout_RDX_02;
          if (puVar2 != puVar3) goto LAB_0056a394;
          *(undefined4 *)(plVar1 + 7) = 1;
        }
      }
      param_11 = param_11 + 4;
      uVar9 = (ulong)(iVar11 - 1);
    } while (1 < iVar11);
    if (1 < (int)uVar10) {
      uVar8 = 0x40;
      if (uVar10 < 0x40) {
        uVar8 = uVar10;
      }
      plVar4 = getbytes((ulong)(uVar8 * 8));
      if (plVar4 == (long *)0x0) {
        return (long *)0x0;
      }
      goto LAB_0056a3db;
    }
  }
  uVar8 = 1;
  plVar4 = (long *)0x0;
LAB_0056a3db:
  *(uint *)(plVar1 + 6) = uVar8;
  plVar6 = plVar1 + 10;
  if (plVar4 != (long *)0x0) {
    plVar6 = plVar4;
  }
  plVar1[9] = (long)plVar6;
  uVar9 = 0;
  do {
    plVar4 = (long *)__tls_get_addr(&PTR_007159b0);
    plVar4 = outlet_new(CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00),param_2,param_3,param_4,
                        param_5,param_6,param_7,param_8,(long)plVar1,*plVar4 + 0xa8,extraout_RDX_03,
                        plVar6,param_13,param_14);
    plVar6 = (long *)plVar1[9];
    plVar6[uVar9] = (long)plVar4;
    uVar9 = uVar9 + 1;
  } while (uVar8 != uVar9);
  lVar5 = clock_new(plVar1,loadbanger_bang);
  plVar1[8] = lVar5;
  return plVar1;
}


