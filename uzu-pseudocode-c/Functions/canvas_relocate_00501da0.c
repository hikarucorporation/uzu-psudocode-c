// Function : canvas_relocate
// Namespace: 
// Entry    : 00501da0
// Prototype: undefined canvas_relocate(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long * param_9, undefined8 * param_10, undefined8 * param_11)
// Body     : 00501da0 - 00501e3f


void canvas_relocate(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                    long *param_9,undefined8 *param_10,undefined8 *param_11)

{
  int iVar1;
  int *piVar2;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 uVar3;
  undefined *puVar4;
  uint *puVar5;
  uint *puVar6;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 uVar7;
  undefined1 in_stack_ffffffffffffffc8;
  uint local_30;
  uint local_2c;
  int local_28;
  int local_24;
  int local_20;
  undefined1 local_1c [4];
  uint local_18;
  uint local_14;
  
  puVar4 = &DAT_006541f0;
  piVar2 = &local_28;
  puVar5 = &local_14;
  puVar6 = &local_18;
  iVar1 = __isoc99_sscanf(*param_10,&DAT_006541f0,&local_24);
  uVar3 = extraout_RDX;
  uVar7 = extraout_XMM0_Qa;
  if (3 < iVar1) {
    puVar4 = &DAT_006541f0;
    piVar2 = &local_20;
    puVar5 = &local_2c;
    puVar6 = &local_30;
    iVar1 = __isoc99_sscanf(*param_11,&DAT_006541f0,local_1c);
    uVar3 = extraout_RDX_00;
    uVar7 = extraout_XMM0_Qa_00;
    if (3 < iVar1) goto LAB_00501e0f;
  }
  uVar7 = bug(uVar7,param_2,param_3,param_4,param_5,param_6,param_7,param_8,"canvas_relocate",puVar4
              ,uVar3,piVar2,(char *)puVar5,puVar6,in_stack_ffffffffffffffc8);
LAB_00501e0f:
  if ((5 < local_24) && (5 < local_28)) {
    canvas_dosetbounds(uVar7,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                       (long *)(ulong)local_2c,(ulong)local_30,
                       (undefined *)(ulong)(local_24 + local_2c),
                       (undefined *)(ulong)(local_28 + local_30),(undefined *)puVar6,
                       in_stack_ffffffffffffffc8);
  }
  return;
}


