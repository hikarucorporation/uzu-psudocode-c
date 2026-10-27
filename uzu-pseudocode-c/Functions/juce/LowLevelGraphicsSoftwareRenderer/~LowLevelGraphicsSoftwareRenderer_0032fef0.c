// Function : ~LowLevelGraphicsSoftwareRenderer
// Namespace: juce:LowLevelGraphicsSoftwareRenderer
// Entry    : 0032fef0
// Prototype: undefined ~LowLevelGraphicsSoftwareRenderer(LowLevelGraphicsSoftwareRenderer * this)
// Body     : 0032fef0 - 0032ff98


/* juce::LowLevelGraphicsSoftwareRenderer::~LowLevelGraphicsSoftwareRenderer() */

void __thiscall
juce::LowLevelGraphicsSoftwareRenderer::~LowLevelGraphicsSoftwareRenderer
          (LowLevelGraphicsSoftwareRenderer *this)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  int iVar7;
  
  *(undefined ***)this = &PTR__StackBasedLowLevelGraphicsContext_00711ca0;
  uVar1 = *(uint *)(this + 0x1c);
  uVar4 = (ulong)uVar1;
  if (0 < (int)uVar1) {
    iVar7 = -uVar1;
    uVar6 = uVar4;
    while( true ) {
      uVar5 = (ulong)((int)uVar6 - 1);
      lVar2 = *(long *)(this + 0x10);
      plVar3 = *(long **)(lVar2 + uVar5 * 8);
      memmove((void *)(lVar2 + uVar5 * 8),(void *)(lVar2 + uVar5 * 8 + 8),
              (long)((int)uVar4 + iVar7) << 3);
      *(int *)(this + 0x1c) = *(int *)(this + 0x1c) + -1;
      ContainerDeletePolicy<juce::RenderingHelpers::SoftwareRendererSavedState>::destroy(plVar3);
      if ((long)uVar6 < 2) break;
      uVar4 = (ulong)*(uint *)(this + 0x1c);
      iVar7 = iVar7 + 1;
      uVar6 = uVar6 - 1;
    }
  }
  *(undefined4 *)(this + 0x1c) = 0;
  free(*(void **)(this + 0x10));
  if (*(default_delete<juce::RenderingHelpers::SoftwareRendererSavedState> **)(this + 8) !=
      (default_delete<juce::RenderingHelpers::SoftwareRendererSavedState> *)0x0) {
    std::default_delete<juce::RenderingHelpers::SoftwareRendererSavedState>::operator()
              (*(default_delete<juce::RenderingHelpers::SoftwareRendererSavedState> **)(this + 8));
  }
  *(undefined8 *)(this + 8) = 0;
  return;
}


