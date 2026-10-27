// Function : adc_new
// Namespace: 
// Entry    : 00590bb0
// Prototype: long * adc_new(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, undefined8 param_9, undefined8 param_10, int * param_11, long param_12, char * param_13, undefined8 param_14)
// Body     : 00590bb0 - 00590d70


long * adc_new(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
              undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
              undefined8 param_9,undefined8 param_10,int *param_11,long param_12,char *param_13,
              undefined8 param_14)

{
  long *plVar1;
  void *pvVar2;
  long *plVar3;
  long lVar4;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  int iVar5;
  ulong uVar6;
  uint uVar7;
  float fVar8;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  int local_48 [2];
  undefined4 local_40;
  undefined4 local_38;
  undefined4 local_30;
  
  uVar7 = (uint)param_10;
  plVar1 = pd_new(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,adc_class,param_10
                  ,param_11,param_12,param_13,param_14);
  if (uVar7 == 0) {
    param_11 = local_48;
    local_48[0] = 1;
    local_40 = 0x3f800000;
    local_38 = 1;
    local_30 = 0x40000000;
    uVar7 = 2;
  }
  else if (((0 < (int)uVar7) && (*param_11 == 2)) &&
          (iVar5 = strcmp((char *)**(undefined8 **)(param_11 + 2),"-m"), iVar5 == 0)) {
    *(undefined4 *)(plVar1 + 8) = 1;
    fVar8 = (float)atom_getfloatarg(1,uVar7,(long)param_11);
    iVar5 = (int)fVar8;
    lVar4 = 2;
    if (iVar5 < 1) {
      iVar5 = 2;
    }
    *(int *)(plVar1 + 6) = iVar5;
    fVar8 = (float)atom_getfloatarg(2,uVar7,(long)param_11);
    pvVar2 = getbytes((long)(int)plVar1[6] << 2);
    plVar1[7] = (long)pvVar2;
    if (0 < (int)plVar1[6]) {
      iVar5 = 1;
      if (0 < (int)fVar8) {
        iVar5 = (int)fVar8;
      }
      lVar4 = 0;
      do {
        *(int *)((long)pvVar2 + lVar4 * 4) = iVar5 + (int)lVar4;
        lVar4 = lVar4 + 1;
      } while (lVar4 < (int)plVar1[6]);
    }
    plVar3 = (long *)__tls_get_addr(&PTR_007159b0);
    outlet_new(CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00),param_2,param_3,param_4,param_5,
               param_6,param_7,param_8,(long)plVar1,*plVar3 + 0xf0,extraout_RDX_00,lVar4,param_13,
               param_14);
    return plVar1;
  }
  *(undefined4 *)(plVar1 + 8) = 0;
  *(uint *)(plVar1 + 6) = uVar7;
  pvVar2 = getbytes((long)(int)uVar7 << 2);
  plVar1[7] = (long)pvVar2;
  if (0 < (int)uVar7) {
    uVar6 = 0;
    do {
      fVar8 = (float)atom_getfloatarg((int)uVar6,uVar7,(long)param_11);
      param_12 = plVar1[7];
      *(int *)(param_12 + uVar6 * 4) = (int)fVar8;
      uVar6 = uVar6 + 1;
    } while (uVar7 != uVar6);
  }
  if (0 < (int)plVar1[6]) {
    iVar5 = 0;
    do {
      plVar3 = (long *)__tls_get_addr(&PTR_007159b0);
      outlet_new(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,param_5,param_6
                 ,param_7,param_8,(long)plVar1,*plVar3 + 0xf0,extraout_RDX,param_12,param_13,
                 param_14);
      iVar5 = iVar5 + 1;
    } while (iVar5 < (int)plVar1[6]);
  }
  return plVar1;
}


