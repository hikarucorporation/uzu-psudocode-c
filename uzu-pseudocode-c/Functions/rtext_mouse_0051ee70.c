// Function : rtext_mouse
// Namespace: 
// Entry    : 0051ee70
// Prototype: undefined rtext_mouse(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long * param_9, uint param_10, uint param_11, undefined4 param_12, undefined8 param_13, byte * param_14)
// Body     : 0051ee70 - 0051f0ed


void rtext_mouse(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                long *param_9,uint param_10,uint param_11,undefined4 param_12,undefined8 param_13,
                byte *param_14)

{
  long lVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  int local_1c;
  uint local_18;
  uint local_14;
  
  local_18 = param_11;
  local_14 = param_10;
  uVar11 = rtext_senditup(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,0,
                          &local_14,&local_18,&local_1c,param_14);
  switch(param_12) {
  case 1:
    *(int *)(param_9 + 2) = local_1c;
    *(int *)((long)param_9 + 0xc) = local_1c;
    *(int *)(param_9 + 3) = local_1c;
    break;
  case 2:
    iVar4 = (int)param_9[3];
    if (iVar4 < 0) {
      return;
    }
    iVar3 = local_1c;
    if (iVar4 < local_1c) {
      iVar3 = iVar4;
    }
    *(int *)((long)param_9 + 0xc) = iVar3;
    if (local_1c < iVar4) {
      local_1c = iVar4;
    }
    *(int *)(param_9 + 2) = local_1c;
    break;
  case 3:
    *(undefined4 *)(param_9 + 3) = 0xffffffff;
    lVar9 = *param_9;
    lVar10 = (long)local_1c;
    lVar1 = lVar9 + lVar10;
    lVar7 = lVar10;
    do {
      if (lVar7 == 0) {
        iVar4 = 0;
        goto LAB_0051ef55;
      }
      lVar6 = lVar7 + -1;
      pcVar2 = (char *)(lVar9 + -1 + lVar7);
      lVar7 = lVar6;
    } while (*pcVar2 != ' ');
    iVar3 = (int)lVar6 + 1;
    iVar4 = 0;
    if (1 < iVar3) {
      iVar4 = iVar3;
    }
LAB_0051ef55:
    lVar7 = lVar10;
    do {
      if (lVar7 == 0) {
        lVar6 = 0xffffffff;
        break;
      }
      lVar6 = lVar7 + -1;
      pcVar2 = (char *)(lVar9 + -1 + lVar7);
      lVar7 = lVar6;
    } while (*pcVar2 != '\n');
    iVar3 = (int)lVar6 + 1;
    if ((int)lVar6 <= iVar4) {
      iVar3 = iVar4;
    }
    lVar7 = lVar10;
    do {
      if (lVar7 == 0) {
        lVar6 = 0xffffffff;
        break;
      }
      lVar6 = lVar7 + -1;
      pcVar2 = (char *)(lVar9 + -1 + lVar7);
      lVar7 = lVar6;
    } while (*pcVar2 != ';');
    iVar4 = (int)lVar6 + 1;
    if ((int)lVar6 <= iVar3) {
      iVar4 = iVar3;
    }
    iVar3 = -1;
    lVar7 = lVar10;
    do {
      if (lVar7 == 0) {
        lVar6 = 0xffffffff;
        break;
      }
      lVar6 = lVar7 + -1;
      pcVar2 = (char *)(lVar9 + -1 + lVar7);
      lVar7 = lVar6;
    } while (*pcVar2 != ',');
    iVar5 = (int)lVar6 + 1;
    if ((int)lVar6 <= iVar4) {
      iVar5 = iVar4;
    }
    *(int *)((long)param_9 + 0xc) = iVar5;
    lVar10 = (int)param_9[1] - lVar10;
    iVar4 = (int)lVar10;
    if (iVar4 == 0) {
      iVar4 = 0;
    }
    else {
      lVar9 = 0;
      do {
        if (*(char *)(lVar1 + lVar9) == ' ') goto LAB_0051f024;
        lVar9 = lVar9 + 1;
      } while (lVar10 != lVar9);
      lVar9 = 0xffffffff;
LAB_0051f024:
      lVar7 = lVar10;
      if ((int)lVar9 < iVar4) {
        lVar7 = lVar9;
      }
      iVar5 = (int)lVar7;
      if ((int)lVar9 < 0) {
        iVar5 = iVar4;
      }
      lVar9 = 0;
      do {
        if (*(char *)(lVar1 + lVar9) == '\n') goto LAB_0051f054;
        lVar9 = lVar9 + 1;
      } while (lVar10 != lVar9);
      lVar9 = 0xffffffff;
LAB_0051f054:
      iVar4 = (int)lVar9;
      iVar8 = iVar5;
      if (iVar4 < iVar5) {
        iVar8 = iVar4;
      }
      if (iVar4 < 0) {
        iVar8 = iVar5;
      }
      lVar9 = 0;
      do {
        if (*(char *)(lVar1 + lVar9) == ';') goto LAB_0051f084;
        lVar9 = lVar9 + 1;
      } while (lVar10 != lVar9);
      lVar9 = 0xffffffff;
LAB_0051f084:
      iVar5 = (int)lVar9;
      iVar4 = iVar8;
      if (iVar5 < iVar8) {
        iVar4 = iVar5;
      }
      if (iVar5 < 0) {
        iVar4 = iVar8;
      }
      lVar9 = 0;
      do {
        if (*(char *)(lVar1 + lVar9) == ',') {
          iVar3 = (int)lVar9;
          break;
        }
        lVar9 = lVar9 + 1;
      } while (lVar10 != lVar9);
    }
    iVar5 = iVar4;
    if (iVar3 < iVar4) {
      iVar5 = iVar3;
    }
    if (iVar3 < 0) {
      iVar5 = iVar4;
    }
    *(int *)(param_9 + 2) = iVar5 + local_1c;
    break;
  case 4:
    if ((int)param_9[2] + *(int *)((long)param_9 + 0xc) < local_1c * 2) {
      *(int *)(param_9 + 3) = *(int *)((long)param_9 + 0xc);
      *(int *)(param_9 + 2) = local_1c;
    }
    else {
      *(int *)(param_9 + 3) = (int)param_9[2];
      *(int *)((long)param_9 + 0xc) = local_1c;
    }
  }
  rtext_senditup(uVar11,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,2,&local_14,
                 &local_18,&local_1c,param_14);
  return;
}


