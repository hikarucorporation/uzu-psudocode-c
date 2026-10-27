// Function : moveCaret
// Namespace: juce:TextEditor
// Entry    : 0023ea30
// Prototype: undefined moveCaret(TextEditor * this, uint param_1)
// Body     : 0023ea30 - 0023eb97


/* juce::TextEditor::moveCaret(int) */

void __thiscall juce::TextEditor::moveCaret(TextEditor *this,uint param_1)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  undefined4 uVar6;
  long local_30;
  
  uVar3 = (**(code **)(*(long *)this + 0x50))();
  uVar4 = 0;
  if (-1 < (int)param_1) {
    uVar4 = param_1;
  }
  if (uVar3 < uVar4) {
    uVar4 = uVar3;
  }
  uVar3 = (**(code **)(*(long *)this + 0x40))(this);
  if (uVar4 == uVar3) {
    return;
  }
  uVar3 = *(uint *)(this + 0x340);
  *(uint *)(this + 0x340) = uVar4;
  if (uVar3 != uVar4) {
    uVar3 = (**(code **)(**(long **)(this + 0x338) + 0x50))();
    uVar4 = *(uint *)(this + 0x340);
    uVar6 = 0;
    if ((int)uVar4 < 0) {
      uVar4 = 0;
    }
    if (uVar3 < uVar4) {
      uVar4 = uVar3;
    }
    if (uVar4 != 0) {
      ParagraphsModel::getText
                ((undefined8 *)&local_30,*(long *)(*(long *)(this + 0x338) + 0x330) + 0x60);
      uVar3 = juce::String::operator[]((String *)&local_30,uVar4 - 1);
      piVar5 = (int *)(local_30 + -0x10);
      if (piVar5 != &emptyString) {
        LOCK();
        iVar1 = *piVar5;
        *piVar5 = *piVar5 + -1;
        UNLOCK();
        if (iVar1 == 0) {
          operator_delete__(piVar5);
        }
      }
      if (uVar3 != 10) {
        uVar3 = (**(code **)(**(long **)(this + 0x338) + 0x50))();
        uVar6 = 1;
        if (uVar4 != uVar3) {
          uVar6 = *(undefined4 *)(this + 0x348);
        }
      }
    }
    *(undefined4 *)(this + 0x344) = uVar6;
  }
  if (Component::currentlyFocusedComponent == (Component *)(this + 8)) {
    lVar2 = *(long *)(this + 400);
    iVar1 = *(int *)(lVar2 + 0x100);
    *(undefined4 *)(lVar2 + 0x100) = 0x15e;
    if (iVar1 == 0) {
                    /* try { // try from 0023eb6f to 0023eb73 has its CatchHandler @ 0023eb98 */
      Timer::TimerThread::addTimer(*(TimerThread **)(lVar2 + 0x108),lVar2 + 0xf0);
    }
    else {
      Timer::TimerThread::resetTimerCounter(*(TimerThread **)(lVar2 + 0x108),lVar2 + 0xf0);
    }
  }
  scrollToMakeSureCursorIsVisible(this);
  updateCaretPosition(this);
  Component::getAccessibilityHandler((Component *)(this + 8));
  return;
}


