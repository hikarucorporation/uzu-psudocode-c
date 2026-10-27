// Function : png_check_keyword
// Namespace: juce:pnglibNamespace
// Entry    : 0039aa50
// Prototype: int png_check_keyword(long param_1, byte * param_2, byte * param_3)
// Body     : 0039aa50 - 0039ad1a


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::pnglibNamespace::png_check_keyword(juce::pnglibNamespace::png_struct_def*, char const*,
   unsigned char*) */

int __cdecl juce::pnglibNamespace::png_check_keyword(long param_1,byte *param_2,byte *param_3)

{
  ulong uVar1;
  ulong uVar2;
  byte *pbVar3;
  byte bVar4;
  ulong uVar5;
  byte *pbVar6;
  uint uVar7;
  char *pcVar8;
  long lVar9;
  uint uVar10;
  int iVar11;
  char *pcVar12;
  uint uVar13;
  int iVar14;
  bool bVar15;
  bool bVar16;
  byte local_1d8 [192];
  byte local_118 [32];
  byte local_f8 [224];
  
  pcVar8 = (char *)local_1d8;
  if (param_2 == (byte *)0x0) {
    *param_3 = 0;
    return 0;
  }
  bVar4 = *param_2;
  if (bVar4 == 0) {
    bVar15 = true;
    uVar13 = 0;
    uVar10 = 0;
    pbVar6 = param_2;
  }
  else {
    uVar10 = 0;
    bVar15 = true;
    uVar13 = 0;
    pbVar3 = param_2;
    do {
      if ((bVar4 < 0xa1) && (0x5d < (byte)(bVar4 - 0x21))) {
        if (bVar15) {
          if (uVar10 == 0) {
            uVar10 = (uint)bVar4;
          }
        }
        else {
          *param_3 = 0x20;
          param_3 = param_3 + 1;
          uVar13 = uVar13 + 1;
          if (bVar4 != 0x20) {
            uVar10 = (uint)bVar4;
          }
        }
        bVar15 = true;
        bVar4 = pbVar3[1];
      }
      else {
        *param_3 = bVar4;
        param_3 = param_3 + 1;
        uVar13 = uVar13 + 1;
        bVar15 = false;
        bVar4 = pbVar3[1];
      }
      pbVar6 = pbVar3 + 1;
    } while ((bVar4 != 0) && (pbVar6 = pbVar3 + 1, pbVar3 = pbVar6, uVar13 < 0x4f));
  }
  bVar4 = bVar15 & uVar13 != 0;
  uVar7 = 0x20;
  if (uVar10 != 0) {
    uVar7 = uVar10;
  }
  if (bVar4 == 0) {
    uVar7 = uVar10;
  }
  param_3[-(ulong)bVar4] = 0;
  iVar14 = uVar13 - bVar4;
  if (iVar14 == 0) {
    return 0;
  }
  if (*pbVar6 == 0) {
    if (uVar7 == 0) {
      return iVar14;
    }
    bVar4 = *param_2;
    iVar11 = 0;
    if (bVar4 == 0) {
      uVar2 = 0;
    }
    else {
      uVar5 = 0;
      do {
        uVar2 = uVar5 + 1;
        local_118[uVar5] = bVar4;
        bVar4 = param_2[uVar5 + 1];
        if (bVar4 == 0) break;
        bVar15 = uVar5 < 0x1e;
        uVar5 = uVar2;
      } while (bVar15);
    }
    local_118[uVar2] = 0;
    local_1d8[0x17] = 0;
    uVar2 = (ulong)uVar7;
    pbVar6 = local_1d8 + 0x16;
    do {
      pbVar3 = pbVar6;
      bVar4 = "-0123456789ABCDEF"[(ulong)((uint)uVar2 & 0xf) + 1];
      *pbVar3 = bVar4;
      if (pbVar3 <= local_1d8) break;
      uVar5 = uVar2 >> 4;
      bVar16 = iVar11 == 0;
      iVar11 = iVar11 + -1;
      bVar15 = 0xf < uVar2;
      uVar2 = uVar5;
      pbVar6 = pbVar3 + -1;
    } while ((bVar15) || (bVar16));
    uVar2 = 0;
    do {
      uVar5 = uVar2;
      local_f8[uVar5] = bVar4;
      bVar4 = pbVar3[uVar5 + 1];
      if (bVar4 == 0) break;
      uVar2 = uVar5 + 1;
    } while (uVar5 < 0x1e);
    local_f8[uVar5 + 1] = 0;
    pcVar12 = "keyword \"@1\": bad character \'0x@2\'";
    uVar2 = 0;
LAB_0039ac55:
    do {
      bVar4 = *pcVar12;
      pbVar6 = (byte *)pcVar12;
      if (bVar4 == 0x40) {
        bVar4 = pcVar12[1];
        if (bVar4 == 0) {
          bVar4 = 0x40;
        }
        else {
          lVar9 = 0;
          uVar5 = 0xffffffffffffffff;
          do {
            uVar1 = uVar5 + 1;
            lVar9 = lVar9 + -0x20;
            if ((&DAT_005e5e54)[uVar5] == bVar4) break;
            bVar15 = uVar5 != 8;
            uVar5 = uVar1;
          } while (bVar15);
          pbVar6 = (byte *)(pcVar12 + 1);
          if ((uVar1 & 0xfffffff8) == 0) {
            if (uVar2 < 0xbf) {
              pbVar6 = local_1d8 + (0xa0 - lVar9);
              do {
                bVar4 = *pbVar6;
                if ((bVar4 == 0) || (local_118 + -lVar9 <= pbVar6)) goto LAB_0039ace4;
                pbVar6 = pbVar6 + 1;
                local_1d8[uVar2] = bVar4;
                uVar2 = uVar2 + 1;
              } while (uVar2 != 0xbf);
              uVar2 = 0xbf;
            }
LAB_0039ace4:
            pcVar12 = pcVar12 + 2;
            if (0xbe < uVar2) break;
            goto LAB_0039ac55;
          }
        }
      }
      else if (bVar4 == 0) break;
      pcVar12 = (char *)(pbVar6 + 1);
      local_1d8[uVar2] = bVar4;
      uVar2 = uVar2 + 1;
    } while (uVar2 < 0xbf);
    local_1d8[uVar2] = 0;
  }
  else {
    pcVar8 = "keyword truncated";
  }
  png_warning(param_1,pcVar8);
  return iVar14;
}


