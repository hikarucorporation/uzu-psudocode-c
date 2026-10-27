// Function : png_chunk_warning
// Namespace: juce:pnglibNamespace
// Entry    : 00399af0
// Prototype: undefined png_chunk_warning(long param_1, long param_2)
// Body     : 00399af0 - 00399d1d


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::pnglibNamespace::png_chunk_warning(juce::pnglibNamespace::png_struct_def const*, char
   const*) */

void __cdecl juce::pnglibNamespace::png_chunk_warning(long param_1,long param_2)

{
  char *pcVar1;
  undefined *puVar2;
  uint uVar3;
  long lVar4;
  char cVar5;
  long lVar6;
  uint uVar7;
  int iVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 uStack_f0;
  char local_e8 [224];
  
  puVar2 = PTR_stderr_00715948;
  if (param_1 == 0) {
    uStack_f0 = 0x399d09;
    fprintf(*(FILE **)PTR_stderr_00715948,"libpng warning: %s",(char *)param_2);
    fputc(10,*(FILE **)puVar2);
    return;
  }
  uVar7 = *(uint *)(param_1 + 0x138);
  uVar3 = uVar7 >> 0x18;
  if ((uVar3 - 0x7b < 0xffffffc6) || (uVar3 - 0x5b < 6)) {
    local_e8[0] = '[';
    local_e8[1] = png_digit[uVar7 >> 0x1c];
    local_e8[2] = png_digit[uVar3 & 0xf];
    local_e8[3] = 0x5d;
    uVar9 = 4;
  }
  else {
    local_e8[0] = (char)(uVar7 >> 0x18);
    uVar9 = 1;
  }
  cVar5 = (char)(uVar7 >> 0x10);
  uVar3 = uVar7 >> 0x10 & 0xff;
  if ((uVar3 - 0x7b < 0xffffffc6) || (uVar3 - 0x5b < 6)) {
    local_e8[uVar9] = '[';
    pcVar1 = local_e8 + uVar9;
    local_e8[uVar9 + 1] = png_digit[uVar7 >> 0x14 & 0xf];
    uVar9 = (ulong)((int)uVar9 + 3);
    *(undefined1 *)((ulong)pcVar1 | 2) = png_digit[uVar7 >> 0x10 & 0xf];
    cVar5 = ']';
  }
  local_e8[uVar9] = cVar5;
  uVar10 = uVar9 + 1;
  cVar5 = (char)(uVar7 >> 8);
  uVar3 = uVar7 >> 8 & 0xff;
  if ((uVar3 - 0x7b < 0xffffffc6) || (uVar3 - 0x5b < 6)) {
    local_e8[uVar9 + 1] = '[';
    local_e8[uVar9 + 2] = png_digit[uVar7 >> 0xc & 0xf];
    uVar10 = (ulong)((int)uVar9 + 4);
    local_e8[uVar9 + 3] = png_digit[uVar7 >> 8 & 0xf];
    cVar5 = ']';
  }
  local_e8[uVar10] = cVar5;
  uVar9 = uVar10 + 1;
  if (((uVar7 & 0xff) - 0x7b < 0xffffffc6) || ((uVar7 & 0xff) - 0x5b < 6)) {
    local_e8[uVar10 + 1] = '[';
    local_e8[uVar10 + 2] = png_digit[uVar7 >> 4 & 0xf];
    uVar9 = (ulong)((int)uVar10 + 4);
    local_e8[uVar10 + 3] = png_digit[uVar7 & 0xf];
    uVar7 = 0x5d;
  }
  local_e8[uVar9] = (char)uVar7;
  lVar4 = uVar9 + 1;
  if (param_2 != 0) {
    local_e8[uVar9 + 1] = ':';
    local_e8[uVar9 + 2] = ' ';
    iVar8 = (int)uVar9 + 0xc6;
    lVar4 = uVar9 + 5;
    lVar6 = 0;
    do {
      if (*(char *)(param_2 + lVar6) == '\0') {
        lVar4 = lVar4 + -2;
LAB_00399cd6:
        iVar8 = (int)lVar4;
        break;
      }
      local_e8[lVar4 + -2] = *(char *)(param_2 + lVar6);
      cVar5 = *(char *)(param_2 + 1 + lVar6);
      if (cVar5 == '\0') {
        lVar4 = lVar4 + -1;
        goto LAB_00399cd6;
      }
      local_e8[lVar4 + -1] = cVar5;
      cVar5 = *(char *)(param_2 + 2 + lVar6);
      if (cVar5 == '\0') goto LAB_00399cd6;
      lVar6 = lVar6 + 3;
      local_e8[lVar4] = cVar5;
      lVar4 = lVar4 + 3;
    } while (lVar6 != 0xc3);
    lVar4 = (long)iVar8;
  }
  local_e8[lVar4] = '\0';
  uStack_f0 = 0x399ce8;
  png_warning(param_1,local_e8);
  return;
}


