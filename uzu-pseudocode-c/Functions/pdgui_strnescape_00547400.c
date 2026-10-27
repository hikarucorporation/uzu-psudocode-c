// Function : pdgui_strnescape
// Namespace: 
// Entry    : 00547400
// Prototype: long pdgui_strnescape(long param_1, ulong param_2, long param_3, ulong param_4)
// Body     : 00547400 - 00547601


long pdgui_strnescape(long param_1,ulong param_2,long param_3,ulong param_4)

{
  char cVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  
  if (param_1 == 0) {
    return 0;
  }
  if (param_3 == 0) {
    return 0;
  }
  if (param_2 == 0) {
    if (param_4 == 0) {
      uVar5 = 0;
      uVar6 = 0;
      while( true ) {
        while( true ) {
          cVar1 = *(char *)(param_3 + (ulong)uVar5);
          if ((0x22 < (byte)(cVar1 + 0xa5U)) ||
             ((0x500000007U >> ((ulong)(byte)(cVar1 + 0xa5U) & 0x3f) & 1) == 0)) break;
          *(undefined1 *)(param_1 + (ulong)uVar6) = 0x5c;
          *(char *)(param_1 + (ulong)(uVar6 + 1)) = cVar1;
          uVar6 = uVar6 + 2;
          uVar5 = uVar5 + 1;
        }
        *(char *)(param_1 + (ulong)uVar6) = cVar1;
        uVar6 = uVar6 + 1;
        if (cVar1 == '\0') break;
        uVar5 = uVar5 + 1;
      }
    }
    else {
      uVar6 = 0;
      uVar3 = 1;
      do {
        cVar1 = *(char *)(param_3 + (ulong)((int)uVar3 - 1));
        if (((byte)(cVar1 + 0xa5U) < 0x23) &&
           ((0x500000007U >> ((ulong)(byte)(cVar1 + 0xa5U) & 0x3f) & 1) != 0)) {
          *(undefined1 *)(param_1 + (ulong)uVar6) = 0x5c;
          *(char *)(param_1 + (ulong)(uVar6 + 1)) = cVar1;
          uVar6 = uVar6 + 2;
        }
        else {
          *(char *)(param_1 + (ulong)uVar6) = cVar1;
          uVar6 = uVar6 + 1;
          if (cVar1 == '\0') break;
        }
        bVar7 = uVar3 < param_4;
        uVar3 = (ulong)((int)uVar3 + 1);
      } while (bVar7);
    }
  }
  else {
    if (param_4 != 0) {
      uVar6 = 0;
      uVar5 = 1;
      do {
        cVar1 = *(char *)(param_3 + (ulong)(uVar5 - 1));
        if (((byte)(cVar1 + 0xa5U) < 0x23) &&
           ((0x500000007U >> ((ulong)(byte)(cVar1 + 0xa5U) & 0x3f) & 1) != 0)) {
          uVar2 = uVar6 + 1;
          *(undefined1 *)(param_1 + (ulong)uVar6) = 0x5c;
          if (param_2 <= uVar2) goto LAB_0054757e;
          *(char *)(param_1 + (ulong)uVar2) = cVar1;
          uVar6 = uVar6 + 2;
        }
        else {
          *(char *)(param_1 + (ulong)uVar6) = cVar1;
          uVar6 = uVar6 + 1;
          if (cVar1 == '\0') goto LAB_00547588;
        }
        if ((param_4 <= uVar5) || (uVar5 = uVar5 + 1, param_2 <= uVar6)) goto LAB_00547588;
      } while( true );
    }
    uVar5 = 0;
    uVar6 = 0;
    do {
      cVar1 = *(char *)(param_3 + (ulong)uVar5);
      if (((byte)(cVar1 + 0xa5U) < 0x23) &&
         ((0x500000007U >> ((ulong)(byte)(cVar1 + 0xa5U) & 0x3f) & 1) != 0)) {
        uVar2 = uVar6 + 1;
        *(undefined1 *)(param_1 + (ulong)uVar6) = 0x5c;
        if (param_2 <= uVar2) goto LAB_0054757e;
        *(char *)(param_1 + (ulong)uVar2) = cVar1;
        uVar6 = uVar6 + 2;
      }
      else {
        *(char *)(param_1 + (ulong)uVar6) = cVar1;
        uVar6 = uVar6 + 1;
        if (cVar1 == '\0') break;
      }
      uVar5 = uVar5 + 1;
    } while (uVar6 < param_2);
  }
LAB_00547588:
  uVar4 = (ulong)uVar6;
  uVar3 = param_2 - 1;
  if (uVar4 < param_2) {
    uVar3 = uVar4;
  }
  if (param_2 == 0) {
    uVar3 = uVar4;
  }
  *(undefined1 *)(param_1 + uVar3) = 0;
  return param_1;
LAB_0054757e:
  *(undefined1 *)(param_1 + (ulong)uVar6) = 0;
  uVar6 = uVar2;
  goto LAB_00547588;
}


