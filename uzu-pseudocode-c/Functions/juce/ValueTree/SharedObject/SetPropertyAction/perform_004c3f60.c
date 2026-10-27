// Function : perform
// Namespace: juce:ValueTree:SharedObject:SetPropertyAction
// Entry    : 004c3f60
// Prototype: undefined8 perform(SetPropertyAction * this)
// Body     : 004c3f60 - 004c4040


/* juce::ValueTree::SharedObject::SetPropertyAction::perform() */

undefined8 __thiscall
juce::ValueTree::SharedObject::SetPropertyAction::perform(SetPropertyAction *this)

{
  SetPropertyAction *pSVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  long local_50 [5];
  undefined4 local_28;
  
  pSVar1 = this + 0x10;
  lVar4 = *(long *)(this + 8);
  local_50[0] = lVar4;
  if (((byte)this[0x38] & 2) == 0) {
    plVar2 = *(long **)(this + 0x40);
    uVar3 = NamedValueSet::set((NamedValueSet *)(lVar4 + 0x18),(long *)pSVar1,(long *)(this + 0x18))
    ;
    if ((char)uVar3 == '\0') goto LAB_004c4033;
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
    local_50[3] = 0;
    local_50[4] = 0;
    local_50[1] = 0;
    local_50[2] = 0;
    local_28 = 0;
    do {
                    /* try { // try from 004c3fc0 to 004c3fd0 has its CatchHandler @ 004c4043 */
      callListeners<juce::ValueTree::SharedObject::sendPropertyChangeMessage(juce::Identifier_const&,juce::ValueTree::Listener*)::_lambda(juce::ValueTree::Listener&)_1_>
                (lVar4,plVar2,local_50,pSVar1);
      lVar4 = *(long *)(lVar4 + 0x48);
    } while (lVar4 != 0);
  }
  else {
    uVar3 = NamedValueSet::remove((NamedValueSet *)(lVar4 + 0x18),*(long *)pSVar1);
    if ((char)uVar3 == '\0') goto LAB_004c4033;
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
    local_50[3] = 0;
    local_50[4] = 0;
    local_50[1] = 0;
    local_50[2] = 0;
    local_28 = 0;
    do {
                    /* try { // try from 004c4010 to 004c401f has its CatchHandler @ 004c4041 */
      callListeners<juce::ValueTree::SharedObject::sendPropertyChangeMessage(juce::Identifier_const&,juce::ValueTree::Listener*)::_lambda(juce::ValueTree::Listener&)_1_>
                (lVar4,(long *)0x0,local_50,pSVar1);
      lVar4 = *(long *)(lVar4 + 0x48);
    } while (lVar4 != 0);
  }
  uVar3 = ~ValueTree((ValueTree *)local_50);
LAB_004c4033:
  return CONCAT71((int7)(uVar3 >> 8),1);
}


