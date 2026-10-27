// Function : mouseDrag
// Namespace: juce:Button
// Entry    : 0022cdc0
// Prototype: undefined mouseDrag(Button * this, undefined8 * param_1)
// Body     : 0022cdc0 - 0022ce80


/* juce::Button::mouseDrag(juce::MouseEvent const&) */

void __thiscall juce::Button::mouseDrag(Button *this,undefined8 *param_1)

{
  int iVar1;
  long lVar2;
  byte bVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  
  iVar4 = *(int *)(this + 0x1b8);
  if (*(int *)(param_1[10] + 0x14) - 1U < 2) {
    fVar5 = (float)*param_1;
    if (0.0 <= fVar5) {
      fVar6 = (float)((ulong)*param_1 >> 0x20);
      bVar3 = fVar6 < (float)*(int *)(this + 0x44) &&
              (fVar5 < (float)*(int *)(this + 0x40) && 0.0 <= fVar6);
    }
    else {
      bVar3 = 0;
    }
  }
  else {
    bVar3 = Component::isMouseOver((Component *)this,'\0');
  }
  updateState(this,bVar3,'\x01');
  if (((-1 < *(int *)(this + 0x1a0)) && (*(int *)(this + 0x1b8) != iVar4)) &&
     (*(int *)(this + 0x1b8) == 2)) {
    lVar2 = *(long *)(this + 0x188);
    iVar4 = 1;
    if (0 < *(int *)(this + 0x1a4)) {
      iVar4 = *(int *)(this + 0x1a4);
    }
    iVar1 = *(int *)(lVar2 + 0x10);
    *(int *)(lVar2 + 0x10) = iVar4;
    if (iVar1 != 0) {
      Timer::TimerThread::resetTimerCounter(*(TimerThread **)(lVar2 + 0x18),lVar2);
      return;
    }
                    /* try { // try from 0022ce75 to 0022ce79 has its CatchHandler @ 0022ce81 */
    Timer::TimerThread::addTimer(*(TimerThread **)(lVar2 + 0x18),lVar2);
  }
  return;
}


