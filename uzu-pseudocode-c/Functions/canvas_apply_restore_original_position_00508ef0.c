// Function : canvas_apply_restore_original_position
// Namespace: 
// Entry    : 00508ef0
// Prototype: undefined8 canvas_apply_restore_original_position(long param_1, int param_2)
// Body     : 00508ef0 - 00509034


undefined8 canvas_apply_restore_original_position(long param_1,int param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  
  lVar3 = *(long *)(param_1 + 0x30);
  if (lVar3 == 0) {
    if (param_2 == 0) {
      return 0;
    }
    lVar2 = 0;
  }
  else {
    iVar5 = 2;
    lVar2 = lVar3;
    do {
      lVar2 = *(long *)(lVar2 + 8);
      iVar5 = iVar5 + -1;
    } while (lVar2 != 0);
    iVar6 = 0;
    lVar2 = lVar3;
    if (iVar5 != 1) {
      iVar5 = -iVar5;
      lVar4 = lVar3;
      do {
        lVar4 = *(long *)(lVar4 + 8);
        bVar7 = iVar5 != 0;
        iVar5 = iVar5 + -1;
        if (lVar4 == 0) break;
      } while (bVar7);
      iVar6 = 0;
      if (lVar3 != lVar4) {
        iVar6 = 0;
        do {
          iVar6 = iVar6 + 1;
          lVar2 = *(long *)(lVar2 + 8);
          if (lVar2 == 0) break;
        } while (lVar2 != lVar4);
        lVar2 = lVar4;
      }
    }
    if (iVar6 == param_2) {
      return 0;
    }
    iVar5 = 3;
    lVar4 = lVar3;
    do {
      lVar4 = *(long *)(lVar4 + 8);
      iVar5 = iVar5 + -1;
    } while (lVar4 != 0);
    if (iVar5 != 1) {
      iVar5 = -iVar5;
      do {
        lVar3 = *(long *)(lVar3 + 8);
        bVar7 = iVar5 != 0;
        iVar5 = iVar5 + -1;
        if (lVar3 == 0) break;
      } while (bVar7);
    }
    if (lVar3 != 0) {
      *(undefined8 *)(lVar3 + 8) = 0;
    }
    if (param_2 == 0) {
      *(undefined8 *)(lVar2 + 8) = *(undefined8 *)(param_1 + 0x30);
      *(long *)(param_1 + 0x30) = lVar2;
      return 1;
    }
  }
  lVar3 = *(long *)(param_1 + 0x30);
  if ((param_2 != 1) && (lVar3 != 0)) {
    iVar5 = param_2 + -2;
    do {
      lVar3 = *(long *)(lVar3 + 8);
      bVar7 = iVar5 != 0;
      iVar5 = iVar5 + -1;
      if (lVar3 == 0) break;
    } while (bVar7);
  }
  uVar1 = *(undefined8 *)(lVar3 + 8);
  *(long *)(lVar3 + 8) = lVar2;
  *(undefined8 *)(lVar2 + 8) = uVar1;
  return 1;
}


