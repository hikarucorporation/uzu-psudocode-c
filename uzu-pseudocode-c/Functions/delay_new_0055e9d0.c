// Function : delay_new
// Namespace: 
// Entry    : 0055e9d0
// Prototype: long * delay_new(ulong param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, undefined8 param_9, undefined8 param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 0055e9d0 - 0055eaaf


long * delay_new(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                char *param_13,undefined8 param_14)

{
  long *plVar1;
  long extraout_RAX;
  long *plVar2;
  long *plVar3;
  long lVar4;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  int iVar5;
  float fVar6;
  float fVar7;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Db;
  undefined8 uVar8;
  undefined4 uVar9;
  
  fVar6 = (float)param_1;
  plVar1 = pd_new(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,delay_class,
                  param_10,param_11,param_12,param_13,param_14);
  uVar9 = 0;
  iVar5 = 0x200;
  if (0.0 < fVar6) {
    iVar5 = (int)fVar6;
  }
  *(undefined8 *)((long)plVar1 + 0x5c) = 0x20000000200;
  plVar1[10] = (long)(plVar1 + 0x12);
  plVar1[8] = (long)(plVar1 + 0x12);
  delay_maxsize((ulong)(uint)(float)iVar5,param_1 & 0xffffffff,param_3,param_4,param_5,param_6,
                param_7,param_8,(long)plVar1,param_10,extraout_RDX,param_12,param_13,param_14);
  fVar7 = (float)param_2;
  if ((float)param_2 <= DAT_005d9058) {
    fVar7 = DAT_005d9058;
  }
  if ((int)fVar7 <= iVar5) {
    iVar5 = (int)fVar7;
  }
  *(int *)((long)plVar1 + 100) = iVar5;
  canvas_getcurrent((ulong)(uint)fVar7,CONCAT44(uVar9,fVar6),param_3,param_4,param_5,param_6,param_7
                    ,param_8);
  plVar1[6] = extraout_RAX;
  plVar2 = (long *)__tls_get_addr(&PTR_007159b0);
  lVar4 = *plVar2 + 0xf0;
  plVar3 = inlet_new(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),CONCAT44(uVar9,fVar6),param_3,
                     param_4,param_5,param_6,param_7,param_8,(long)plVar1,(long)plVar1,lVar4,lVar4,
                     param_13,param_14);
  uVar8 = pd_float(plVar3);
  outlet_new(uVar8,CONCAT44(uVar9,fVar6),param_3,param_4,param_5,param_6,param_7,param_8,
             (long)plVar1,*plVar2 + 0xf0,extraout_RDX_00,lVar4,param_13,param_14);
  return plVar1;
}


