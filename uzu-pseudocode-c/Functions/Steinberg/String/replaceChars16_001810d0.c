// Function : replaceChars16
// Namespace: Steinberg:String
// Entry    : 001810d0
// Prototype: undefined4 replaceChars16(String * this, ushort * param_1, ushort param_2)
// Body     : 001810d0 - 0018131c


/* Steinberg::String::replaceChars16(char16_t const*, char16_t) */

undefined4 __thiscall Steinberg::String::replaceChars16(String *this,ushort *param_1,ushort param_2)

{
  short *psVar1;
  undefined4 uVar2;
  char *pcVar3;
  ulong uVar4;
  ushort *puVar5;
  char *pcVar6;
  ushort uVar7;
  ushort uVar8;
  uint uVar9;
  ushort *puVar10;
  ushort uVar11;
  ushort uVar12;
  undefined **local_50;
  char *local_48;
  uint local_40;
  ulong local_38;
  
  puVar5 = *(ushort **)(this + 8);
  if (puVar5 == (ushort *)0x0) {
    return 0;
  }
  if ((*(uint *)(this + 0x10) & 0x3fffffff) == 0) {
    return 0;
  }
  if ((*(uint *)(this + 0x10) & 0x40000000) != 0) {
    uVar12 = 0x20;
    if (param_2 != 0) {
      uVar12 = param_2;
    }
    uVar11 = *puVar5;
    if ((uVar11 == 0) || (uVar7 = *param_1, uVar7 == 0)) {
      uVar2 = 0;
    }
    else {
      uVar2 = 0;
      do {
        uVar8 = uVar7;
        puVar10 = param_1;
        if (uVar7 == 0) {
          uVar7 = 0;
        }
        else {
          do {
            puVar10 = puVar10 + 1;
            if (uVar11 == uVar8) {
              *puVar5 = uVar12;
              uVar7 = *param_1;
              uVar2 = 1;
              break;
            }
            uVar8 = *puVar10;
          } while (uVar8 != 0);
        }
        uVar11 = puVar5[1];
        puVar5 = puVar5 + 1;
      } while (uVar11 != 0);
    }
    return uVar2;
  }
  local_48 = (char *)0x0;
  local_50 = &PTR__String_00702c10;
  local_40 = 0x40000000;
  if (param_1 != (ushort *)0x0) {
    uVar4 = 0;
    do {
      psVar1 = (short *)((long)param_1 + uVar4);
      uVar4 = uVar4 + 2;
    } while (*psVar1 != 0);
    uVar9 = (int)(uVar4 >> 1) - 1;
    if (uVar9 != 0) {
      pcVar3 = malloc(uVar4 & 0x1fffffffe);
      if (pcVar3 == (char *)0x0) goto LAB_001811a1;
      pcVar3[0] = '\0';
      pcVar3[1] = '\0';
      (pcVar3 + (ulong)uVar9 * 2)[0] = '\0';
      (pcVar3 + (ulong)uVar9 * 2)[1] = '\0';
      local_48 = pcVar3;
      if (0 < (int)uVar9) {
        memcpy(pcVar3,param_1,(ulong)uVar9 * 2);
      }
    }
    local_40 = uVar9 & 0x3fffffff | 0x40000000;
  }
LAB_001811a1:
                    /* try { // try from 001811a1 to 001811ac has its CatchHandler @ 0018131f */
  uVar4 = toMultiByte((String *)&local_50,0);
  if ((((char)uVar4 == '\0') || ((local_40 & 0x3ffffffe) != 0)) || (local_38 = 0, param_2 == 0)) {
    uVar2 = 0;
    goto LAB_001811c3;
  }
  uVar12 = 0x5f;
  if (param_2 < 0x80) {
    uVar12 = param_2;
  }
  local_38 = (ulong)(uVar12 & 0xff);
  if ((local_40 & 0x40000000) == 0) {
    pcVar6 = "";
    if (local_48 != (char *)0x0) {
      pcVar6 = local_48;
    }
LAB_001812ca:
    pcVar3 = pcVar6;
  }
  else {
    pcVar3 = "";
    if ((local_48 != (char *)0x0) && ((local_40 & 0x3fffffff) != 0)) {
      toMultiByte((String *)&local_50,0);
      pcVar3 = "";
      pcVar6 = local_48;
      if (local_48 == (char *)0x0) {
        pcVar6 = "";
      }
      if ((local_40 & 0x40000000) == 0) goto LAB_001812ca;
    }
  }
                    /* try { // try from 001812d2 to 00181300 has its CatchHandler @ 0018131d */
  uVar2 = replaceChars8(this,pcVar3,(char)local_38);
LAB_001811c3:
  local_50 = &PTR__String_00702c10;
  if (local_48 != (char *)0x0) {
    free(local_48);
  }
  return uVar2;
}


