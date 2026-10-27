// Function : makefilename_scanformat
// Namespace: 
// Entry    : 0054e730
// Prototype: undefined makefilename_scanformat(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 0054e730 - 0054e921


void makefilename_scanformat
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               long param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
               char *param_13,undefined8 param_14)

{
  byte *pbVar1;
  byte *pbVar2;
  bool bVar3;
  undefined4 uVar4;
  void *pvVar5;
  byte bVar6;
  ulong uVar7;
  int iVar8;
  byte *pbVar9;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 extraout_XMM0_Qa_02;
  undefined8 extraout_XMM0_Qa_03;
  undefined8 extraout_XMM0_Qa_04;
  
  if (*(undefined8 **)(param_9 + 0x30) == (undefined8 *)0x0) {
    return;
  }
  pbVar1 = (byte *)**(undefined8 **)(param_9 + 0x30);
  uVar7 = CONCAT71((int7)((ulong)param_12 >> 8),*pbVar1);
  if (*pbVar1 != 0) {
    bVar3 = false;
    pbVar2 = pbVar1;
    do {
      pbVar9 = pbVar2 + 1;
      bVar6 = (byte)uVar7;
      if (bVar3) {
        bVar3 = false;
        if ((bVar6 != 0x25) &&
           ((0x3f < ((uint)uVar7 & 0xff) ||
            (bVar3 = true, (1L << (bVar6 & 0x3f) & 0x3ff600800000001U) == 0)))) {
          if (bVar6 == 0x73) {
            uVar4 = 3;
          }
          else {
            iVar8 = (int)(char)bVar6;
            pvVar5 = memchr("fgGeE",iVar8,6);
            if (pvVar5 == (void *)0x0) {
              pvVar5 = memchr("xXdiouc",iVar8,8);
              if (pvVar5 == (void *)0x0) {
                pvVar5 = memchr(&DAT_00657774,iVar8,2);
                param_1 = extraout_XMM0_Qa_01;
                bVar3 = true;
                if (pvVar5 == (void *)0x0) goto LAB_0054e775;
                uVar4 = 4;
              }
              else {
                uVar4 = 1;
                param_1 = extraout_XMM0_Qa_00;
              }
            }
            else {
              uVar4 = 2;
              param_1 = extraout_XMM0_Qa;
            }
          }
          *(undefined4 *)(param_9 + 0x38) = uVar4;
          uVar7 = CONCAT71((int7)(uVar7 >> 8),*pbVar2);
          if (*pbVar2 == 0) {
            return;
          }
          bVar3 = false;
          goto LAB_0054e873;
        }
      }
      else {
        bVar3 = bVar6 == 0x25;
      }
LAB_0054e775:
      uVar7 = (ulong)*pbVar9;
      pbVar2 = pbVar9;
    } while (*pbVar9 != 0);
  }
  *(undefined4 *)(param_9 + 0x38) = 0;
  return;
LAB_0054e873:
  bVar6 = (byte)uVar7;
  if (bVar3) {
    bVar3 = false;
    if (bVar6 != 0x25) {
      bVar3 = true;
      if ((0x3f < ((uint)uVar7 & 0xff)) || ((1L << (bVar6 & 0x3f) & 0x3ff600800000001U) == 0)) {
        if (bVar6 == 0x73) {
LAB_0054e901:
          pd_error(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                   "makefilename: invalid format string \'%s\' (too many format specifiers)",pbVar1,
                   uVar7,param_13,param_14);
          *(undefined8 *)(param_9 + 0x30) = 0;
          return;
        }
        iVar8 = (int)(char)bVar6;
        pvVar5 = memchr("fgGeE",iVar8,6);
        param_1 = extraout_XMM0_Qa_02;
        if (((pvVar5 != (void *)0x0) ||
            (pvVar5 = memchr("xXdiouc",iVar8,8), param_1 = extraout_XMM0_Qa_03,
            pvVar5 != (void *)0x0)) ||
           (pvVar5 = memchr(&DAT_00657774,iVar8,2), param_1 = extraout_XMM0_Qa_04,
           pvVar5 != (void *)0x0)) goto LAB_0054e901;
      }
    }
  }
  else {
    bVar3 = bVar6 == 0x25;
  }
  bVar6 = *pbVar9;
  uVar7 = (ulong)bVar6;
  pbVar9 = pbVar9 + 1;
  if (bVar6 == 0) {
    return;
  }
  goto LAB_0054e873;
}


