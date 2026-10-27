// Function : scale_new
// Namespace: 
// Entry    : 0055db50
// Prototype: long * scale_new(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, undefined8 param_9, ulong param_10, long param_11, uint * param_12, char * param_13, undefined8 param_14)
// Body     : 0055db50 - 0055de29


/* WARNING: Removing unreachable block (ram,0x0055dcfd) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * scale_new(undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                undefined8 param_9,ulong param_10,long param_11,uint *param_12,char *param_13,
                undefined8 param_14)

{
  float fVar1;
  int iVar2;
  long *plVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  void *pvVar7;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  undefined8 extraout_RDX_02;
  undefined8 extraout_RDX_03;
  undefined8 extraout_RDX_04;
  undefined8 extraout_RDX_05;
  undefined8 extraout_RDX_06;
  int iVar8;
  ulong uVar9;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  undefined4 extraout_XMM0_Da_04;
  undefined4 extraout_XMM0_Da_05;
  undefined4 extraout_XMM0_Da_06;
  float fVar10;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Db_01;
  undefined4 extraout_XMM0_Db_02;
  undefined4 extraout_XMM0_Db_03;
  undefined4 extraout_XMM0_Db_04;
  undefined4 extraout_XMM0_Db_05;
  undefined4 extraout_XMM0_Db_06;
  uint switchD_0055dcd4::switchdataD_0065aa90;
  
  uVar9 = param_10 & 0xffffffff;
  plVar3 = pd_new(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,scale_class,
                  param_10,param_11,param_12,param_13,param_14);
  plVar4 = outlet_new(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,param_5,
                      param_6,param_7,param_8,(long)plVar3,0,extraout_RDX,param_12,param_13,param_14
                     );
  plVar3[7] = (long)plVar4;
  floatinlet_new(CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00),param_2,param_3,param_4,param_5,
                 param_6,param_7,param_8,(long)plVar3,(long)(plVar3 + 8),extraout_RDX_00,param_12,
                 param_13,param_14);
  floatinlet_new(CONCAT44(extraout_XMM0_Db_01,extraout_XMM0_Da_01),param_2,param_3,param_4,param_5,
                 param_6,param_7,param_8,(long)plVar3,(long)plVar3 + 0x44,extraout_RDX_01,param_12,
                 param_13,param_14);
  floatinlet_new(CONCAT44(extraout_XMM0_Db_02,extraout_XMM0_Da_02),param_2,param_3,param_4,param_5,
                 param_6,param_7,param_8,(long)plVar3,(long)(plVar3 + 9),extraout_RDX_02,param_12,
                 param_13,param_14);
  floatinlet_new(CONCAT44(extraout_XMM0_Db_03,extraout_XMM0_Da_03),param_2,param_3,param_4,param_5,
                 param_6,param_7,param_8,(long)plVar3,(long)plVar3 + 0x4c,extraout_RDX_03,param_12,
                 param_13,param_14);
  floatinlet_new(CONCAT44(extraout_XMM0_Db_04,extraout_XMM0_Da_04),param_2,param_3,param_4,param_5,
                 param_6,param_7,param_8,(long)plVar3,(long)plVar3 + 0x54,extraout_RDX_04,param_12,
                 param_13,param_14);
  lVar6 = _UNK_0065aa88;
  plVar3[8] = _DAT_0065aa80;
  plVar3[9] = lVar6;
  plVar3[0xd] = 0;
  *(undefined4 *)((long)plVar3 + 0x54) = 0x3f800000;
  if (0 < (int)param_10) {
    do {
      iVar8 = (int)uVar9;
      puVar5 = (undefined8 *)atom_getsymbolarg(0,iVar8,param_11);
      plVar4 = (long *)__tls_get_addr();
      param_12 = (uint *)0x168;
      if (puVar5 == (undefined8 *)(*plVar4 + 0x168)) {
                    /* WARNING: Could not recover jumptable at 0x0055dcd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        plVar3 = (long *)(*(code *)((long)&switchD_0055dcd4::switchdataD_0065aa90 +
                                   (long)(int)switchD_0055dcd4::switchdataD_0065aa90))();
        return plVar3;
      }
      iVar2 = strcmp((char *)*puVar5,"@classic");
      if (iVar2 != 0) {
        pd_error(CONCAT44(extraout_XMM0_Db_05,extraout_XMM0_Da_05),param_2,param_3,param_4,param_5,
                 param_6,param_7,param_8,(long)plVar3,"scale: improper args",extraout_RDX_05,
                 param_12,param_13,param_14);
        break;
      }
      lVar6 = atom_getsymbolarg(1,iVar8,param_11);
      plVar4 = (long *)__tls_get_addr();
      param_12 = (uint *)0x168;
      if (lVar6 == *plVar4 + 0x168) {
        lVar6 = atom_getintarg(1,iVar8,param_11);
        if (lVar6 == 1) {
          plVar3[0xd] = 1;
        }
        uVar9 = (ulong)(iVar8 - 2);
        param_11 = param_11 + 0x20;
      }
    } while (0 < (int)uVar9);
    fVar1 = *(float *)((long)plVar3 + 0x54);
    param_2 = (ulong)(uint)fVar1;
    if (plVar3[0xd] == 0) {
      fVar10 = 0.0;
      if (0.0 <= fVar1) goto LAB_0055ddd7;
    }
    else {
      fVar10 = DAT_005d9038;
      param_2 = (ulong)(uint)fVar1;
      if (DAT_005d9038 <= fVar1) goto LAB_0055ddd7;
    }
    *(float *)((long)plVar3 + 0x54) = fVar10;
    param_2 = (ulong)(uint)fVar1;
  }
LAB_0055ddd7:
  plVar3[0xe] = 1;
  plVar3[0xc] = 0x10;
  pvVar7 = getbytes(0x10);
  plVar3[0xb] = (long)pvVar7;
  if (pvVar7 == (void *)0x0) {
    pd_error(CONCAT44(extraout_XMM0_Db_06,extraout_XMM0_Da_06),param_2,param_3,param_4,param_5,
             param_6,param_7,param_8,(long)plVar3,"scale: memory allocation failure",extraout_RDX_06
             ,param_12,param_13,param_14);
    plVar3 = (long *)0x0;
  }
  return plVar3;
}


