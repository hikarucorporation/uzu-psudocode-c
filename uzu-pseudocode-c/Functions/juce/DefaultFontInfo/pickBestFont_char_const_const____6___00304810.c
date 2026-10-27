// Function : pickBestFont<char_const*const(&)[6]>
// Namespace: juce:DefaultFontInfo
// Entry    : 00304810
// Prototype: String pickBestFont<char_const*const(&)[6]>(DefaultFontInfo * this, long * param_1, undefined8 * param_2)
// Body     : 00304810 - 00304ee6


/* juce::String juce::DefaultFontInfo::pickBestFont<char const* const (&) [6]>(juce::StringArray
   const&, char const* const (&) [6]) */

void __thiscall
juce::DefaultFontInfo::pickBestFont<char_const*const(&)[6]>
          (DefaultFontInfo *this,long *param_1,undefined8 *param_2)

{
  String *pSVar1;
  char *pcVar2;
  uint uVar3;
  uint uVar4;
  byte *pbVar5;
  undefined8 uVar6;
  byte *pbVar7;
  undefined4 *puVar8;
  byte *pbVar9;
  int iVar10;
  byte bVar11;
  String *this_00;
  ulong uVar12;
  long lVar13;
  long lVar14;
  int *piVar15;
  undefined8 *puVar16;
  undefined8 *local_58;
  undefined8 *local_50;
  undefined8 *local_48;
  undefined8 *local_38;
  
  uVar4 = *(uint *)((long)param_1 + 0xc);
  if ((int)uVar4 < 1) {
LAB_003048cf:
    uVar4 = *(uint *)((long)param_1 + 0xc);
    if (0 < (int)uVar4) {
      pbVar5 = (byte *)param_2[3];
      uVar12 = 0;
      do {
        uVar3 = CharacterFunctions::compareIgnoreCase<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                          (*(byte **)(*param_1 + uVar12 * 8),pbVar5);
        if (uVar3 == 0) {
          puVar16 = param_2 + 3;
          if ((uVar12 & 0x80000000) == 0) goto LAB_00304e0a;
          uVar4 = *(uint *)((long)param_1 + 0xc);
          goto joined_r0x0030495c;
        }
        uVar12 = uVar12 + 1;
      } while (uVar4 != uVar12);
      uVar4 = *(uint *)((long)param_1 + 0xc);
joined_r0x0030495c:
      if ((int)uVar4 < 1) goto LAB_00304a41;
LAB_0030495e:
      pbVar5 = (byte *)param_2[4];
      uVar12 = 0;
      do {
        uVar3 = CharacterFunctions::compareIgnoreCase<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                          (*(byte **)(*param_1 + uVar12 * 8),pbVar5);
        if (uVar3 == 0) {
          puVar16 = param_2 + 4;
          if ((uVar12 & 0x80000000) == 0) goto LAB_00304e0a;
          break;
        }
        uVar12 = uVar12 + 1;
      } while (uVar4 != uVar12);
    }
    uVar4 = *(uint *)((long)param_1 + 0xc);
    if (0 < (int)uVar4) {
      pbVar5 = (byte *)param_2[5];
      uVar12 = 0;
      do {
        uVar3 = CharacterFunctions::compareIgnoreCase<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                          (*(byte **)(*param_1 + uVar12 * 8),pbVar5);
        if (uVar3 == 0) {
          puVar16 = param_2 + 5;
          if ((uVar12 & 0x80000000) == 0) goto LAB_00304e0a;
          break;
        }
        uVar12 = uVar12 + 1;
      } while (uVar4 != uVar12);
      goto LAB_00304a41;
    }
  }
  else {
    pbVar5 = (byte *)*param_2;
    uVar12 = 0;
    do {
      uVar3 = CharacterFunctions::compareIgnoreCase<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                        (*(byte **)(*param_1 + uVar12 * 8),pbVar5);
      if (uVar3 == 0) {
        puVar16 = param_2;
        if ((uVar12 & 0x80000000) == 0) goto LAB_00304e0a;
        break;
      }
      uVar12 = uVar12 + 1;
    } while (uVar4 != uVar12);
    uVar4 = *(uint *)((long)param_1 + 0xc);
    if ((int)uVar4 < 1) goto LAB_003048cf;
    pbVar5 = (byte *)param_2[1];
    uVar12 = 0;
    do {
      uVar3 = CharacterFunctions::compareIgnoreCase<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                        (*(byte **)(*param_1 + uVar12 * 8),pbVar5);
      if (uVar3 == 0) {
        if ((uVar12 & 0x80000000) == 0) {
          puVar16 = param_2 + 1;
          goto LAB_00304e0a;
        }
        break;
      }
      uVar12 = uVar12 + 1;
    } while (uVar4 != uVar12);
    uVar4 = *(uint *)((long)param_1 + 0xc);
    if (0 < (int)uVar4) {
      pbVar5 = (byte *)param_2[2];
      uVar12 = 0;
      do {
        uVar3 = CharacterFunctions::compareIgnoreCase<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                          (*(byte **)(*param_1 + uVar12 * 8),pbVar5);
        if (uVar3 == 0) {
          puVar16 = param_2 + 2;
          if ((uVar12 & 0x80000000) == 0) goto LAB_00304e0a;
          break;
        }
        uVar12 = uVar12 + 1;
      } while (uVar4 != uVar12);
      goto LAB_003048cf;
    }
    uVar4 = *(uint *)((long)param_1 + 0xc);
    if (0 < (int)uVar4) goto LAB_0030495e;
LAB_00304a41:
    uVar4 = *(uint *)((long)param_1 + 0xc);
  }
  local_38 = param_2 + 1;
  local_48 = param_2 + 2;
  local_50 = param_2 + 3;
  local_58 = param_2 + 4;
  if (uVar4 != 0) {
    this_00 = (String *)*param_1;
    pSVar1 = this_00 + (long)(int)uVar4 * 8;
LAB_00304a60:
    iVar10 = 0;
    pbVar5 = (byte *)*param_2;
    do {
      bVar11 = *pbVar5;
      if ((char)bVar11 < '\0') {
        do {
          pbVar7 = pbVar5 + 1;
          pbVar5 = pbVar5 + 1;
        } while ((*pbVar7 & 0xc0) == 0x80);
      }
      else {
        pbVar5 = pbVar5 + 1;
        if (bVar11 == 0) goto LAB_00304ab0;
      }
      iVar10 = iVar10 + 1;
    } while( true );
  }
  goto LAB_00304da0;
LAB_00304e0a:
  pbVar5 = (byte *)*puVar16;
  pbVar7 = &DAT_0061ac58;
  if ((pbVar5 != (byte *)0x0) && (bVar11 = *pbVar5, bVar11 != 0)) {
    lVar13 = 0;
    pbVar7 = pbVar5;
    do {
      pbVar7 = pbVar7 + 1;
      lVar14 = lVar13 + (ulong)(bVar11 >> 7);
      lVar13 = lVar14 + 1;
      bVar11 = *pbVar7;
    } while (bVar11 != 0);
    uVar12 = lVar14 + 5U & 0xfffffffffffffffc;
    puVar8 = operator_new__(uVar12 + 0x17);
    LOCK();
    *puVar8 = 0;
    UNLOCK();
    *(ulong *)(puVar8 + 2) = uVar12;
    pbVar7 = (byte *)(puVar8 + 4);
    bVar11 = *pbVar5;
    pbVar9 = pbVar7;
    if (bVar11 != 0) {
      do {
        pbVar5 = pbVar5 + 1;
        if ((char)bVar11 < '\0') {
          *pbVar9 = bVar11 >> 6 | 0xc0;
          pbVar9[1] = bVar11 & 0x3f | 0x80;
          pbVar9 = pbVar9 + 1;
        }
        else {
          *pbVar9 = bVar11;
        }
        pbVar9 = pbVar9 + 1;
        bVar11 = *pbVar5;
      } while (bVar11 != 0);
    }
    *pbVar9 = 0;
  }
  goto LAB_00304eb2;
LAB_00304ab0:
  uVar4 = CharacterFunctions::compareIgnoreCaseUpTo<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                    (*(byte **)this_00,(byte *)*param_2,iVar10);
  if (uVar4 == 0) goto LAB_00304dac;
  this_00 = this_00 + 8;
  if (this_00 == pSVar1) goto code_r0x00304ac9;
  goto LAB_00304a60;
code_r0x00304ac9:
  if ((long)*(int *)((long)param_1 + 0xc) != 0) {
    this_00 = (String *)*param_1;
    pSVar1 = this_00 + (long)*(int *)((long)param_1 + 0xc) * 8;
LAB_00304af0:
    iVar10 = 0;
    pbVar5 = (byte *)*local_38;
    do {
      bVar11 = *pbVar5;
      if ((char)bVar11 < '\0') {
        do {
          pbVar7 = pbVar5 + 1;
          pbVar5 = pbVar5 + 1;
        } while ((*pbVar7 & 0xc0) == 0x80);
      }
      else {
        pbVar5 = pbVar5 + 1;
        if (bVar11 == 0) goto LAB_00304b40;
      }
      iVar10 = iVar10 + 1;
    } while( true );
  }
  goto LAB_00304da0;
LAB_00304b40:
  uVar4 = CharacterFunctions::compareIgnoreCaseUpTo<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                    (*(byte **)this_00,(byte *)*local_38,iVar10);
  if (uVar4 == 0) goto LAB_00304dac;
  this_00 = this_00 + 8;
  if (this_00 == pSVar1) goto code_r0x00304b59;
  goto LAB_00304af0;
code_r0x00304b59:
  if ((long)*(int *)((long)param_1 + 0xc) != 0) {
    this_00 = (String *)*param_1;
    lVar13 = (long)*(int *)((long)param_1 + 0xc) << 3;
    do {
      uVar6 = juce::String::startsWithIgnoreCase(this_00,(byte *)*local_48);
      if ((char)uVar6 != '\0') goto LAB_00304dac;
      this_00 = this_00 + 8;
      lVar13 = lVar13 + -8;
    } while (lVar13 != 0);
    if ((long)*(int *)((long)param_1 + 0xc) != 0) {
      this_00 = (String *)*param_1;
      lVar13 = (long)*(int *)((long)param_1 + 0xc) << 3;
      do {
        uVar6 = juce::String::startsWithIgnoreCase(this_00,(byte *)*local_50);
        if ((char)uVar6 != '\0') goto LAB_00304dac;
        this_00 = this_00 + 8;
        lVar13 = lVar13 + -8;
      } while (lVar13 != 0);
      if ((long)*(int *)((long)param_1 + 0xc) != 0) {
        this_00 = (String *)*param_1;
        lVar13 = (long)*(int *)((long)param_1 + 0xc) << 3;
        do {
          uVar6 = juce::String::startsWithIgnoreCase(this_00,(byte *)*local_58);
          if ((char)uVar6 != '\0') goto LAB_00304dac;
          this_00 = this_00 + 8;
          lVar13 = lVar13 + -8;
        } while (lVar13 != 0);
        if ((long)*(int *)((long)param_1 + 0xc) != 0) {
          this_00 = (String *)*param_1;
          lVar13 = (long)*(int *)((long)param_1 + 0xc) << 3;
          do {
            uVar6 = juce::String::startsWithIgnoreCase(this_00,(byte *)param_2[5]);
            if ((char)uVar6 != '\0') goto LAB_00304dac;
            this_00 = this_00 + 8;
            lVar13 = lVar13 + -8;
          } while (lVar13 != 0);
          if ((long)*(int *)((long)param_1 + 0xc) != 0) {
            this_00 = (String *)*param_1;
            lVar13 = (long)*(int *)((long)param_1 + 0xc) << 3;
            do {
              uVar6 = juce::String::containsIgnoreCase(this_00,(byte *)*param_2);
              if ((char)uVar6 != '\0') goto LAB_00304dac;
              this_00 = this_00 + 8;
              lVar13 = lVar13 + -8;
            } while (lVar13 != 0);
            if ((long)*(int *)((long)param_1 + 0xc) != 0) {
              this_00 = (String *)*param_1;
              lVar13 = (long)*(int *)((long)param_1 + 0xc) << 3;
              do {
                uVar6 = juce::String::containsIgnoreCase(this_00,(byte *)*local_38);
                if ((char)uVar6 != '\0') goto LAB_00304dac;
                this_00 = this_00 + 8;
                lVar13 = lVar13 + -8;
              } while (lVar13 != 0);
              if ((long)*(int *)((long)param_1 + 0xc) != 0) {
                this_00 = (String *)*param_1;
                lVar13 = (long)*(int *)((long)param_1 + 0xc) << 3;
                do {
                  uVar6 = juce::String::containsIgnoreCase(this_00,(byte *)*local_48);
                  if ((char)uVar6 != '\0') goto LAB_00304dac;
                  this_00 = this_00 + 8;
                  lVar13 = lVar13 + -8;
                } while (lVar13 != 0);
                if ((long)*(int *)((long)param_1 + 0xc) != 0) {
                  this_00 = (String *)*param_1;
                  lVar13 = (long)*(int *)((long)param_1 + 0xc) << 3;
                  do {
                    uVar6 = juce::String::containsIgnoreCase(this_00,(byte *)*local_50);
                    if ((char)uVar6 != '\0') goto LAB_00304dac;
                    this_00 = this_00 + 8;
                    lVar13 = lVar13 + -8;
                  } while (lVar13 != 0);
                  if ((long)*(int *)((long)param_1 + 0xc) != 0) {
                    this_00 = (String *)*param_1;
                    lVar13 = (long)*(int *)((long)param_1 + 0xc) << 3;
                    do {
                      uVar6 = juce::String::containsIgnoreCase(this_00,(byte *)*local_58);
                      if ((char)uVar6 != '\0') goto LAB_00304dac;
                      this_00 = this_00 + 8;
                      lVar13 = lVar13 + -8;
                    } while (lVar13 != 0);
                    if ((long)*(int *)((long)param_1 + 0xc) != 0) {
                      this_00 = (String *)*param_1;
                      lVar13 = (long)*(int *)((long)param_1 + 0xc) << 3;
                      do {
                        uVar6 = juce::String::containsIgnoreCase(this_00,(byte *)param_2[5]);
                        if ((char)uVar6 != '\0') {
LAB_00304dac:
                          lVar13 = *(long *)this_00;
                          *(long *)this = lVar13;
                          piVar15 = (int *)(lVar13 + -0x10);
                          if (piVar15 == &emptyString) {
                            return;
                          }
                          LOCK();
                          *piVar15 = *piVar15 + 1;
                          UNLOCK();
                          return;
                        }
                        this_00 = this_00 + 8;
                        lVar13 = lVar13 + -8;
                      } while (lVar13 != 0);
                      if ((long)*(int *)((long)param_1 + 0xc) != 0) {
                        lVar13 = 0;
                        do {
                          pcVar2 = *(char **)(*param_1 + lVar13);
                          if (*pcVar2 != '\0') {
                            *(char **)this = pcVar2;
                            piVar15 = (int *)(pcVar2 + -0x10);
                            if (piVar15 == &emptyString) {
                              return;
                            }
                            LOCK();
                            *piVar15 = *piVar15 + 1;
                            UNLOCK();
                            return;
                          }
                          lVar13 = lVar13 + 8;
                        } while ((long)*(int *)((long)param_1 + 0xc) * 8 != lVar13);
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_00304da0:
  pbVar7 = &DAT_0061ac58;
LAB_00304eb2:
  *(byte **)this = pbVar7;
  return;
}


