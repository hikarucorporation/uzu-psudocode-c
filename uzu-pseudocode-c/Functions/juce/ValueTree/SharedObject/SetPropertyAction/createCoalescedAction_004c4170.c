// Function : createCoalescedAction
// Namespace: juce:ValueTree:SharedObject:SetPropertyAction
// Entry    : 004c4170
// Prototype: undefined8 * createCoalescedAction(SetPropertyAction * this, long param_1)
// Body     : 004c4170 - 004c425c


/* juce::ValueTree::SharedObject::SetPropertyAction::createCoalescedAction(juce::UndoableAction*) */

undefined8 * __thiscall
juce::ValueTree::SharedObject::SetPropertyAction::createCoalescedAction
          (SetPropertyAction *this,long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  int *piVar4;
  
  puVar3 = (undefined8 *)0x0;
  if ((param_1 != 0) && (((byte)this[0x38] & 3) == 0)) {
    puVar3 = (undefined8 *)0x0;
    lVar2 = __dynamic_cast(param_1,&UndoableAction::typeinfo,&typeinfo,0);
    if (lVar2 != 0) {
      lVar1 = *(long *)(lVar2 + 8);
      if (((lVar1 == *(long *)(this + 8)) && (*(long *)(lVar2 + 0x10) == *(long *)(this + 0x10))) &&
         ((*(byte *)(lVar2 + 0x38) & 3) == 0)) {
        puVar3 = operator_new(0x48);
        LOCK();
        *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
        UNLOCK();
        *puVar3 = &PTR__SetPropertyAction_00714080;
        puVar3[1] = lVar1;
        lVar1 = *(long *)(this + 0x10);
        puVar3[2] = lVar1;
        piVar4 = (int *)(lVar1 + -0x10);
        if (piVar4 != &emptyString) {
          LOCK();
          *piVar4 = *piVar4 + 1;
          UNLOCK();
        }
        lVar1 = *(long *)(lVar2 + 0x18);
        puVar3[3] = lVar1;
                    /* try { // try from 004c4229 to 004c4231 has its CatchHandler @ 004c4274 */
        (**(code **)(lVar1 + 0x60))(puVar3 + 4,lVar2 + 0x20);
        lVar2 = *(long *)(this + 0x28);
        puVar3[5] = lVar2;
                    /* try { // try from 004c4245 to 004c424a has its CatchHandler @ 004c425d */
        (**(code **)(lVar2 + 0x60))(puVar3 + 6,this + 0x30);
        *(byte *)(puVar3 + 7) = *(byte *)(puVar3 + 7) & 0xfc;
        puVar3[8] = 0;
      }
      else {
        puVar3 = (undefined8 *)0x0;
      }
    }
  }
  return puVar3;
}


