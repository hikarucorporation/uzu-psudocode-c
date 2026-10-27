// Function : png_do_strip_channel
// Namespace: juce:pnglibNamespace
// Entry    : 0039c490
// Prototype: undefined png_do_strip_channel(long param_1, undefined1 * param_2, int param_3)
// Body     : 0039c490 - 0039c63e


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::pnglibNamespace::png_do_strip_channel(juce::pnglibNamespace::png_row_info_struct*, unsigned
   char*, int) */

void __cdecl
juce::pnglibNamespace::png_do_strip_channel(long param_1,undefined1 *param_2,int param_3)

{
  undefined1 *puVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 uVar6;
  
  lVar2 = *(long *)(param_1 + 8);
  puVar1 = param_2 + lVar2;
  puVar3 = param_2;
  if (*(char *)(param_1 + 0x12) == '\x04') {
    if (*(char *)(param_1 + 0x11) == '\x10') {
      puVar3 = param_2 + 6;
      if (param_3 != 0) {
        puVar3 = param_2;
      }
      lVar5 = 2;
      if (param_3 == 0) {
        lVar5 = 8;
      }
      uVar6 = 0x30;
      if (lVar5 < lVar2) {
        puVar4 = param_2 + lVar5;
        do {
          *puVar3 = *puVar4;
          puVar3[1] = puVar4[1];
          puVar3[2] = puVar4[2];
          puVar3[3] = puVar4[3];
          puVar3[4] = puVar4[4];
          puVar3[5] = puVar4[5];
          puVar3 = puVar3 + 6;
          puVar4 = puVar4 + 8;
        } while (puVar4 < puVar1);
      }
    }
    else {
      if (*(char *)(param_1 + 0x11) != '\b') {
        return;
      }
      puVar3 = param_2 + (ulong)(param_3 == 0) * 3;
      lVar5 = (ulong)(param_3 == 0) * 3 + 1;
      uVar6 = 0x18;
      if (lVar5 < lVar2) {
        puVar4 = param_2 + lVar5;
        do {
          *puVar3 = *puVar4;
          puVar3[1] = puVar4[1];
          puVar3[2] = puVar4[2];
          puVar3 = puVar3 + 3;
          puVar4 = puVar4 + 4;
        } while (puVar4 < puVar1);
      }
    }
    *(undefined1 *)(param_1 + 0x13) = uVar6;
    *(undefined1 *)(param_1 + 0x12) = 3;
    if (*(char *)(param_1 + 0x10) == '\x06') {
      *(undefined1 *)(param_1 + 0x10) = 2;
    }
  }
  else {
    if (*(char *)(param_1 + 0x12) != '\x02') {
      return;
    }
    if (*(char *)(param_1 + 0x11) == '\x10') {
      if (param_3 == 0) {
        puVar4 = param_2 + 4;
        puVar3 = param_2 + 2;
      }
      else {
        puVar4 = param_2 + 2;
      }
      uVar6 = 0x10;
      for (; puVar4 < puVar1; puVar4 = puVar4 + 4) {
        *puVar3 = *puVar4;
        puVar3[1] = puVar4[1];
        puVar3 = puVar3 + 2;
      }
    }
    else {
      if (*(char *)(param_1 + 0x11) != '\b') {
        return;
      }
      if (param_3 == 0) {
        puVar4 = param_2 + 2;
        puVar3 = param_2 + 1;
      }
      else {
        puVar4 = param_2 + 1;
      }
      uVar6 = 8;
      for (; puVar4 < puVar1; puVar4 = puVar4 + 2) {
        *puVar3 = *puVar4;
        puVar3 = puVar3 + 1;
      }
    }
    *(undefined1 *)(param_1 + 0x13) = uVar6;
    *(undefined1 *)(param_1 + 0x12) = 1;
    if (*(char *)(param_1 + 0x10) == '\x04') {
      *(undefined1 *)(param_1 + 0x10) = 0;
    }
  }
  *(long *)(param_1 + 8) = (long)puVar3 - (long)param_2;
  return;
}


