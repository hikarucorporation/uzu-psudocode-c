// Function : dac_new
// Namespace: 
// Entry    : 00590910
// Prototype: long * dac_new(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, undefined8 param_9, undefined8 param_10, undefined4 * param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 00590910 - 00590a00


long * dac_new(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
              undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
              undefined8 param_9,undefined8 param_10,undefined4 *param_11,undefined8 param_12,
              char *param_13,undefined8 param_14)

{
  long *plVar1;
  void *pvVar2;
  long *plVar3;
  uint uVar4;
  ulong uVar5;
  int iVar6;
  float fVar7;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Db;
  undefined4 local_48 [2];
  undefined4 local_40;
  undefined4 local_38;
  undefined4 local_30;
  
  uVar4 = (uint)param_10;
  plVar1 = pd_new(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,dac_class,param_10
                  ,param_11,param_12,param_13,param_14);
  if (uVar4 == 0) {
    local_48[0] = 1;
    local_40 = 0x3f800000;
    local_38 = 1;
    local_30 = 0x40000000;
    uVar4 = 2;
    param_11 = local_48;
  }
  plVar1[6] = (long)(int)uVar4;
  pvVar2 = getbytes((long)(int)uVar4 << 3);
  plVar1[7] = (long)pvVar2;
  if (0 < (int)uVar4) {
    uVar5 = 0;
    do {
      fVar7 = (float)atom_getfloatarg((int)uVar5,uVar4,(long)param_11);
      *(long *)(plVar1[7] + uVar5 * 8) = (long)fVar7;
      uVar5 = uVar5 + 1;
    } while (uVar4 != uVar5);
    if (1 < (int)uVar4) {
      iVar6 = uVar4 - 1;
      do {
        plVar3 = (long *)__tls_get_addr(&PTR_007159b0);
        inlet_new(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,param_5,
                  param_6,param_7,param_8,(long)plVar1,(long)plVar1,*plVar3 + 0xf0,*plVar3 + 0xf0,
                  param_13,param_14);
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
  }
  *(undefined4 *)(plVar1 + 8) = 0;
  return plVar1;
}


