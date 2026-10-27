// Function : setProperty
// Namespace: juce:ValueTree
// Entry    : 004c3970
// Prototype: ValueTree * setProperty(ValueTree * this, long * param_1, long * param_2, UndoManager * param_3)
// Body     : 004c3970 - 004c3b9a


/* juce::ValueTree::setProperty(juce::Identifier const&, juce::var const&, juce::UndoManager*) */

ValueTree * __thiscall
juce::ValueTree::setProperty(ValueTree *this,long *param_1,long *param_2,UndoManager *param_3)

{
  char cVar1;
  long *plVar2;
  int *piVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 *puVar6;
  long lVar7;
  undefined1 *local_68;
  long local_60 [4];
  undefined4 local_40;
  long *local_38;
  
  puVar6 = *(undefined1 **)this;
  if (puVar6 != (undefined1 *)0x0) {
    if (param_3 == (UndoManager *)0x0) {
      uVar4 = NamedValueSet::set((NamedValueSet *)(puVar6 + 0x18),param_1,param_2);
      if ((char)uVar4 != '\0') {
        LOCK();
        *(int *)(puVar6 + 8) = *(int *)(puVar6 + 8) + 1;
        UNLOCK();
        local_60[2] = 0;
        local_60[3] = 0;
        local_60[0] = 0;
        local_60[1] = 0;
        local_40 = 0;
        local_68 = puVar6;
        do {
                    /* try { // try from 004c3ac0 to 004c3acf has its CatchHandler @ 004c3ca2 */
          SharedObject::
          callListeners<juce::ValueTree::SharedObject::sendPropertyChangeMessage(juce::Identifier_const&,juce::ValueTree::Listener*)::_lambda(juce::ValueTree::Listener&)_1_>
                    ((long)puVar6,(long *)0x0,&local_68,param_1);
          puVar6 = *(undefined1 **)(puVar6 + 0x48);
        } while (puVar6 != (undefined1 *)0x0);
        ~ValueTree((ValueTree *)&local_68);
      }
    }
    else {
      if ((long)*(int *)(puVar6 + 0x24) != 0) {
        lVar7 = *(long *)(puVar6 + 0x18) + 0x10;
        lVar5 = (long)*(int *)(puVar6 + 0x24) * 0x18;
        do {
          if (*(long *)(lVar7 + -0x10) == *param_1) {
            local_38 = param_2 + 1;
                    /* try { // try from 004c3af3 to 004c3afd has its CatchHandler @ 004c3c03 */
            cVar1 = (**(code **)(*(long *)(lVar7 + -8) + 0x68))(lVar7,local_38,*param_2);
            if (cVar1 != '\0') {
              return this;
            }
            plVar2 = operator_new(0x48);
            LOCK();
            *(int *)(puVar6 + 8) = *(int *)(puVar6 + 8) + 1;
            UNLOCK();
            *plVar2 = (long)&PTR__SetPropertyAction_00714080;
            plVar2[1] = (long)puVar6;
            lVar5 = *param_1;
            plVar2[2] = lVar5;
            piVar3 = (int *)(lVar5 + -0x10);
            if (piVar3 != &emptyString) {
              LOCK();
              *piVar3 = *piVar3 + 1;
              UNLOCK();
            }
            lVar5 = *param_2;
            plVar2[3] = lVar5;
                    /* try { // try from 004c3b51 to 004c3b5b has its CatchHandler @ 004c3bb2 */
            (**(code **)(lVar5 + 0x60))(plVar2 + 4,local_38);
            lVar5 = *(long *)(lVar7 + -8);
            plVar2[5] = lVar5;
                    /* try { // try from 004c3b6c to 004c3b71 has its CatchHandler @ 004c3b9b */
            (**(code **)(lVar5 + 0x60))(plVar2 + 6,lVar7);
            *(byte *)(plVar2 + 7) = *(byte *)(plVar2 + 7) & 0xfc;
            plVar2[8] = 0;
            UndoManager::perform(param_3,plVar2);
            return this;
          }
          lVar7 = lVar7 + 0x18;
          lVar5 = lVar5 + -0x18;
        } while (lVar5 != 0);
      }
      plVar2 = operator_new(0x48);
      LOCK();
      *(int *)(puVar6 + 8) = *(int *)(puVar6 + 8) + 1;
      UNLOCK();
      local_68 = &var::Instance::attributesVoid;
      *plVar2 = (long)&PTR__SetPropertyAction_00714080;
      plVar2[1] = (long)puVar6;
      lVar5 = *param_1;
      plVar2[2] = lVar5;
      piVar3 = (int *)(lVar5 + -0x10);
      if (piVar3 != &emptyString) {
        LOCK();
        *piVar3 = *piVar3 + 1;
        UNLOCK();
      }
      lVar5 = *param_2;
      plVar2[3] = lVar5;
                    /* try { // try from 004c3a31 to 004c3a39 has its CatchHandler @ 004c3c32 */
      (**(code **)(lVar5 + 0x60))(plVar2 + 4,param_2 + 1);
      plVar2[5] = (long)local_68;
                    /* try { // try from 004c3a4f to 004c3a54 has its CatchHandler @ 004c3c1a */
      (**(code **)(local_68 + 0x60))(plVar2 + 6,local_60);
      *(byte *)(plVar2 + 7) = *(byte *)(plVar2 + 7) & 0xfc | 1;
      plVar2[8] = 0;
                    /* try { // try from 004c3a6c to 004c3a76 has its CatchHandler @ 004c3c13 */
      UndoManager::perform(param_3,plVar2);
                    /* try { // try from 004c3a7b to 004c3a80 has its CatchHandler @ 004c3c0b */
      (**(code **)(local_68 + 0x58))(local_60);
    }
  }
  return this;
}


