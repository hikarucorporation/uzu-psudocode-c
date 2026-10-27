// Function : sigdelread_new
// Namespace: 
// Entry    : 005915c0
// Prototype: long * sigdelread_new(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 param_10, undefined8 param_11, ulong param_12, char * param_13, undefined8 param_14)
// Body     : 005915c0 - 0059168e


long * sigdelread_new(undefined8 param_1,ulong param_2,undefined8 param_3,ulong param_4,
                     undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                     long param_9,undefined8 param_10,undefined8 param_11,ulong param_12,
                     char *param_13,undefined8 param_14)

{
  float fVar1;
  int iVar2;
  long *plVar3;
  long *plVar4;
  uint uVar5;
  undefined8 extraout_RDX;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  float fVar9;
  
  plVar3 = pd_new(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,sigdelread_class,
                  param_10,param_11,param_12,param_13,param_14);
  plVar3[6] = param_9;
  plVar3[8] = 0x3f8000003f800000;
  *(undefined4 *)(plVar3 + 9) = 0;
  plVar4 = pd_findbyclass(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                          param_9,sigdelwrite_class);
  uVar8 = (undefined4)((ulong)param_3 >> 0x20);
  fVar7 = (float)param_3;
  *(float *)(plVar3 + 7) = (float)param_1;
  if (plVar4 != (long *)0x0) {
    fVar1 = *(float *)((long)plVar3 + 0x44);
    fVar7 = (float)(int)plVar3[9];
    fVar9 = (fVar1 - fVar7) +
            (float)(int)((double)((float)param_1 * *(float *)(plVar3 + 8)) + DAT_005db338);
    param_4 = (ulong)(uint)fVar9;
    uVar5 = (uint)fVar9;
    param_12 = (ulong)uVar5;
    *(uint *)((long)plVar3 + 0x3c) = uVar5;
    fVar6 = (float)(int)fVar9;
    param_2 = (ulong)(uint)fVar6;
    if (fVar1 <= fVar6) {
      iVar2 = (int)plVar4[8];
      if ((int)uVar5 <= iVar2) goto LAB_00591664;
    }
    else {
      iVar2 = (int)fVar1;
    }
    *(int *)((long)plVar3 + 0x3c) = iVar2;
    param_2 = (ulong)(uint)fVar6;
    param_4 = (ulong)(uint)fVar9;
  }
LAB_00591664:
  plVar4 = (long *)__tls_get_addr(&PTR_007159b0);
  outlet_new(extraout_XMM0_Qa_00,param_2,CONCAT44(uVar8,fVar7),param_4,param_5,param_6,param_7,
             param_8,(long)plVar3,*plVar4 + 0xf0,extraout_RDX,param_12,param_13,param_14);
  return plVar3;
}


