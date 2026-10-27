// Function : rtext_findatomfor
// Namespace: 
// Entry    : 0051e940
// Prototype: int rtext_findatomfor(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long * param_9, uint param_10, uint param_11, undefined8 param_12, undefined8 param_13, byte * param_14)
// Body     : 0051e940 - 0051ea8d


int rtext_findatomfor(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                     undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                     long *param_9,uint param_10,uint param_11,undefined8 param_12,
                     undefined8 param_13,byte *param_14)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char cVar6;
  ulong uVar7;
  int local_14;
  uint local_10;
  uint local_c;
  
  local_10 = param_11;
  local_c = param_10;
  rtext_senditup(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,2,&local_c,
                 &local_10,&local_14,param_14);
  if (local_14 < 0) {
    iVar4 = 0;
  }
  else {
    lVar1 = *param_9;
    if (local_14 == 0) {
      uVar7 = 0;
      bVar2 = false;
      iVar4 = 0;
    }
    else {
      uVar7 = 0;
      bVar2 = false;
      iVar4 = 0;
      do {
        cVar6 = *(char *)(lVar1 + uVar7);
        iVar5 = 1;
        if (cVar6 < ',') {
          if ((cVar6 == '\n') || (cVar6 == ' ')) goto LAB_0051e9dd;
LAB_0051ea00:
          iVar4 = iVar4 + (uint)!bVar2;
          iVar5 = 0;
          cVar6 = *(char *)(lVar1 + 1 + uVar7);
          iVar3 = 0;
          if (cVar6 < ',') goto LAB_0051e9e9;
LAB_0051ea20:
          iVar5 = iVar3;
          bVar2 = false;
          if ((cVar6 == ';') || (cVar6 == ',')) {
            iVar4 = iVar4 + 1;
          }
          else {
LAB_0051ea32:
            iVar4 = iVar4 + iVar5;
            bVar2 = true;
          }
        }
        else {
          if ((cVar6 != ';') && (cVar6 != ',')) goto LAB_0051ea00;
          iVar4 = iVar4 + 1;
LAB_0051e9dd:
          cVar6 = *(char *)(lVar1 + 1 + uVar7);
          iVar3 = iVar5;
          if ('+' < cVar6) goto LAB_0051ea20;
LAB_0051e9e9:
          bVar2 = false;
          if ((cVar6 != '\n') && (cVar6 != ' ')) goto LAB_0051ea32;
        }
        uVar7 = uVar7 + 2;
      } while ((local_14 + 1U & 0xfffffffe) != uVar7);
    }
    if ((local_14 + 1U & 1) != 0) {
      cVar6 = *(char *)(lVar1 + uVar7);
      if (cVar6 < ',') {
        if ((cVar6 == '\n') || (cVar6 == ' ')) goto LAB_0051ea40;
      }
      else if ((cVar6 == ';') || (cVar6 == ',')) {
        return iVar4;
      }
      return iVar4 + (uint)!bVar2 + -1;
    }
  }
LAB_0051ea40:
  return iVar4 + -1;
}


