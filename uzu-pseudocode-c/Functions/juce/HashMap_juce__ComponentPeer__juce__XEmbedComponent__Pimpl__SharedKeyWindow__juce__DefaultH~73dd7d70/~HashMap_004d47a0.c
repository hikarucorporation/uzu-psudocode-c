// Function : ~HashMap
// Namespace: juce:HashMap_juce__ComponentPeer__juce__XEmbedComponent__Pimpl__SharedKeyWindow__juce__DefaultH~73dd7d70
// Entry    : 004d47a0
// Prototype: undefined ~HashMap(HashMap<juce::ComponentPeer*,juce::XEmbedComponent::Pimpl::SharedKeyWindow*,juce::DefaultHashFunctions,juce::DummyCriticalSection> * this)
// Body     : 004d47a0 - 004d488e


/* juce::HashMap<juce::ComponentPeer*, juce::XEmbedComponent::Pimpl::SharedKeyWindow*,
   juce::DefaultHashFunctions, juce::DummyCriticalSection>::~HashMap() */

void __thiscall
juce::
HashMap<juce::ComponentPeer*,juce::XEmbedComponent::Pimpl::SharedKeyWindow*,juce::DefaultHashFunctions,juce::DummyCriticalSection>
::~HashMap(HashMap<juce::ComponentPeer*,juce::XEmbedComponent::Pimpl::SharedKeyWindow*,juce::DefaultHashFunctions,juce::DummyCriticalSection>
           *this)

{
  void *pvVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  void *pvVar5;
  ulong uVar6;
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  
  uVar4 = (ulong)*(uint *)(this + 0x14);
  if (0 < (int)*(uint *)(this + 0x14)) {
    uVar8 = uVar4;
    do {
      uVar9 = uVar8 - 1 & 0xffffffff;
      pvVar5 = *(void **)(*(long *)(this + 8) + uVar9 * 8);
      if (pvVar5 != (void *)0x0) {
        do {
          pvVar1 = *(void **)((long)pvVar5 + 0x10);
          operator_delete(pvVar5);
          pvVar5 = pvVar1;
        } while (pvVar1 != (void *)0x0);
        uVar4 = (ulong)*(uint *)(this + 0x14);
      }
      iVar3 = (int)uVar4;
      uVar6 = (ulong)iVar3;
      if ((long)uVar6 < (long)uVar8) {
        if ((int)*(uint *)(this + 0x10) <= iVar3) {
          uVar7 = iVar3 + ((iVar3 - (iVar3 + 1 >> 0x1f)) + 1 >> 1) + 9U & 0xfffffff8;
          if (*(uint *)(this + 0x10) != uVar7) {
            if ((int)uVar7 < 1) {
              free(*(void **)(this + 8));
              *(undefined8 *)(this + 8) = 0;
            }
            else {
              pvVar5 = realloc(*(void **)(this + 8),(ulong)uVar7 << 3);
              *(void **)(this + 8) = pvVar5;
            }
          }
          *(uint *)(this + 0x10) = uVar7;
          iVar3 = *(int *)(this + 0x14);
          uVar6 = (ulong)iVar3;
        }
        uVar4 = (ulong)(iVar3 + 1U);
        *(uint *)(this + 0x14) = iVar3 + 1U;
        uVar9 = uVar6;
      }
      *(undefined8 *)(*(long *)(this + 8) + uVar9 * 8) = 0;
      bVar2 = 1 < (long)uVar8;
      uVar8 = uVar8 - 1;
    } while (bVar2);
  }
  *(undefined8 *)(this + 0x14) = 0;
  free(*(void **)(this + 8));
  return;
}


