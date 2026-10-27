// Function : colourChanged
// Namespace: juce:ComboBox
// Entry    : 002dbda0
// Prototype: undefined colourChanged(ComboBox * this)
// Body     : 002dbda0 - 002dbe74


/* juce::ComboBox::colourChanged() */

void __thiscall juce::ComboBox::colourChanged(ComboBox *this)

{
  Component *pCVar1;
  ulong uVar2;
  
  Component::setColour
            (*(Component **)(this + 0x1b8),0x1000280,_ZN4juce7ColoursL16transparentBlackE_5);
  pCVar1 = *(Component **)(this + 0x1b8);
  uVar2 = Component::findColour((Component *)this,0x1000a00,'\0');
  Component::setColour(pCVar1,0x1000281,(int)uVar2);
  pCVar1 = *(Component **)(this + 0x1b8);
  uVar2 = Component::findColour((Component *)this,0x1000a00,'\0');
  Component::setColour(pCVar1,0x1000201,(int)uVar2);
  Component::setColour
            (*(Component **)(this + 0x1b8),0x1000200,_ZN4juce7ColoursL16transparentBlackE_5);
  pCVar1 = *(Component **)(this + 0x1b8);
  uVar2 = Component::findColour((Component *)this,0x1000202,'\0');
  Component::setColour(pCVar1,0x1000202,(int)uVar2);
  Component::setColour
            (*(Component **)(this + 0x1b8),0x1000205,_ZN4juce7ColoursL16transparentBlackE_5);
  Component::internalRepaintUnchecked((long)this,0,*(ulong *)(this + 0x40),'\x01');
  return;
}


