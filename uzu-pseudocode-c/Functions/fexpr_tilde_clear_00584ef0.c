// Function : fexpr_tilde_clear
// Namespace: 
// Entry    : 00584ef0
// Prototype: undefined fexpr_tilde_clear(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 param_10, int param_11, long param_12)
// Body     : 00584ef0 - 005850d2


void fexpr_tilde_clear(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                      undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                      long param_9,undefined8 param_10,int param_11,long param_12)

{
  long lVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  char *pcVar5;
  void *__s;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 uVar6;
  
  if (param_11 == 0) {
    if (0 < *(int *)(param_9 + 0x38)) {
      lVar4 = 0;
      do {
        memset(*(void **)(param_9 + 0x22b8 + lVar4 * 8),0,(long)*(int *)(param_9 + 0x28f8) << 2);
        lVar4 = lVar4 + 1;
      } while (lVar4 < *(int *)(param_9 + 0x38));
    }
    lVar4 = 0;
    do {
      if (*(long *)(param_9 + 0x6a0 + lVar4 * 4) == 0x12) {
        memset(*(void **)(param_9 + 0x1f98 + lVar4),0,(long)*(int *)(param_9 + 0x28f8) << 2);
        lVar1 = *(long *)(param_9 + 0x6c0 + lVar4 * 4);
      }
      else {
        lVar1 = *(long *)(param_9 + 0x6c0 + lVar4 * 4);
      }
      if (lVar1 == 0x12) {
        memset(*(void **)(param_9 + 0x1fa0 + lVar4),0,(long)*(int *)(param_9 + 0x28f8) << 2);
      }
      lVar4 = lVar4 + 0x10;
    } while (lVar4 != 800);
    return;
  }
  if (param_11 < 2) {
    iVar2 = 0;
    puVar3 = (undefined8 *)atom_getsymbolarg(0,param_11,param_12);
    pcVar5 = (char *)*puVar3;
    uVar6 = extraout_XMM0_Qa;
    if (*pcVar5 == 'y') {
      if (pcVar5[1] != '\0') {
        lVar4 = strtol(pcVar5 + 1,(char **)0x0,10);
        if ((int)lVar4 == 0) {
          pcVar5 = "fexpr~.clear: bad clear y vector number";
          param_1 = extraout_XMM0_Qa_01;
          goto LAB_00584f67;
        }
        iVar2 = (int)lVar4 + -1;
        uVar6 = extraout_XMM0_Qa_01;
      }
      if (iVar2 < *(int *)(param_9 + 0x38)) {
        __s = *(void **)(param_9 + 0x22b8 + (long)iVar2 * 8);
LAB_005850a4:
        memset(__s,0,(long)*(int *)(param_9 + 0x28f8) << 2);
        return;
      }
      pcVar5 = "fexpr~.clear: only %d outlets";
LAB_005850c7:
      post(uVar6,param_2,param_3,param_4,param_5,param_6,param_7,param_8,pcVar5);
      return;
    }
    param_1 = extraout_XMM0_Qa;
    if (*pcVar5 == 'x') {
      if (pcVar5[1] == '\0') {
        iVar2 = 0;
      }
      else {
        lVar4 = strtol(pcVar5 + 1,(char **)0x0,10);
        iVar2 = (int)lVar4;
        if (iVar2 == 0) {
          pcVar5 = "fexpr~.clear: bad clear x vector number";
          param_1 = extraout_XMM0_Qa_00;
          goto LAB_00584f67;
        }
        uVar6 = extraout_XMM0_Qa_00;
        if (99 < iVar2) {
          pcVar5 = "fexpr~.clear: no more than %d inlets";
          goto LAB_005850c7;
        }
        iVar2 = iVar2 + -1;
      }
      if (*(long *)(param_9 + 0x6a0 + (long)iVar2 * 0x20) == 0x12) {
        __s = *(void **)(param_9 + 0x1f98 + (long)iVar2 * 8);
        goto LAB_005850a4;
      }
      pcVar5 = "fexpr~-clear: no signal at inlet %d";
      goto LAB_005850c7;
    }
  }
  pcVar5 = "fexpr~ usage: \'clear\' or \'clear {xy}[#]\'";
LAB_00584f67:
  post(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,pcVar5);
  return;
}


