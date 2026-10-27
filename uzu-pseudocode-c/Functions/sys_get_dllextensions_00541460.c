// Function : sys_get_dllextensions
// Namespace: 
// Entry    : 00541460
// Prototype: void * sys_get_dllextensions(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)
// Body     : 00541460 - 0054169f


void * sys_get_dllextensions
                 (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  int iVar2;
  char *pcVar3;
  void *pvVar4;
  void *pvVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 extraout_XMM0_Qa_02;
  undefined8 extraout_XMM0_Qa_03;
  undefined8 extraout_XMM0_Qa_04;
  undefined8 extraout_XMM0_Qa_05;
  undefined8 extraout_XMM0_Qa_06;
  undefined8 extraout_XMM0_Qa_07;
  undefined8 uVar10;
  
  if (sys_dllextent != (void *)0x0) {
    return sys_dllextent;
  }
  pcVar3 = add_deken_extension(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0,0);
  uVar10 = extraout_XMM0_Qa;
  if (pcVar3 != (char *)0x0) {
    uVar6 = 1;
    do {
      pcVar3 = add_deken_extension(uVar10,param_2,param_3,param_4,param_5,param_6,param_7,param_8,1,
                                   uVar6 - 1);
      uVar10 = extraout_XMM0_Qa_00;
      if (pcVar3 == (char *)0x0) break;
      pcVar3 = add_deken_extension(extraout_XMM0_Qa_00,param_2,param_3,param_4,param_5,param_6,
                                   param_7,param_8,0,uVar6);
      uVar6 = uVar6 + 1;
      uVar10 = extraout_XMM0_Qa_01;
    } while (pcVar3 != (char *)0x0);
  }
  lVar8 = num_dllextents;
  pvVar4 = sys_dllextent;
  if (num_dllextents != 0) {
    lVar7 = 0;
    do {
      iVar2 = strcmp(".l_amd64",*(char **)((long)pvVar4 + lVar7 * 8));
      uVar10 = extraout_XMM0_Qa_02;
      pvVar5 = sys_dllextent;
      lVar1 = num_dllextents;
      if (iVar2 == 0) goto joined_r0x0054154d;
      lVar7 = lVar7 + 1;
    } while (lVar8 != lVar7);
  }
  pvVar4 = resizebytes(uVar10,param_2,param_3,param_4,param_5,param_6,param_7,param_8,pvVar4,
                       lVar8 << 3,lVar8 * 8 + 8);
  uVar10 = extraout_XMM0_Qa_03;
  pvVar5 = sys_dllextent;
  lVar1 = num_dllextents;
  if (pvVar4 != (void *)0x0) {
    sys_dllextent = pvVar4;
    *(undefined **)((long)pvVar4 + num_dllextents * 8) = &DAT_00652b87;
    pvVar5 = sys_dllextent;
    lVar1 = num_dllextents + 1;
  }
joined_r0x0054154d:
  sys_dllextent = pvVar5;
  num_dllextents = lVar1;
  if (lVar1 == 0) {
    uVar9 = 0;
  }
  else {
    lVar8 = 0;
    do {
      iVar2 = strcmp(".l_ia64",*(char **)((long)pvVar5 + lVar8 * 8));
      uVar10 = extraout_XMM0_Qa_04;
      pvVar4 = sys_dllextent;
      lVar7 = num_dllextents;
      if (iVar2 == 0) goto joined_r0x005415d1;
      lVar8 = lVar8 + 1;
    } while (lVar1 != lVar8);
    uVar9 = lVar1 << 3;
  }
  pvVar5 = resizebytes(uVar10,param_2,param_3,param_4,param_5,param_6,param_7,param_8,pvVar5,uVar9,
                       uVar9 + 8);
  uVar10 = extraout_XMM0_Qa_05;
  pvVar4 = sys_dllextent;
  lVar7 = num_dllextents;
  if (pvVar5 != (void *)0x0) {
    sys_dllextent = pvVar5;
    *(char **)((long)pvVar5 + num_dllextents * 8) = ".l_ia64";
    pvVar4 = sys_dllextent;
    lVar7 = num_dllextents + 1;
  }
joined_r0x005415d1:
  sys_dllextent = pvVar4;
  num_dllextents = lVar7;
  if (lVar7 == 0) {
    uVar9 = 0;
  }
  else {
    lVar8 = 0;
    do {
      iVar2 = strcmp(".pd_linux",*(char **)((long)pvVar4 + lVar8 * 8));
      uVar10 = extraout_XMM0_Qa_06;
      if (iVar2 == 0) goto LAB_00541646;
      lVar8 = lVar8 + 1;
    } while (lVar7 != lVar8);
    uVar9 = lVar7 << 3;
  }
  pvVar4 = resizebytes(uVar10,param_2,param_3,param_4,param_5,param_6,param_7,param_8,pvVar4,uVar9,
                       uVar9 + 8);
  uVar10 = extraout_XMM0_Qa_07;
  if (pvVar4 != (void *)0x0) {
    sys_dllextent = pvVar4;
    *(char **)((long)pvVar4 + num_dllextents * 8) = ".pd_linux";
    num_dllextents = num_dllextents + 1;
  }
LAB_00541646:
  pvVar4 = resizebytes(uVar10,param_2,param_3,param_4,param_5,param_6,param_7,param_8,sys_dllextent,
                       num_dllextents << 3,num_dllextents * 8 + 8);
  if (pvVar4 == (void *)0x0) {
    pvVar4 = sys_dllextent;
  }
  else {
    sys_dllextent = pvVar4;
    *(undefined8 *)((long)pvVar4 + num_dllextents * 8) = 0;
    num_dllextents = num_dllextents + 1;
  }
  return pvVar4;
}


