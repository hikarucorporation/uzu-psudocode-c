// Function : clicked
// Namespace: AnimatedImageButton
// Entry    : 0016c260
// Prototype: undefined clicked(AnimatedImageButton * this)
// Body     : 0016c260 - 0016c2fb


/* AnimatedImageButton::clicked() */

void __thiscall AnimatedImageButton::clicked(AnimatedImageButton *this)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  AnimatedImageButton *pAVar4;
  var avStack_28 [16];
  
  juce::Button::clicked();
                    /* try { // try from 0016c277 to 0016c27e has its CatchHandler @ 0016c2fc */
  juce::Value::getValue(avStack_28,(undefined8 *)(this + 0x1c0));
  bVar3 = juce::var::operator_cast_to_bool(avStack_28);
  juce::var::~var(avStack_28);
  pAVar4 = this + 0x28c;
  if (bVar3) {
    pAVar4 = this + 0x284;
  }
  iVar1 = *(int *)pAVar4;
  *(int *)(this + 0x274) = iVar1;
  pAVar4 = this + 0x290;
  if (bVar3) {
    pAVar4 = this + 0x288;
  }
  iVar2 = *(int *)pAVar4;
  *(int *)(this + 0x278) = iVar2;
  *(uint *)(this + 0x27c) = (uint)(iVar1 < iVar2) * 2 + -1;
  juce::Timer::startTimerHz((Timer *)(this + 0x240),*(uint *)(this + 0x280));
  return;
}


