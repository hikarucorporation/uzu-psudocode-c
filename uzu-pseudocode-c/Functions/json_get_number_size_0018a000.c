// Function : json_get_number_size
// Namespace: 
// Entry    : 0018a000
// Prototype: undefined8 json_get_number_size(long * param_1)
// Body     : 0018a000 - 0018a355


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* json_get_number_size(json_parse_state_s*) */

undefined8 __cdecl json_get_number_size(long *param_1)

{
  char *pcVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  byte bVar6;
  uint uVar7;
  char cVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  bool bVar12;
  
  uVar2 = param_1[3];
  uVar3 = param_1[2];
  lVar4 = *param_1;
  uVar5 = param_1[1];
  param_1[6] = param_1[6] + 0x10;
  uVar11 = uVar5;
  if (((((uVar2 & 0x200) == 0) || (uVar5 <= uVar3 + 1)) || (*(char *)(lVar4 + uVar3) != '0')) ||
     ((*(byte *)(lVar4 + uVar3 + 1) | 0x20) != 0x78)) {
    bVar6 = 1;
    uVar9 = uVar3;
    if (uVar3 < uVar5) {
      if ((*(char *)(lVar4 + uVar3) == '-') ||
         (((uVar2 & 0x400) != 0 && (*(char *)(lVar4 + uVar3) == '+')))) {
        uVar9 = uVar3 + 1;
        bVar6 = 0;
      }
      bVar12 = false;
      if ((uVar2 & 0x1000) != 0) goto LAB_0018a0db;
LAB_0018a15c:
      uVar10 = uVar9;
      if ((((!(bool)(bVar6 | bVar12)) && (uVar9 < uVar5)) &&
          (9 < (byte)(*(char *)(lVar4 + uVar9) - 0x30U))) &&
         (((uVar2 & 0x800) == 0 || (*(char *)(lVar4 + uVar9) != '.')))) goto LAB_0018a341;
    }
    else {
      bVar12 = false;
      if ((uVar2 & 0x1000) == 0) goto LAB_0018a15c;
LAB_0018a0db:
      bVar12 = false;
      if ((((uVar9 + 8 < uVar5) && (*(char *)(lVar4 + uVar9) == 'I')) &&
          ((*(char *)(uVar9 + 1 + lVar4) == 'n' &&
           (((*(char *)(uVar9 + 2 + lVar4) == 'f' && (*(char *)(uVar9 + 3 + lVar4) == 'i')) &&
            (*(char *)(uVar9 + 4 + lVar4) == 'n')))))) &&
         ((*(char *)(uVar9 + 5 + lVar4) == 'i' && (*(char *)(uVar9 + 6 + lVar4) == 't')))) {
        bVar12 = *(char *)(uVar9 + 7 + lVar4) == 'y';
        if (bVar12) {
          uVar9 = uVar9 + 8;
        }
      }
      if (((uVar5 <= uVar9 + 3) || (*(char *)(lVar4 + uVar9) != 'N')) ||
         (*(char *)(uVar9 + 1 + lVar4) != 'a')) goto LAB_0018a15c;
      uVar10 = uVar9 + 3;
      if (*(char *)(uVar9 + 2 + lVar4) != 'N') goto LAB_0018a15c;
    }
    uVar9 = uVar10;
    bVar12 = false;
    if ((uVar9 < uVar5) && (bVar12 = false, *(char *)(lVar4 + uVar9) == '0')) {
      uVar9 = uVar9 + 1;
      bVar12 = true;
      if ((uVar9 < uVar5) && ((byte)(*(char *)(lVar4 + uVar9) - 0x30U) < 10)) goto LAB_0018a341;
    }
    if (uVar9 < uVar5) {
      cVar8 = *(char *)(lVar4 + uVar9);
      if ((byte)(cVar8 - 0x30U) < 10) {
        do {
          if (uVar5 - 1 == uVar9) goto LAB_0018a2ea;
          cVar8 = *(char *)(lVar4 + 1 + uVar9);
          uVar9 = uVar9 + 1;
        } while ((byte)(cVar8 - 0x30U) < 10);
        bVar12 = true;
      }
      if (cVar8 == '.') {
        pcVar1 = (char *)(lVar4 + 1 + uVar9);
        uVar9 = uVar9 + 1;
        bVar6 = *pcVar1 - 0x30;
        if ((9 < bVar6) && (((uVar2 & 0x800) == 0 || (!bVar12)))) goto LAB_0018a341;
        if ((uVar9 < uVar5) && (bVar6 < 10)) {
          do {
            if ((2 - uVar5) + uVar9 == 1) goto LAB_0018a2ea;
            pcVar1 = (char *)(lVar4 + 1 + uVar9);
            uVar9 = uVar9 + 1;
          } while ((byte)(*pcVar1 - 0x30U) < 10);
        }
      }
    }
    if ((uVar9 < uVar5) && ((*(byte *)(lVar4 + uVar9) | 0x20) == 0x65)) {
      uVar10 = uVar9 + 1;
      if ((uVar10 < uVar5) &&
         ((*(char *)(lVar4 + uVar10) == '-' || (*(char *)(lVar4 + uVar10) == '+')))) {
        uVar10 = uVar9 + 2;
      }
      if ((uVar10 < uVar5) && (9 < (byte)(*(char *)(lVar4 + uVar10) - 0x30U))) {
        param_1[10] = 5;
        param_1[2] = uVar10;
        return 1;
      }
      uVar11 = uVar10 + 1;
      if (uVar10 + 1 < uVar5) {
        uVar11 = uVar5;
      }
      do {
        uVar9 = uVar10 + 1;
        if (uVar5 <= uVar9) goto LAB_0018a2ea;
        pcVar1 = (char *)(lVar4 + 1 + uVar10);
        uVar10 = uVar9;
      } while ((byte)(*pcVar1 - 0x30U) < 10);
    }
  }
  else {
    uVar9 = uVar3 + 2;
    if (uVar9 < uVar5) {
      do {
        if ((9 < (byte)(*(char *)(lVar4 + uVar9) - 0x30U)) &&
           ((bVar6 = *(char *)(lVar4 + uVar9) + 0xbf, 0x25 < bVar6 ||
            ((0x3f0000003fU >> ((ulong)bVar6 & 0x3f) & 1) == 0)))) goto LAB_0018a2c8;
        uVar9 = uVar9 + 1;
      } while (uVar5 != uVar9);
      goto LAB_0018a2ea;
    }
  }
LAB_0018a2c8:
  if (uVar9 < uVar5) {
    uVar7 = (uint)*(char *)(lVar4 + uVar9);
    if (uVar7 < 0x3e) {
      if ((0x100100002600U >> ((ulong)uVar7 & 0x3f) & 1) == 0) {
        if ((ulong)uVar7 != 0x3d) goto LAB_0018a337;
        if ((uVar2 & 8) == 0) goto LAB_0018a341;
      }
    }
    else {
LAB_0018a337:
      if ((uVar7 != 0x5d) && (uVar7 != 0x7d)) {
LAB_0018a341:
        param_1[10] = 5;
        param_1[2] = uVar9;
        return 1;
      }
    }
  }
  uVar11 = uVar9;
LAB_0018a2ea:
  param_1[7] = param_1[7] + (uVar11 - uVar3) + 1;
  param_1[2] = uVar11;
  return 0;
}


