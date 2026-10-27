// Function : ~OwnedArray
// Namespace: juce:OwnedArray_juce__AudioProcessorParameterGroup__AudioProcessorParameterNode_juce__DummyCrit~d4b8cb74
// Entry    : 004c6e70
// Prototype: undefined ~OwnedArray(OwnedArray<juce::AudioProcessorParameterGroup::AudioProcessorParameterNode,juce::DummyCriticalSection> * this)
// Body     : 004c6e70 - 004c6fb2


/* juce::OwnedArray<juce::AudioProcessorParameterGroup::AudioProcessorParameterNode,
   juce::DummyCriticalSection>::~OwnedArray() */

void __thiscall
juce::
OwnedArray<juce::AudioProcessorParameterGroup::AudioProcessorParameterNode,juce::DummyCriticalSection>
::~OwnedArray(OwnedArray<juce::AudioProcessorParameterGroup::AudioProcessorParameterNode,juce::DummyCriticalSection>
              *this)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  undefined8 *puVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  int *piVar9;
  int iVar10;
  
  uVar2 = *(uint *)(this + 0xc);
  uVar6 = (ulong)uVar2;
  if ((int)uVar2 < 1) {
LAB_004c6f95:
    *(undefined4 *)(this + 0xc) = 0;
    free(*(void **)this);
    return;
  }
  iVar10 = -uVar2;
  uVar8 = uVar6;
  do {
    uVar7 = (ulong)((int)uVar8 - 1);
    lVar3 = *(long *)this;
    puVar4 = *(undefined8 **)(lVar3 + uVar7 * 8);
    memmove((void *)(lVar3 + uVar7 * 8),(void *)(lVar3 + uVar7 * 8 + 8),
            (long)((int)uVar6 + iVar10) << 3);
    *(int *)(this + 0xc) = *(int *)(this + 0xc) + -1;
    if (puVar4 != (undefined8 *)0x0) {
      if ((long *)puVar4[1] != (long *)0x0) {
        (**(code **)(*(long *)puVar4[1] + 8))();
      }
      puVar4[1] = 0;
      plVar5 = (long *)*puVar4;
      if (plVar5 != (long *)0x0) {
        ~OwnedArray((OwnedArray<juce::AudioProcessorParameterGroup::AudioProcessorParameterNode,juce::DummyCriticalSection>
                     *)(plVar5 + 3));
        piVar9 = (int *)(plVar5[2] + -0x10);
        if (piVar9 == &emptyString) {
LAB_004c6f19:
          lVar3 = plVar5[1];
        }
        else {
          LOCK();
          iVar1 = *piVar9;
          *piVar9 = *piVar9 + -1;
          UNLOCK();
          if (iVar1 != 0) goto LAB_004c6f19;
          operator_delete__(piVar9);
          lVar3 = plVar5[1];
        }
        piVar9 = (int *)(lVar3 + -0x10);
        if (piVar9 != &emptyString) {
          LOCK();
          iVar1 = *piVar9;
          *piVar9 = *piVar9 + -1;
          UNLOCK();
          if (iVar1 == 0) {
            operator_delete__(piVar9);
          }
        }
        piVar9 = (int *)(*plVar5 + -0x10);
        if (piVar9 != &emptyString) {
          LOCK();
          iVar1 = *piVar9;
          *piVar9 = *piVar9 + -1;
          UNLOCK();
          if (iVar1 == 0) {
            operator_delete__(piVar9);
          }
        }
        operator_delete(plVar5);
      }
      operator_delete(puVar4);
    }
    if (uVar8 < 2) goto LAB_004c6f95;
    uVar6 = (ulong)*(uint *)(this + 0xc);
    iVar10 = iVar10 + 1;
    uVar8 = uVar8 - 1;
  } while( true );
}


