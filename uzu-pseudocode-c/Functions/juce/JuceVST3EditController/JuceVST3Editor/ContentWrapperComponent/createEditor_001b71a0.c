// Function : createEditor
// Namespace: juce:JuceVST3EditController:JuceVST3Editor:ContentWrapperComponent
// Entry    : 001b71a0
// Prototype: undefined createEditor(ContentWrapperComponent * this, AudioProcessor * param_1)
// Body     : 001b71a0 - 001b7328


/* juce::JuceVST3EditController::JuceVST3Editor::ContentWrapperComponent::createEditor(juce::AudioProcessor&)
    */

void __thiscall
juce::JuceVST3EditController::JuceVST3Editor::ContentWrapperComponent::createEditor
          (ContentWrapperComponent *this,AudioProcessor *param_1)

{
  ContentWrapperComponent CVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  void *pvVar5;
  Component *this_00;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  undefined1 auVar10 [16];
  
  lVar6 = AudioProcessor::createEditorIfNeeded(param_1);
  plVar2 = *(long **)(this + 0xf0);
  *(long *)(this + 0xf0) = lVar6;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
    lVar6 = *(long *)(this + 0xf0);
  }
  if (lVar6 == 0) {
    return;
  }
  lVar9 = *(long *)(this + 0xf8);
  uVar3 = *(undefined8 *)(*(long *)(lVar9 + 200) + 0x40);
  uVar4 = *(undefined8 *)(*(long *)(lVar9 + 200) + 0xe8);
  puVar7 = operator_new(0x28);
  lVar8 = lVar9 + 0x10;
  if (lVar9 == 0) {
    lVar8 = 0;
  }
  *puVar7 = &PTR__AudioProcessorEditorHostContext_00706700;
  puVar7[1] = uVar4;
  puVar7[2] = lVar6;
  puVar7[3] = uVar3;
  puVar7[4] = lVar8;
  pvVar5 = *(void **)(this + 0x100);
  *(undefined8 **)(this + 0x100) = puVar7;
  if (pvVar5 != (void *)0x0) {
    operator_delete(pvVar5);
    lVar6 = *(long *)(this + 0xf0);
    lVar9 = *(long *)(this + 0xf8);
    puVar7 = *(undefined8 **)(this + 0x100);
  }
  *(undefined8 **)(lVar6 + 0x148) = puVar7;
  (**(code **)(**(long **)(this + 0xf0) + 0x1b8))
            (*(undefined4 *)(lVar9 + 0xe0 + (ulong)(*(char *)(lVar9 + 0xe4) == '\0') * 8));
  Component::addAndMakeVisible((Component *)this,*(Component **)(this + 0xf0),0xffffffff);
  Component::setTopLeftPosition(*(Component **)(this + 0xf0),0,0);
  this_00 = *(Component **)(this + 0xf0);
  if (this_00 == (Component *)0x0) {
    auVar10 = ZEXT816(0);
  }
  else {
    auVar10 = Component::getLocalBounds(this_00);
    auVar10 = Component::getLocalArea
                        ((ComponentHelpers *)this,(ComponentHelpers *)this_00,auVar10._0_8_,
                         auVar10._8_8_);
  }
  *(undefined1 (*) [16])(this + 0x108) = auVar10;
  CVar1 = this[0x119];
  this[0x119] = (ContentWrapperComponent)0x1;
                    /* try { // try from 001b7307 to 001b7311 has its CatchHandler @ 001b7329 */
  Component::setBounds((Component *)this,auVar10._0_8_,auVar10._8_8_);
  this[0x119] = CVar1;
  resizeHostWindow(this);
  return;
}


