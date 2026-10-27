// Function : longest_match
// Namespace: juce:zlibNamespace
// Entry    : 004b7230
// Prototype: uint longest_match(long param_1, uint param_2)
// Body     : 004b7230 - 004b74de


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::zlibNamespace::longest_match(juce::zlibNamespace::internal_state*, unsigned int) */

uint __cdecl juce::zlibNamespace::longest_match(long param_1,uint param_2)

{
  long lVar1;
  char *pcVar2;
  char *pcVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  ulong uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  char cVar14;
  long lVar15;
  uint uVar16;
  char cVar17;
  long lVar18;
  ulong uVar19;
  
  lVar4 = *(long *)(param_1 + 0x60);
  uVar13 = *(uint *)(param_1 + 0xac);
  pcVar2 = (char *)(lVar4 + (ulong)uVar13);
  uVar10 = (ulong)(int)*(uint *)(param_1 + 0xb8);
  uVar11 = *(int *)(param_1 + 0x50) - 0x106;
  iVar6 = (int)lVar4 + uVar13 + 0x102;
  uVar16 = uVar13 - uVar11;
  if (uVar13 < uVar11) {
    uVar16 = 0;
  }
  cVar17 = pcVar2[uVar10 - 1];
  cVar14 = pcVar2[uVar10];
  uVar13 = *(uint *)(param_1 + 0xbc) >> 2;
  if (*(uint *)(param_1 + 0xb8) < *(uint *)(param_1 + 0xcc)) {
    uVar13 = *(uint *)(param_1 + 0xbc);
  }
  uVar11 = *(uint *)(param_1 + 0xb4);
  uVar12 = *(uint *)(param_1 + 0xd0);
  if (uVar11 < *(uint *)(param_1 + 0xd0)) {
    uVar12 = uVar11;
  }
  do {
    pcVar3 = (char *)(lVar4 + (ulong)param_2);
    iVar8 = (int)uVar10;
    if ((((pcVar3[iVar8] == cVar14) && (pcVar3[(long)iVar8 + -1] == cVar17)) && (*pcVar3 == *pcVar2)
        ) && (pcVar3[1] == pcVar2[1])) {
      lVar15 = (ulong)param_2 + lVar4 + 10;
      lVar18 = 0;
      do {
        iVar5 = (int)pcVar2;
        iVar7 = (int)lVar18;
        if (pcVar2[lVar18 + 3] != *(char *)(lVar15 + -7 + lVar18)) {
          iVar5 = (iVar5 + iVar7 + 3) - iVar6;
          goto joined_r0x004b73f3;
        }
        if (pcVar2[lVar18 + 4] != *(char *)(lVar15 + -6 + lVar18)) {
          iVar5 = (iVar5 + iVar7 + 4) - iVar6;
          goto joined_r0x004b73f3;
        }
        if (pcVar2[lVar18 + 5] != *(char *)(lVar15 + -5 + lVar18)) {
          iVar5 = (iVar5 + iVar7 + 5) - iVar6;
          goto joined_r0x004b73f3;
        }
        if (pcVar2[lVar18 + 6] != *(char *)(lVar15 + -4 + lVar18)) {
          iVar5 = (iVar5 + iVar7 + 6) - iVar6;
          goto joined_r0x004b73f3;
        }
        if (pcVar2[lVar18 + 7] != *(char *)(lVar15 + -3 + lVar18)) {
          iVar5 = (iVar5 + iVar7 + 7) - iVar6;
          goto joined_r0x004b73f3;
        }
        if (pcVar2[lVar18 + 8] != *(char *)(lVar15 + -2 + lVar18)) {
          iVar5 = (iVar5 + iVar7 + 8) - iVar6;
          goto joined_r0x004b73f3;
        }
        if (pcVar2[lVar18 + 9] != *(char *)(lVar15 + -1 + lVar18)) {
          iVar5 = (iVar5 + iVar7 + 9) - iVar6;
          goto joined_r0x004b73f3;
        }
        lVar1 = lVar18 + 8;
      } while ((pcVar2[lVar18 + 10] == *(char *)(lVar15 + lVar18)) &&
              (uVar19 = lVar18 + 2, lVar18 = lVar1, uVar19 < 0xfa));
      iVar5 = (iVar5 + (int)lVar1 + 2) - iVar6;
joined_r0x004b73f3:
      uVar9 = iVar5 + 0x102;
      if (iVar8 < (int)uVar9) {
        uVar10 = (ulong)uVar9;
        *(uint *)(param_1 + 0xb0) = param_2;
        if ((int)uVar12 <= (int)uVar9) {
LAB_004b74c6:
          if (uVar11 < uVar9) {
            uVar9 = uVar11;
          }
          return uVar9;
        }
        cVar17 = pcVar2[iVar5 + 0x101];
        cVar14 = pcVar2[(int)uVar9];
      }
    }
    uVar9 = (uint)uVar10;
    param_2 = (uint)*(ushort *)
                     (*(long *)(param_1 + 0x70) + (ulong)(param_2 & *(uint *)(param_1 + 0x58)) * 2);
    if ((param_2 <= uVar16) || (uVar13 = uVar13 - 1, uVar13 == 0)) goto LAB_004b74c6;
  } while( true );
}


