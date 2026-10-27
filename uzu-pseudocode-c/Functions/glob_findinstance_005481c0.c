// Function : glob_findinstance
// Namespace: 
// Entry    : 005481c0
// Prototype: undefined glob_findinstance(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, undefined8 param_9, undefined8 * param_10, undefined8 param_11, undefined8 * param_12, char * param_13, undefined * param_14)
// Body     : 005481c0 - 00548233


void glob_findinstance(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                      undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                      undefined8 param_9,undefined8 *param_10,undefined8 param_11,
                      undefined8 *param_12,char *param_13,undefined *param_14)

{
  char *pcVar1;
  int iVar2;
  undefined8 extraout_RDX;
  undefined8 uVar3;
  undefined8 extraout_RDX_00;
  undefined *puVar4;
  undefined8 extraout_XMM0_Qa;
  undefined8 uVar5;
  undefined8 extraout_XMM0_Qa_00;
  long *local_10;
  
  local_10 = (long *)0x0;
  if (param_10 == (undefined8 *)0x0) {
    return;
  }
  pcVar1 = (char *)*param_10;
  if (pcVar1 == (char *)0x0) {
    return;
  }
  puVar4 = &DAT_0065776f;
  iVar2 = __isoc99_sscanf(pcVar1,&DAT_0065776f,&local_10);
  uVar3 = extraout_RDX;
  uVar5 = extraout_XMM0_Qa;
  if (iVar2 == 0) {
    if ((*pcVar1 != '0') && (*pcVar1 != '.')) {
      return;
    }
    puVar4 = &DAT_0065481a;
    iVar2 = __isoc99_sscanf(pcVar1 + 1,&DAT_0065481a,&local_10);
    uVar3 = extraout_RDX_00;
    uVar5 = extraout_XMM0_Qa_00;
    if (iVar2 == 0) {
      return;
    }
  }
  if (local_10 != (long *)0x0) {
    canvas_finderror(uVar5,param_2,param_3,param_4,param_5,param_6,param_7,param_8,local_10,puVar4,
                     uVar3,param_12,param_13,param_14);
  }
  return;
}


