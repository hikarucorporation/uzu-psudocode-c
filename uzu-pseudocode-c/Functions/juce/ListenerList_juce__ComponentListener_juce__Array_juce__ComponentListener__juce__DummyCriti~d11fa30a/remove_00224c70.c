// Function : remove
// Namespace: juce:ListenerList_juce__ComponentListener_juce__Array_juce__ComponentListener__juce__DummyCriti~d11fa30a
// Entry    : 00224c70
// Prototype: undefined remove(ListenerList<juce::ComponentListener,juce::Array<juce::ComponentListener*,juce::DummyCriticalSection,0>> * this, long param_1)
// Body     : 00224c70 - 00224d60


/* juce::ListenerList<juce::ComponentListener, juce::Array<juce::ComponentListener*,
   juce::DummyCriticalSection, 0> >::remove(juce::ComponentListener*) */

void __thiscall
juce::
ListenerList<juce::ComponentListener,juce::Array<juce::ComponentListener*,juce::DummyCriticalSection,0>>
::remove(ListenerList<juce::ComponentListener,juce::Array<juce::ComponentListener*,juce::DummyCriticalSection,0>>
         *this,long param_1)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  undefined8 *puVar4;
  int *piVar5;
  void *pvVar6;
  undefined8 *puVar7;
  int iVar8;
  uint uVar9;
  ulong uVar10;
  uint uVar11;
  int iVar12;
  
  if (*(int *)(this + 0x20) == 2) {
    plVar2 = *(long **)this;
    uVar1 = *(uint *)((long)plVar2 + 0xc);
    if (0 < (int)uVar1) {
      lVar3 = *plVar2;
      uVar10 = 0;
      do {
        if (*(long *)(lVar3 + uVar10 * 8) == param_1) {
          uVar9 = (uint)uVar10;
          memmove((void *)(lVar3 + uVar10 * 8),(void *)(lVar3 + uVar10 * 8 + 8),
                  (long)(int)(~uVar9 + uVar1) << 3);
          iVar12 = *(int *)((long)plVar2 + 0xc);
          uVar1 = iVar12 - 1;
          *(uint *)((long)plVar2 + 0xc) = uVar1;
          iVar8 = iVar12 * 2 + -2;
          iVar12 = 0;
          if (-1 < iVar8) {
            iVar12 = iVar8;
          }
          if (iVar12 < (int)plVar2[1]) {
            uVar11 = 8;
            if (8 < (int)uVar1) {
              uVar11 = uVar1;
            }
            if ((int)uVar11 < (int)plVar2[1]) {
              pvVar6 = realloc((void *)*plVar2,(ulong)uVar11 << 3);
              *plVar2 = (long)pvVar6;
              *(uint *)(plVar2 + 1) = uVar11;
            }
          }
          if ((int)uVar9 < 0) {
            return;
          }
          puVar4 = (undefined8 *)(*(undefined8 **)(this + 0x10))[1];
          for (puVar7 = (undefined8 *)**(undefined8 **)(this + 0x10); puVar7 != puVar4;
              puVar7 = puVar7 + 1) {
            piVar5 = (int *)*puVar7;
            if ((int)uVar9 < piVar5[1]) {
              piVar5[1] = piVar5[1] + -1;
            }
            if ((int)uVar9 <= *piVar5) {
              *piVar5 = *piVar5 + -1;
            }
          }
          return;
        }
        uVar10 = uVar10 + 1;
      } while (uVar1 != uVar10);
    }
  }
  return;
}


