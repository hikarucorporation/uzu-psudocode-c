// Function : setLookAndFeel
// Namespace: juce:Component
// Entry    : 002d72b0
// Prototype: undefined setLookAndFeel(Component * this, long param_1)
// Body     : 002d72b0 - 002d737a


/* juce::Component::setLookAndFeel(juce::LookAndFeel*) */

void __thiscall juce::Component::setLookAndFeel(Component *this,long param_1)

{
  long *plVar1;
  long *plVar2;
  undefined8 *puVar3;
  
  if (*(long *)(this + 0x68) == 0) {
    if (param_1 == 0) {
      return;
    }
  }
  else if (*(long *)(*(long *)(this + 0x68) + 0x10) == param_1) {
    return;
  }
  if (param_1 == 0) {
LAB_002d7350:
    plVar2 = *(long **)(this + 0x68);
    *(undefined8 *)(this + 0x68) = 0;
  }
  else {
    puVar3 = *(undefined8 **)(param_1 + 0x120);
    if (puVar3 == (undefined8 *)0x0) {
      puVar3 = operator_new(0x18);
      *(undefined4 *)(puVar3 + 1) = 0;
      *puVar3 = &PTR__ReferenceCountedObject_00710ff8;
      puVar3[2] = param_1;
      LOCK();
      *(int *)(puVar3 + 1) = *(int *)(puVar3 + 1) + 1;
      UNLOCK();
      plVar2 = *(long **)(param_1 + 0x120);
      *(undefined8 **)(param_1 + 0x120) = puVar3;
      if (plVar2 != (long *)0x0) {
        LOCK();
        plVar1 = plVar2 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)(*plVar2 + 8))();
        }
        puVar3 = *(undefined8 **)(param_1 + 0x120);
        if (puVar3 == (undefined8 *)0x0) goto LAB_002d7350;
      }
    }
    LOCK();
    *(int *)(puVar3 + 1) = *(int *)(puVar3 + 1) + 1;
    UNLOCK();
    plVar2 = *(long **)(this + 0x68);
    *(undefined8 **)(this + 0x68) = puVar3;
  }
  if (plVar2 != (long *)0x0) {
    LOCK();
    plVar1 = plVar2 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)(*plVar2 + 8))();
    }
  }
  sendLookAndFeelChange(this);
  return;
}


