// Function : undo
// Namespace: juce:ValueTree:SharedObject:SetPropertyAction
// Entry    : 004c4060
// Prototype: undefined8 undo(SetPropertyAction * this)
// Body     : 004c4060 - 004c413c


/* juce::ValueTree::SharedObject::SetPropertyAction::undo() */

undefined8 __thiscall
juce::ValueTree::SharedObject::SetPropertyAction::undo(SetPropertyAction *this)

{
  SetPropertyAction *pSVar1;
  ulong uVar2;
  long lVar3;
  long local_48 [5];
  undefined4 local_20;
  
  pSVar1 = this + 0x10;
  lVar3 = *(long *)(this + 8);
  local_48[0] = lVar3;
  if (((byte)this[0x38] & 1) == 0) {
    uVar2 = NamedValueSet::set((NamedValueSet *)(lVar3 + 0x18),(long *)pSVar1,(long *)(this + 0x28))
    ;
    if ((char)uVar2 == '\0') goto LAB_004c4131;
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
    local_48[3] = 0;
    local_48[4] = 0;
    local_48[1] = 0;
    local_48[2] = 0;
    local_20 = 0;
    do {
                    /* try { // try from 004c40c0 to 004c40cf has its CatchHandler @ 004c413f */
      callListeners<juce::ValueTree::SharedObject::sendPropertyChangeMessage(juce::Identifier_const&,juce::ValueTree::Listener*)::_lambda(juce::ValueTree::Listener&)_1_>
                (lVar3,(long *)0x0,local_48,pSVar1);
      lVar3 = *(long *)(lVar3 + 0x48);
    } while (lVar3 != 0);
  }
  else {
    uVar2 = NamedValueSet::remove((NamedValueSet *)(lVar3 + 0x18),*(long *)pSVar1);
    if ((char)uVar2 == '\0') goto LAB_004c4131;
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
    local_48[3] = 0;
    local_48[4] = 0;
    local_48[1] = 0;
    local_48[2] = 0;
    local_20 = 0;
    do {
                    /* try { // try from 004c4110 to 004c411f has its CatchHandler @ 004c413d */
      callListeners<juce::ValueTree::SharedObject::sendPropertyChangeMessage(juce::Identifier_const&,juce::ValueTree::Listener*)::_lambda(juce::ValueTree::Listener&)_1_>
                (lVar3,(long *)0x0,local_48,pSVar1);
      lVar3 = *(long *)(lVar3 + 0x48);
    } while (lVar3 != 0);
  }
  uVar2 = ~ValueTree((ValueTree *)local_48);
LAB_004c4131:
  return CONCAT71((int7)(uVar2 >> 8),1);
}


