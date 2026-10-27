// Function : dsp_add
// Namespace: 
// Entry    : 004f5a20
// Prototype: undefined dsp_add(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, undefined8 param_9, int param_10, undefined8 param_11, undefined8 param_12, undefined8 param_13, undefined8 param_14, undefined8 param_15)
// Body     : 004f5a20 - 004f5bfb


void dsp_add(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
            undefined8 param_9,int param_10,undefined8 param_11,undefined8 param_12,
            undefined8 param_13,undefined8 param_14,undefined8 param_15)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  char in_AL;
  long *plVar4;
  void *pvVar5;
  undefined8 *puVar6;
  uint uVar7;
  ulong uVar8;
  long lVar9;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 *local_100;
  undefined8 local_e8 [4];
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_a8;
  undefined8 local_98;
  undefined8 local_88;
  undefined8 local_78;
  undefined8 local_68;
  undefined8 local_58;
  undefined8 local_48;
  
  if (in_AL != '\0') {
    local_b8 = param_1;
    local_a8 = param_2;
    local_98 = param_3;
    local_88 = param_4;
    local_78 = param_5;
    local_68 = param_6;
    local_58 = param_7;
    local_48 = param_8;
  }
  local_e8[2] = param_11;
  local_e8[3] = param_12;
  local_c8 = param_13;
  local_c0 = param_14;
  plVar4 = (long *)__tls_get_addr(&PTR_007159b0);
  iVar2 = *(int *)(*(undefined8 **)(*plVar4 + 0x40) + 1);
  lVar1 = (long)iVar2 + (long)param_10;
  pvVar5 = resizebytes(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                       (void *)**(undefined8 **)(*plVar4 + 0x40),(long)iVar2 << 3,lVar1 * 8 + 8);
  **(undefined8 **)(*plVar4 + 0x40) = pvVar5;
  plVar4 = *(long **)(*plVar4 + 0x40);
  *(undefined8 *)(*plVar4 + -8 + (long)(int)plVar4[1] * 8) = param_9;
  if (*(int *)((long)plVar4 + 0x134) != 0) {
    post(extraout_XMM0_Qa_00,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
         "add to chain: %lx");
  }
  local_100 = &param_15;
  uVar7 = 0x10;
  if (0 < param_10) {
    lVar9 = 0;
    do {
      uVar8 = (ulong)uVar7;
      if (uVar8 < 0x29) {
        uVar7 = uVar7 + 8;
        puVar6 = (undefined8 *)((long)local_e8 + uVar8);
      }
      else {
        puVar6 = local_100;
        local_100 = local_100 + 1;
      }
      uVar3 = *puVar6;
      plVar4 = (long *)__tls_get_addr(&PTR_007159b0);
      plVar4 = *(long **)(*plVar4 + 0x40);
      *(undefined8 *)(*plVar4 + ((int)plVar4[1] + lVar9) * 8) = uVar3;
      if (*(int *)((long)plVar4 + 0x134) != 0) {
        post(extraout_XMM0_Qa_01,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
             "add to chain: %lx");
      }
      lVar9 = lVar9 + 1;
    } while (param_10 != (int)lVar9);
  }
  plVar4 = (long *)__tls_get_addr(&PTR_007159b0);
  plVar4 = *(long **)(*plVar4 + 0x40);
  *(code **)(*plVar4 + (long)(int)lVar1 * 8) = dsp_done;
  *(int *)(plVar4 + 1) = iVar2 + param_10 + 1;
  return;
}


