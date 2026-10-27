// Function : removeParameterListener
// Namespace: juce:AudioProcessorValueTreeState
// Entry    : 001c47e0
// Prototype: undefined removeParameterListener(AudioProcessorValueTreeState * this, byte * param_1, long param_2)
// Body     : 001c47e0 - 001c496b


/* juce::AudioProcessorValueTreeState::removeParameterListener(juce::StringRef,
   juce::AudioProcessorValueTreeState::Listener*) */

void __thiscall
juce::AudioProcessorValueTreeState::removeParameterListener
          (AudioProcessorValueTreeState *this,byte *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined8 *puVar4;
  int *piVar5;
  uint uVar6;
  void *pvVar7;
  undefined8 *puVar8;
  int iVar9;
  AudioProcessorValueTreeState *pAVar10;
  uint uVar11;
  AudioProcessorValueTreeState *pAVar12;
  ulong uVar13;
  uint uVar14;
  int iVar15;
  AudioProcessorValueTreeState *pAVar16;
  AudioProcessorValueTreeState *pAVar17;
  
  pAVar12 = *(AudioProcessorValueTreeState **)(this + 0x98);
  if (pAVar12 != (AudioProcessorValueTreeState *)0x0) {
    pAVar17 = this + 0x90;
    pAVar16 = pAVar17;
    do {
      uVar6 = CharacterFunctions::compare<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                        (*(byte **)(pAVar12 + 0x20),param_1);
      pAVar10 = pAVar12 + 0x18;
      if (-1 < (int)uVar6) {
        pAVar10 = pAVar12 + 0x10;
        pAVar16 = pAVar12;
      }
      pAVar12 = *(AudioProcessorValueTreeState **)pAVar10;
    } while (pAVar12 != (AudioProcessorValueTreeState *)0x0);
    if (pAVar16 != pAVar17) {
      uVar6 = CharacterFunctions::compare<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                        (param_1,*(byte **)(pAVar16 + 0x20));
      if ((int)uVar6 < 0) {
        pAVar16 = pAVar17;
      }
      if ((pAVar16 != pAVar17) && (lVar1 = *(long *)(pAVar16 + 0x28), lVar1 != 0)) {
        pthread_mutex_lock((pthread_mutex_t *)(lVar1 + 0x40));
        if (*(int *)(lVar1 + 0x88) == 2) {
          plVar2 = *(long **)(lVar1 + 0x68);
          uVar6 = *(uint *)((long)plVar2 + 0xc);
          if (0 < (int)uVar6) {
            lVar3 = *plVar2;
            uVar13 = 0;
            do {
              if (*(long *)(lVar3 + uVar13 * 8) == param_2) {
                uVar11 = (uint)uVar13;
                memmove((void *)(lVar3 + uVar13 * 8),(void *)(lVar3 + uVar13 * 8 + 8),
                        (long)(int)(~uVar11 + uVar6) << 3);
                iVar15 = *(int *)((long)plVar2 + 0xc);
                uVar6 = iVar15 - 1;
                *(uint *)((long)plVar2 + 0xc) = uVar6;
                iVar9 = iVar15 * 2 + -2;
                iVar15 = 0;
                if (-1 < iVar9) {
                  iVar15 = iVar9;
                }
                if (iVar15 < (int)plVar2[1]) {
                  uVar14 = 8;
                  if (8 < (int)uVar6) {
                    uVar14 = uVar6;
                  }
                  if ((int)uVar14 < (int)plVar2[1]) {
                    pvVar7 = realloc((void *)*plVar2,(ulong)uVar14 << 3);
                    *plVar2 = (long)pvVar7;
                    *(uint *)(plVar2 + 1) = uVar14;
                  }
                }
                if (-1 < (int)uVar11) {
                  puVar4 = (undefined8 *)(*(undefined8 **)(lVar1 + 0x78))[1];
                  for (puVar8 = (undefined8 *)**(undefined8 **)(lVar1 + 0x78); puVar8 != puVar4;
                      puVar8 = puVar8 + 1) {
                    piVar5 = (int *)*puVar8;
                    if ((int)uVar11 < piVar5[1]) {
                      piVar5[1] = piVar5[1] + -1;
                    }
                    if ((int)uVar11 <= *piVar5) {
                      *piVar5 = *piVar5 + -1;
                    }
                  }
                }
                break;
              }
              uVar13 = uVar13 + 1;
            } while (uVar6 != uVar13);
          }
        }
        pthread_mutex_unlock((pthread_mutex_t *)(lVar1 + 0x40));
        return;
      }
    }
  }
  return;
}


