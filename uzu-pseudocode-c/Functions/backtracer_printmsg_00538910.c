// Function : backtracer_printmsg
// Namespace: 
// Entry    : 00538910
// Prototype: undefined backtracer_printmsg(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, undefined8 * param_9, undefined8 * param_10, uint param_11, int * param_12, undefined8 param_13, undefined8 param_14)
// Body     : 00538910 - 00538a62


void backtracer_printmsg(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4
                        ,undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8
                        ,undefined8 *param_9,undefined8 *param_10,uint param_11,int *param_12,
                        undefined8 param_13,undefined8 param_14)

{
  bool bVar1;
  char *pcVar2;
  size_t sVar3;
  int iVar4;
  char *pcVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 uVar8;
  undefined8 extraout_XMM0_Qa_01;
  undefined1 in_stack_fffffffffffffee8;
  char local_108 [100];
  undefined4 local_a4;
  char local_98 [104];
  
  pcVar2 = (char *)class_getname((undefined8 *)*param_9);
  pcVar5 = (char *)*param_10;
  pd_snprintf(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,local_108,100
              ,"%s: %s ",pcVar2,pcVar5,param_14,in_stack_fffffffffffffee8);
  sVar3 = strlen(local_108);
  iVar4 = (int)sVar3;
  bVar1 = iVar4 < 100;
  uVar8 = extraout_XMM0_Qa_00;
  if ((0 < (int)param_11) && (iVar4 < 100)) {
    uVar7 = 5;
    if ((int)param_11 < 6) {
      uVar7 = (ulong)param_11;
    }
    uVar6 = 1;
    do {
      uVar8 = atom_string(uVar8,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_12,
                          local_98,(uint *)0x64,pcVar2,pcVar5,param_14,in_stack_fffffffffffffee8);
      pcVar2 = local_98;
      pd_snprintf(uVar8,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                  local_108 + (int)sVar3,(long)(0x6400000000 - (sVar3 << 0x20)) >> 0x20," %s",
                  local_98,pcVar5,param_14,in_stack_fffffffffffffee8);
      sVar3 = strlen(local_108);
      iVar4 = (int)sVar3;
      bVar1 = iVar4 < 100;
      uVar8 = extraout_XMM0_Qa_01;
      if (uVar7 <= uVar6) break;
      param_12 = param_12 + 4;
      uVar6 = uVar6 + 1;
    } while (iVar4 < 100);
  }
  if (((int)param_11 < 6) || (!bVar1)) {
    local_a4 = 0x2e2e2e;
  }
  else {
    builtin_strncpy(local_108 + iVar4,"...",4);
  }
  logpost(uVar8,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,2,"%s",local_108,
          pcVar5,param_14,in_stack_fffffffffffffee8);
  return;
}


