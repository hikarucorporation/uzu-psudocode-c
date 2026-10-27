// Function : png_icc_profile_error
// Namespace: juce:pnglibNamespace
// Entry    : 003a5820
// Prototype: undefined png_icc_profile_error(pnglibNamespace * param_1, long param_2, char * param_3, ulong param_4, char * param_5)
// Body     : 003a5820 - 003a5b7c


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::pnglibNamespace::png_icc_profile_error(juce::pnglibNamespace::png_struct_def const*,
   juce::pnglibNamespace::png_colorspace*, char const*, unsigned long, char const*) */

void __cdecl
juce::pnglibNamespace::png_icc_profile_error
          (pnglibNamespace *param_1,long param_2,char *param_3,ulong param_4,char *param_5)

{
  pnglibNamespace pVar1;
  bool bVar2;
  char *pcVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  byte bVar8;
  byte bVar9;
  char *pcVar10;
  ulong uVar11;
  ulong uVar12;
  char acStack_f8 [22];
  char local_e2 [7];
  char acStack_db [3];
  undefined8 local_d8;
  undefined2 local_d0;
  char acStack_ce [190];
  
  if (param_2 != 0) {
    *(byte *)(param_2 + 0x4b) = *(byte *)(param_2 + 0x4b) | 0x80;
  }
  local_d8 = 0x20656c69666f7270;
  local_d0 = 0x27;
  uVar12 = 9;
  if ((param_3 != (char *)0x0) && (cVar4 = *param_3, cVar4 != '\0')) {
    uVar12 = 9;
    do {
      uVar7 = uVar12;
      uVar12 = uVar7 + 1;
      acStack_db[uVar7 + 3] = cVar4;
      cVar4 = param_3[uVar7 - 8];
      if (cVar4 == '\0') break;
    } while (uVar7 < 0x56);
    acStack_db[uVar7 + 4] = '\0';
  }
  builtin_strncpy(acStack_db + uVar12 + 3,"\': ",4);
  uVar7 = param_4 >> 0x18;
  if ((((uVar7 & 0xffffffffffffffdf) - 0x41 < 0x1a) || (uVar7 == 0x20)) || (uVar7 - 0x30 < 10)) {
    uVar5 = (uint)(param_4 >> 0x10);
    bVar8 = (byte)(param_4 >> 0x10);
    if (((0x19 < (ulong)(uVar5 & 0xdf) - 0x41) && (bVar8 != 0x20)) && (9 < (ulong)bVar8 - 0x30))
    goto LAB_003a593a;
    uVar6 = (uint)(param_4 >> 8);
    bVar9 = (byte)(param_4 >> 8);
    if (((0x19 < (ulong)(uVar6 & 0xdf) - 0x41) && (bVar9 != 0x20)) && (9 < (ulong)bVar9 - 0x30))
    goto LAB_003a593a;
    if (((0x19 < (ulong)((uint)param_4 & 0xdf) - 0x41) && ((int)(param_4 & 0xff) != 0x20)) &&
       (9 < (param_4 & 0xff) - 0x30)) goto LAB_003a593a;
    acStack_db[uVar12 + 6] = '\'';
    uVar7 = param_4 >> 0x18 & 0xff;
    if (0x5e < (int)uVar7 - 0x20U) {
      uVar7 = 0x3f;
    }
    acStack_db[uVar12 + 7] = (char)uVar7;
    if (0x5e < (uVar5 & 0xff) - 0x20) {
      bVar8 = 0x3f;
    }
    acStack_ce[uVar12 - 5] = bVar8;
    if (0x5e < (uVar6 & 0xff) - 0x20) {
      bVar9 = 0x3f;
    }
    acStack_ce[uVar12 - 4] = bVar9;
    cVar4 = '?';
    if (((uint)param_4 & 0xff) - 0x20 < 0x5f) {
      cVar4 = (char)param_4;
    }
    acStack_ce[uVar12 - 3] = cVar4;
    (acStack_ce + (uVar12 - 2))[0] = '\'';
    (acStack_ce + (uVar12 - 2))[1] = ':';
    acStack_ce[uVar12] = ' ';
    uVar7 = uVar12 + 0xb;
  }
  else {
LAB_003a593a:
    uVar7 = uVar12 + 3;
    local_e2[1] = 0;
    pcVar3 = local_e2;
    do {
      pcVar10 = pcVar3;
      cVar4 = "-0123456789ABCDEF"[(ulong)((uint)param_4 & 0xf) + 1];
      *pcVar10 = cVar4;
      if (pcVar10 <= acStack_f8) break;
      bVar2 = 0xf < param_4;
      param_4 = param_4 >> 4;
      pcVar3 = pcVar10 + -1;
    } while (bVar2);
    if (uVar12 < 0xc1) {
      if (uVar7 == 0xc3) {
        uVar11 = 0xc3;
        cVar4 = '\0';
        uVar12 = 0xc3;
LAB_003a59a7:
        acStack_db[uVar11 + 3] = cVar4;
LAB_003a59ac:
        uVar7 = uVar12;
      }
      else {
        uVar12 = uVar12 + 6;
        do {
          uVar11 = uVar12;
          pcVar10 = pcVar10 + 1;
          acStack_db[uVar11] = cVar4;
          cVar4 = *pcVar10;
          uVar12 = uVar11 + 1;
          if (cVar4 == '\0') break;
        } while (uVar11 - 3 < 0xc2);
        acStack_db[uVar11 + 1] = '\0';
        uVar7 = 0xc3;
        if (uVar11 - 3 < 0xc2) {
          acStack_db[uVar11 + 1] = 'h';
          if (uVar12 == 0xc5) {
            uVar12 = uVar11 - 1;
            goto LAB_003a59ac;
          }
          acStack_db[uVar11 + 2] = ':';
          cVar4 = ' ';
          uVar7 = uVar11;
          if (uVar12 != 0xc4) goto LAB_003a59a7;
        }
      }
      acStack_db[uVar7 + 3] = '\0';
    }
    else if (0xc3 < uVar7) {
      pVar1 = param_1[0x4d];
      goto joined_r0x003a5b5c;
    }
  }
  if (param_5 != (char *)0x0) {
    if (0xc2 < uVar7) {
      acStack_db[uVar7 + 3] = '\0';
      pVar1 = param_1[0x4d];
      goto joined_r0x003a5b5c;
    }
    cVar4 = *param_5;
    if (cVar4 != '\0') {
      do {
        uVar12 = uVar7;
        param_5 = param_5 + 1;
        acStack_db[uVar12 + 3] = cVar4;
        cVar4 = *param_5;
        if (cVar4 == '\0') break;
        uVar7 = uVar12 + 1;
      } while (uVar12 < 0xc2);
      acStack_db[uVar12 + 4] = '\0';
      pVar1 = param_1[0x4d];
      goto joined_r0x003a5b5c;
    }
  }
  acStack_db[uVar7 + 3] = '\0';
  pVar1 = param_1[0x4d];
joined_r0x003a5b5c:
  if (((byte)pVar1 & 0x80) == 0) {
    if (((byte)param_1[0x52] & 0x40) != 0) {
      png_warning((long)param_1,(char *)&local_d8);
      return;
    }
  }
  else if ((param_2 == 0) || (((byte)param_1[0x52] & 0x10) != 0)) {
    png_chunk_warning((long)param_1,(long)&local_d8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  png_err(param_1);
}


