// Function : setEditorScaleFactor
// Namespace: juce:JuceVST3EditController:JuceVST3Editor:ContentWrapperComponent
// Entry    : 001b8450
// Prototype: undefined setEditorScaleFactor(undefined4 param_1, ContentWrapperComponent * this)
// Body     : 001b8450 - 001b851f


/* juce::JuceVST3EditController::JuceVST3Editor::ContentWrapperComponent::setEditorScaleFactor(float)
    */

void __thiscall
juce::JuceVST3EditController::JuceVST3Editor::ContentWrapperComponent::setEditorScaleFactor
          (undefined4 param_1,ContentWrapperComponent *this)

{
  ContentWrapperComponent CVar1;
  Component *this_00;
  undefined8 extraout_RDX;
  undefined1 auVar2 [16];
  
  if (*(ComponentHelpers **)(this + 0xf0) == (ComponentHelpers *)0x0) {
    return;
  }
  Component::getLocalArea
            (*(ComponentHelpers **)(this + 0xf0),(ComponentHelpers *)this,
             *(undefined8 *)(this + 0x108),*(undefined8 *)(this + 0x110));
  CVar1 = this[0x118];
  this[0x118] = (ContentWrapperComponent)0x1;
                    /* try { // try from 001b84a2 to 001b84be has its CatchHandler @ 001b8520 */
  (**(code **)(**(long **)(this + 0xf0) + 0x1b8))(param_1);
  Component::setBounds(*(Component **)(this + 0xf0),0,extraout_RDX);
  this[0x118] = CVar1;
  this_00 = *(Component **)(this + 0xf0);
  if (this_00 == (Component *)0x0) {
    auVar2 = ZEXT816(0);
  }
  else {
    auVar2 = Component::getLocalBounds(this_00);
    auVar2 = Component::getLocalArea
                       ((ComponentHelpers *)this,(ComponentHelpers *)this_00,auVar2._0_8_,
                        auVar2._8_8_);
  }
  *(undefined1 (*) [16])(this + 0x108) = auVar2;
  resizeHostWindow(this);
  Component::repaint((Component *)this);
  return;
}


