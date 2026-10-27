// Function : resized
// Namespace: juce:JuceVST3EditController:JuceVST3Editor:ContentWrapperComponent
// Entry    : 001b7460
// Prototype: undefined resized(ContentWrapperComponent * this)
// Body     : 001b7460 - 001b74d9


/* juce::JuceVST3EditController::JuceVST3Editor::ContentWrapperComponent::resized() */

void __thiscall
juce::JuceVST3EditController::JuceVST3Editor::ContentWrapperComponent::resized
          (ContentWrapperComponent *this)

{
  ContentWrapperComponent CVar1;
  ComponentHelpers *pCVar2;
  undefined8 extraout_RDX;
  undefined1 auVar3 [16];
  
  if ((*(long *)(this + 0xf0) != 0) && (this[0x119] == (ContentWrapperComponent)0x0)) {
    auVar3 = Component::getLocalBounds((Component *)this);
    CVar1 = this[0x118];
    this[0x118] = (ContentWrapperComponent)0x1;
    pCVar2 = *(ComponentHelpers **)(this + 0xf0);
                    /* try { // try from 001b74a1 to 001b74bb has its CatchHandler @ 001b74da */
    Component::getLocalArea(pCVar2,(ComponentHelpers *)this,auVar3._0_8_,auVar3._8_8_);
    Component::setBounds((Component *)pCVar2,0,extraout_RDX);
    this[0x118] = CVar1;
    *(undefined1 (*) [16])(this + 0x108) = auVar3;
  }
  return;
}


