// Function : oscformat_set
// Namespace: 
// Entry    : 0057fc70
// Prototype: undefined oscformat_set(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 param_10, uint param_11, int * param_12, char * param_13, undefined8 param_14)
// Body     : 0057fc70 - 0057fd3e


void oscformat_set(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  long param_9,undefined8 param_10,uint param_11,int *param_12,char *param_13,
                  undefined8 param_14)

{
  size_t sVar1;
  size_t sVar2;
  char *pcVar3;
  ulong uVar4;
  int *piVar5;
  ulong uVar6;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  char acStack_498 [128];
  undefined1 uVar7;
  char local_417 [999];
  
  **(undefined1 **)(param_9 + 0x30) = 0;
  uVar7 = 0x2f;
  if (0 < (int)param_11) {
    uVar4 = (ulong)param_11;
    piVar5 = param_12;
    do {
      if ((*piVar5 != 2) ||
         (pcVar3 = acStack_498 + 0x80, *(char *)**(undefined8 **)(piVar5 + 2) != '/')) {
        pcVar3 = local_417;
      }
      atom_string(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,piVar5,pcVar3,
                  (uint *)0x3e7,param_12,param_13,param_14,uVar7);
      sVar1 = strlen(acStack_498 + 0x80);
      pcVar3 = *(char **)(param_9 + 0x30);
      sVar2 = strlen(pcVar3);
      uVar6 = sVar1 + sVar2 + 1;
      if (*(ulong *)(param_9 + 0x38) < uVar6) {
        pcVar3 = resizebytes(extraout_XMM0_Qa_00,param_2,param_3,param_4,param_5,param_6,param_7,
                             param_8,pcVar3,*(ulong *)(param_9 + 0x38),uVar6);
        *(char **)(param_9 + 0x30) = pcVar3;
        *(ulong *)(param_9 + 0x38) = uVar6;
      }
      strcat(pcVar3,acStack_498 + 0x80);
      piVar5 = piVar5 + 4;
      uVar4 = uVar4 - 1;
      param_1 = extraout_XMM0_Qa;
    } while (uVar4 != 0);
  }
  return;
}


