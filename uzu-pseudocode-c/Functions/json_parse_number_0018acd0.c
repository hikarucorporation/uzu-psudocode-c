// Function : json_parse_number
// Namespace: 
// Entry    : 0018acd0
// Prototype: undefined json_parse_number(long * param_1, long * param_2)
// Body     : 0018acd0 - 0018aea6


/* WARNING: Removing unreachable block (ram,0x0018ad3e) */
/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* json_parse_number(json_parse_state_s*, json_number_s*) */

void __cdecl json_parse_number(long *param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  char cVar9;
  long lVar10;
  
  uVar1 = param_1[3];
  uVar7 = param_1[2];
  lVar2 = *param_1;
  uVar3 = param_1[1];
  lVar4 = param_1[4];
  *param_2 = lVar4;
  if (((((uVar1 & 0x200) == 0) || (*(char *)(lVar2 + uVar7) != '0')) ||
      ((*(byte *)(uVar7 + 1 + lVar2) | 0x20) != 0x78)) ||
     (lVar10 = uVar3 - uVar7, uVar3 < uVar7 || lVar10 == 0)) {
    lVar10 = 0;
  }
  else {
    cVar9 = '0';
    lVar8 = 0;
    do {
      *(char *)(lVar4 + lVar8) = cVar9;
      if ((uVar7 - uVar3) + 1 + lVar8 == 0) goto LAB_0018ad78;
      cVar9 = *(char *)(lVar2 + uVar7 + 1 + lVar8);
      lVar8 = lVar8 + 1;
    } while (((byte)(cVar9 - 0x30U) < 10) ||
            (((byte)(cVar9 + 0xbfU) < 0x38 &&
             ((0x80003f0080003fU >> ((ulong)(byte)(cVar9 + 0xbfU) & 0x3f) & 1) != 0))));
    uVar7 = uVar7 + lVar8;
    lVar10 = lVar8;
  }
  if (uVar7 < uVar3) {
    do {
      cVar9 = *(char *)(lVar2 + uVar7);
      if ((9 < (int)cVar9 - 0x30U) &&
         ((uVar5 = (int)cVar9 - 0x2b, 0x3a < uVar5 ||
          ((0x40000000400000dU >> ((ulong)uVar5 & 0x3f) & 1) == 0)))) goto LAB_0018adc0;
      uVar7 = uVar7 + 1;
      *(char *)(lVar4 + lVar10) = cVar9;
      lVar10 = lVar10 + 1;
    } while (uVar3 != uVar7);
LAB_0018ad78:
    uVar7 = uVar3;
  }
LAB_0018adc0:
  uVar6 = uVar7;
  if ((uVar1 & 0x1000) != 0) {
    uVar1 = uVar7 + 8;
    if ((uVar1 < uVar3) && (*(char *)(lVar2 + uVar7) == 'I')) {
      *(undefined1 *)(lVar4 + lVar10) = 0x49;
      *(undefined1 *)(lVar4 + 1 + lVar10) = *(undefined1 *)(uVar7 + 1 + lVar2);
      *(undefined1 *)(lVar4 + 2 + lVar10) = *(undefined1 *)(uVar7 + 2 + lVar2);
      *(undefined1 *)(lVar4 + 3 + lVar10) = *(undefined1 *)(uVar7 + 3 + lVar2);
      *(undefined1 *)(lVar4 + 4 + lVar10) = *(undefined1 *)(uVar7 + 4 + lVar2);
      *(undefined1 *)(lVar4 + 5 + lVar10) = *(undefined1 *)(uVar7 + 5 + lVar2);
      *(undefined1 *)(lVar4 + 6 + lVar10) = *(undefined1 *)(uVar7 + 6 + lVar2);
      *(undefined1 *)(lVar4 + 7 + lVar10) = *(undefined1 *)(uVar7 + 7 + lVar2);
      lVar10 = lVar10 + 8;
      uVar6 = uVar7 + 0xb;
    }
    else {
      uVar6 = uVar7 + 3;
      uVar1 = uVar7;
    }
    if ((uVar6 < uVar3) && (*(char *)(lVar2 + uVar1) == 'N')) {
      *(undefined1 *)(lVar4 + lVar10) = 0x4e;
      *(undefined1 *)(lVar4 + 1 + lVar10) = *(undefined1 *)(uVar1 + 1 + lVar2);
      *(undefined1 *)(lVar4 + 2 + lVar10) = *(undefined1 *)(uVar1 + 2 + lVar2);
      lVar10 = lVar10 + 3;
    }
    else {
      uVar6 = uVar1;
    }
  }
  param_2[1] = lVar10;
  *(undefined1 *)(lVar4 + lVar10) = 0;
  param_1[4] = param_1[4] + lVar10 + 1;
  param_1[2] = uVar6;
  return;
}


