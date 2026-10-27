// Function : joinIntoString
// Namespace: juce:StringArray
// Entry    : 0049bf50
// Prototype: undefined joinIntoString(long * param_1, long * param_2, char * param_3)
// Body     : 0049bf50 - 0049c17d


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::StringArray::joinIntoString(juce::StringRef, int, int) const */

void __cdecl juce::StringArray::joinIntoString(long *param_1,long *param_2,char *param_3)

{
  char cVar1;
  uint uVar2;
  int *piVar3;
  size_t sVar4;
  size_t sVar5;
  undefined4 *puVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  
  uVar2 = *(uint *)((long)param_2 + 0xc);
  if ((long)(int)uVar2 < 1) {
    *param_1 = (long)&DAT_0061ac58;
  }
  else {
    uVar11 = (ulong)uVar2;
    if (uVar2 == 1) {
      lVar10 = *(long *)*param_2;
      *param_1 = lVar10;
      piVar3 = (int *)(lVar10 + -0x10);
      if (piVar3 != &emptyString) {
        LOCK();
        *piVar3 = *piVar3 + 1;
        UNLOCK();
      }
    }
    else {
      sVar4 = strlen(param_3);
      lVar12 = (uVar2 - 1) * sVar4;
      lVar10 = *param_2;
      uVar13 = 0;
      do {
        sVar5 = strlen(*(char **)(lVar10 + uVar13 * 8));
        lVar12 = lVar12 + sVar5;
        uVar13 = uVar13 + 1;
      } while (uVar11 != uVar13);
      uVar13 = lVar12 + 4U & 0xfffffffffffffffc;
      puVar6 = operator_new__(uVar13 + 0x17);
      LOCK();
      *puVar6 = 0;
      UNLOCK();
      *(ulong *)(puVar6 + 2) = uVar13;
      *(undefined1 *)(puVar6 + 4) = 0;
      pcVar7 = (char *)(puVar6 + 4);
      pcVar8 = pcVar7;
      if (sVar4 == 0) {
        if ((uVar2 & 1) == 0) {
          uVar13 = 0;
        }
        else {
          pcVar9 = *(char **)*param_2;
          uVar13 = 1;
          if (*pcVar9 != '\0') {
            *pcVar7 = *pcVar9;
            do {
              pcVar9 = pcVar9 + 1;
              cVar1 = *pcVar9;
              pcVar8[1] = cVar1;
              pcVar8 = pcVar8 + 1;
            } while (cVar1 != '\0');
          }
        }
        do {
          lVar10 = *param_2;
          pcVar9 = *(char **)(lVar10 + uVar13 * 8);
          if (*pcVar9 != '\0') {
            *pcVar8 = *pcVar9;
            do {
              pcVar9 = pcVar9 + 1;
              cVar1 = *pcVar9;
              pcVar8[1] = cVar1;
              pcVar8 = pcVar8 + 1;
            } while (cVar1 != '\0');
            lVar10 = *param_2;
          }
          pcVar9 = *(char **)(lVar10 + 8 + uVar13 * 8);
          if (*pcVar9 != '\0') {
            *pcVar8 = *pcVar9;
            do {
              pcVar9 = pcVar9 + 1;
              cVar1 = *pcVar9;
              pcVar8[1] = cVar1;
              pcVar8 = pcVar8 + 1;
            } while (cVar1 != '\0');
          }
          uVar13 = uVar13 + 2;
        } while (uVar13 != uVar11);
      }
      else {
        uVar13 = 0;
        do {
          pcVar9 = *(char **)(*param_2 + uVar13 * 8);
          if (*pcVar9 != '\0') {
            *pcVar8 = *pcVar9;
            do {
              pcVar9 = pcVar9 + 1;
              cVar1 = *pcVar9;
              pcVar8[1] = cVar1;
              pcVar8 = pcVar8 + 1;
            } while (cVar1 != '\0');
          }
          uVar13 = uVar13 + 1;
          if ((long)uVar13 < (long)(int)uVar2) {
            cVar1 = *param_3;
            *pcVar8 = cVar1;
            pcVar9 = param_3;
            while (cVar1 != '\0') {
              pcVar9 = pcVar9 + 1;
              cVar1 = *pcVar9;
              pcVar8[1] = cVar1;
              pcVar8 = pcVar8 + 1;
            }
          }
        } while (uVar13 != uVar11);
      }
      *pcVar8 = '\0';
      *param_1 = (long)pcVar7;
    }
  }
  return;
}


