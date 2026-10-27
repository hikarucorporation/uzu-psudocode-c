// Function : jpeg_gen_optimal_table
// Namespace: juce:jpeglibNamespace
// Entry    : 003658c0
// Prototype: undefined jpeg_gen_optimal_table(long * param_1, undefined8 * param_2, long param_3)
// Body     : 003658c0 - 00365c6c


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::jpeglibNamespace::jpeg_gen_optimal_table(juce::jpeglibNamespace::jpeg_compress_struct*,
   juce::jpeglibNamespace::JHUFF_TBL*, long*) */

void __cdecl
juce::jpeglibNamespace::jpeg_gen_optimal_table(long *param_1,undefined8 *param_2,long param_3)

{
  ulong uVar1;
  char *pcVar2;
  long *plVar3;
  undefined8 *puVar4;
  bool bVar5;
  long lVar6;
  uint uVar7;
  ulong uVar8;
  char *pcVar9;
  int iVar10;
  ulong uVar11;
  uint uVar12;
  long lVar13;
  undefined1 *puVar14;
  ulong uVar15;
  long lVar16;
  char cVar17;
  undefined8 uStack_890;
  undefined8 local_888;
  undefined8 uStack_880;
  char local_878 [24];
  undefined8 *local_860;
  long local_858;
  ulong local_850;
  uint local_848 [260];
  int local_438 [258];
  
  local_860 = param_2;
  *(undefined8 *)(param_3 + 0x800) = 1;
  uVar7 = 0x100;
  uVar8 = 0;
  do {
    if (*(long *)(param_3 + uVar8 * 8) != 0) {
      if (0xff < uVar8) break;
      uVar11 = (ulong)uVar7;
      uVar7 = (uint)uVar8;
      local_848[uVar11] = uVar7;
    }
    uVar8 = uVar8 + 1;
  } while( true );
  local_848[uVar7] = 0xffffffff;
  if (-1 < (int)local_848[0x100]) {
    puVar14 = (undefined1 *)((long)param_2 + 0x11);
    do {
      uVar8 = (ulong)local_848[0x100];
      uVar7 = local_848[uVar8];
      if ((int)uVar7 < 0) {
        iVar10 = 0x100;
        uVar12 = local_848[0x100];
      }
      else {
        lVar13 = *(long *)(param_3 + uVar8 * 8);
        uVar11 = 0x100;
        uVar15 = uVar8;
        do {
          lVar16 = *(long *)(param_3 + (ulong)uVar7 * 8);
          iVar10 = (int)uVar11;
          uVar12 = (uint)uVar15;
          if (lVar13 < lVar16) {
            uVar15 = (ulong)uVar7;
            iVar10 = (int)uVar8;
            lVar13 = lVar16;
            uVar11 = uVar8;
            uVar12 = uVar7;
          }
          uVar8 = (ulong)uVar7;
          uVar7 = local_848[uVar7];
        } while (-1 < (int)uVar7);
      }
      local_848[iVar10] = local_848[(int)uVar12];
      *puVar14 = (char)uVar12;
      puVar14 = puVar14 + 1;
    } while (-1 < (int)local_848[0x100]);
  }
  local_878[0] = '\0';
  local_878[1] = '\0';
  local_878[2] = '\0';
  local_878[3] = '\0';
  local_878[4] = '\0';
  local_878[5] = '\0';
  local_878[6] = '\0';
  local_878[7] = '\0';
  local_878[8] = '\0';
  local_878[9] = '\0';
  local_878[10] = '\0';
  local_878[0xb] = '\0';
  local_878[0xc] = '\0';
  local_878[0xd] = '\0';
  local_878[0xe] = '\0';
  local_878[0xf] = '\0';
  local_888 = 0;
  uStack_880 = 0;
  local_878[0x10] = 0;
  uVar11 = 0;
  uStack_890 = 0x3659b6;
  memset(local_438,0,0x404);
  uStack_890 = 0x3659ca;
  memset(local_848,0xff,0x404);
  uVar8 = 0xffffffff;
  lVar13 = 1000000000;
  while( true ) {
    do {
      lVar16 = *(long *)(param_3 + uVar11 * 8);
      if (lVar16 <= lVar13 && lVar16 != 0) {
        uVar8 = uVar11 & 0xffffffff;
        lVar13 = lVar16;
      }
      uVar11 = uVar11 + 1;
    } while (uVar11 != 0x101);
    uVar15 = 0xffffffff;
    lVar13 = 1000000000;
    uVar11 = 0;
    while( true ) {
      lVar16 = *(long *)(param_3 + uVar11 * 8);
      if (uVar8 != uVar11 && (lVar16 <= lVar13 && lVar16 != 0)) {
        uVar15 = uVar11 & 0xffffffff;
        lVar13 = lVar16;
      }
      uVar1 = uVar11 + 1;
      if (uVar1 == 0x101) break;
      lVar16 = *(long *)(param_3 + 8 + uVar11 * 8);
      if ((uVar1 != uVar8 && lVar16 != 0) && lVar16 <= lVar13) {
        uVar15 = uVar1 & 0xffffffff;
        lVar13 = lVar16;
      }
      uVar11 = uVar11 + 2;
    }
    uVar7 = (uint)uVar15;
    if ((int)uVar7 < 0) break;
    uVar8 = (ulong)(int)uVar8;
    plVar3 = (long *)(param_3 + uVar8 * 8);
    *plVar3 = *plVar3 + *(long *)(param_3 + uVar15 * 8);
    *(undefined8 *)(param_3 + uVar15 * 8) = 0;
    local_438[uVar8] = local_438[uVar8] + 1;
    uVar12 = local_848[uVar8];
    while (-1 < (int)uVar12) {
      uVar8 = (ulong)uVar12;
      local_438[uVar8] = local_438[uVar8] + 1;
      uVar12 = local_848[uVar8];
    }
    local_438[uVar15] = local_438[uVar15] + 1;
    local_848[uVar8] = uVar7;
    uVar7 = local_848[(int)uVar7];
    uVar8 = 0xffffffff;
    lVar13 = 1000000000;
    uVar11 = 0;
    if (-1 < (int)uVar7) {
      do {
        local_438[uVar7] = local_438[uVar7] + 1;
        uVar7 = local_848[uVar7];
      } while (-1 < (int)uVar7);
      uVar11 = 0;
    }
  }
  lVar13 = 0;
  do {
    iVar10 = local_438[lVar13];
    if ((long)iVar10 != 0) {
      if (0x20 < iVar10) {
        puVar4 = (undefined8 *)*param_1;
        *(undefined4 *)(puVar4 + 5) = 0x28;
        uStack_890 = 0x365b43;
        (*(code *)*puVar4)(param_1);
      }
      local_878[(long)iVar10 + -0x10] = local_878[(long)iVar10 + -0x10] + '\x01';
    }
    lVar13 = lVar13 + 1;
  } while (lVar13 != 0x101);
  local_858 = 0x1e;
  uVar8 = 0x20;
  do {
    while (cVar17 = local_878[uVar8 - 0x10], cVar17 == '\0') {
      local_858 = local_858 + -1;
      bVar5 = uVar8 < 0x12;
      uVar8 = uVar8 - 1;
      if (bVar5) goto LAB_00365c27;
    }
    local_850 = uVar8 - 1;
    do {
      lVar13 = uVar8 - 2;
      if (local_878[uVar8 - 0x12] == '\0') {
        lVar16 = local_858;
        do {
          lVar13 = lVar16 + -1;
          if (lVar16 == 0) {
            puVar4 = (undefined8 *)*param_1;
            *(undefined4 *)(puVar4 + 5) = 0x28;
            uStack_890 = 0x365c00;
            (*(code *)*puVar4)(param_1);
          }
          lVar6 = lVar16 + -0x11;
          lVar16 = lVar13;
        } while (local_878[lVar6] == '\0');
      }
      local_878[uVar8 - 0x10] = cVar17 + -2;
      local_878[uVar8 - 0x11] = local_878[uVar8 - 0x11] + '\x01';
      local_878[(long)((int)lVar13 + 1) + -0x10] =
           local_878[(long)((int)lVar13 + 1) + -0x10] + '\x02';
      local_878[lVar13 + -0x10] = local_878[lVar13 + -0x10] + -1;
      cVar17 = local_878[uVar8 - 0x10];
    } while (cVar17 != '\0');
    local_858 = local_858 + -1;
    bVar5 = 0x11 < uVar8;
    uVar8 = local_850;
  } while (bVar5);
LAB_00365c27:
  pcVar9 = local_878 + 1;
  do {
    pcVar2 = pcVar9 + -1;
    pcVar9 = pcVar9 + -1;
  } while (*pcVar2 == '\0');
  *pcVar9 = *pcVar2 + -1;
  *(char *)(local_860 + 2) = local_878[0];
  *local_860 = local_888;
  local_860[1] = uStack_880;
  *(undefined1 *)((long)local_860 + 0x111) = 0;
  return;
}


