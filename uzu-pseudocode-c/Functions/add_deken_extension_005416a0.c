// Function : add_deken_extension
// Namespace: 
// Entry    : 005416a0
// Prototype: char * add_deken_extension(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, int param_9, uint param_10)
// Body     : 005416a0 - 0054179e


char * add_deken_extension(undefined8 param_1,undefined8 param_2,undefined8 param_3,
                          undefined8 param_4,undefined8 param_5,undefined8 param_6,
                          undefined8 param_7,undefined8 param_8,int param_9,uint param_10)

{
  long lVar1;
  int iVar2;
  char *pcVar3;
  void *pvVar4;
  long lVar5;
  undefined8 in_R9;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 uVar6;
  char acStack_488 [128];
  undefined1 in_stack_fffffffffffffbf8;
  
  pcVar3 = sys_deken_specifier(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                               acStack_488 + 0x80,1000,param_9,param_10);
  if (pcVar3 != (char *)0x0) {
    pcVar3 = getbytes(1000);
    if (pcVar3 != (char *)0x0) {
      pcVar3[999] = '\0';
      iVar2 = pd_snprintf(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                          pcVar3,999,".%s%s",acStack_488 + 0x80,&DAT_00652b9a,in_R9,
                          in_stack_fffffffffffffbf8);
      lVar1 = num_dllextents;
      pvVar4 = sys_dllextent;
      if (0 < iVar2) {
        uVar6 = extraout_XMM0_Qa_00;
        if (num_dllextents != 0) {
          lVar5 = 0;
          do {
            iVar2 = strcmp(pcVar3,*(char **)((long)pvVar4 + lVar5 * 8));
            if (iVar2 == 0) {
              return pcVar3;
            }
            lVar5 = lVar5 + 1;
            uVar6 = extraout_XMM0_Qa_01;
          } while (lVar1 != lVar5);
        }
        pvVar4 = resizebytes(uVar6,param_2,param_3,param_4,param_5,param_6,param_7,param_8,pvVar4,
                             lVar1 << 3,lVar1 * 8 + 8);
        if (pvVar4 == (void *)0x0) {
          return pcVar3;
        }
        sys_dllextent = pvVar4;
        *(char **)((long)pvVar4 + num_dllextents * 8) = pcVar3;
        num_dllextents = num_dllextents + 1;
        return pcVar3;
      }
      freebytes(pcVar3);
    }
  }
  return (char *)0x0;
}


