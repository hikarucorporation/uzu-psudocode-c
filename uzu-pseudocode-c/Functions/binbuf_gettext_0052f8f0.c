// Function : binbuf_gettext
// Namespace: 
// Entry    : 0052f8f0
// Prototype: undefined binbuf_gettext(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, int * param_9, undefined8 * param_10, int * param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 0052f8f0 - 0052fa7a


void binbuf_gettext(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                   int *param_9,undefined8 *param_10,int *param_11,undefined8 param_12,
                   char *param_13,undefined8 param_14)

{
  undefined1 uVar1;
  void *pvVar2;
  size_t sVar3;
  void *pvVar4;
  int iVar5;
  uint uVar6;
  ulong uVar7;
  int *piVar8;
  undefined8 extraout_XMM0_Qa;
  undefined8 uVar9;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 extraout_XMM0_Qa_02;
  int local_42c;
  char local_418 [1000];
  
  iVar5 = 0;
  pvVar2 = getbytes(0);
  local_42c = *param_9;
  if (local_42c != 0) {
    piVar8 = *(int **)(param_9 + 2);
    uVar7 = 0;
    uVar9 = extraout_XMM0_Qa;
    do {
      iVar5 = (int)uVar7;
      if (*piVar8 == 4) {
        if (iVar5 == 0) {
          uVar7 = 0;
        }
        else {
LAB_0052f98d:
          if (*(char *)((long)pvVar2 + (long)iVar5 + -1) == ' ') {
            uVar7 = (ulong)(iVar5 - 1);
          }
        }
      }
      else if ((*piVar8 == 5) && (iVar5 != 0)) goto LAB_0052f98d;
      iVar5 = (int)uVar7;
      pvVar4 = pvVar2;
      atom_string(uVar9,param_2,param_3,param_4,param_5,param_6,param_7,param_8,piVar8,local_418,
                  (uint *)0x3e8,uVar7,param_13,param_14,(char)pvVar2);
      sVar3 = strlen(local_418);
      uVar6 = iVar5 + (int)sVar3 + 1;
      pvVar2 = resizebytes(extraout_XMM0_Qa_00,param_2,param_3,param_4,param_5,param_6,param_7,
                           param_8,pvVar2,(long)iVar5,(long)(int)uVar6);
      uVar9 = extraout_XMM0_Qa_01;
      if (pvVar2 == (void *)0x0) break;
      uVar7 = (ulong)uVar6;
      local_42c = local_42c + -1;
      strcpy((char *)((long)iVar5 + (long)pvVar2),local_418);
      uVar1 = 10;
      if (*piVar8 != 4) {
        uVar1 = 0x20;
      }
      *(undefined1 *)((long)pvVar2 + (long)((int)sVar3 + iVar5)) = uVar1;
      piVar8 = piVar8 + 4;
      uVar9 = extraout_XMM0_Qa_02;
      pvVar4 = pvVar2;
    } while (local_42c != 0);
    iVar5 = (int)uVar7;
    pvVar2 = pvVar4;
    if (iVar5 == 0) {
      iVar5 = 0;
    }
    else {
      uVar7 = (ulong)iVar5;
      if (*(char *)((long)pvVar4 + (uVar7 - 1)) == ' ') {
        pvVar4 = resizebytes(uVar9,param_2,param_3,param_4,param_5,param_6,param_7,param_8,pvVar4,
                             uVar7,uVar7 - 1);
        if (pvVar4 != (void *)0x0) {
          iVar5 = (int)(uVar7 - 1);
          pvVar2 = pvVar4;
        }
      }
    }
  }
  *param_10 = pvVar2;
  *param_11 = iVar5;
  return;
}


