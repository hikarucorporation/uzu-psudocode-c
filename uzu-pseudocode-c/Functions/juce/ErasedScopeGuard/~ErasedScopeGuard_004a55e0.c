// Function : ~ErasedScopeGuard
// Namespace: juce:ErasedScopeGuard
// Entry    : 004a55e0
// Prototype: undefined ~ErasedScopeGuard(ErasedScopeGuard * this)
// Body     : 004a55e0 - 004a564b


/* juce::ErasedScopeGuard::~ErasedScopeGuard() */

void __thiscall juce::ErasedScopeGuard::~ErasedScopeGuard(ErasedScopeGuard *this)

{
  code *pcVar1;
  undefined8 local_38;
  undefined8 uStack_30;
  code *local_28;
  code *local_20;
  
  local_20 = *(code **)(this + 0x18);
  local_28 = *(code **)(this + 0x10);
  if (local_28 != (code *)0x0) {
    local_38 = *(undefined8 *)this;
    uStack_30 = *(undefined8 *)(this + 8);
    *(undefined8 *)(this + 0x10) = 0;
    *(undefined8 *)(this + 0x18) = 0;
                    /* try { // try from 004a5613 to 004a5617 has its CatchHandler @ 004a565c */
    (*local_20)(&local_38);
    if (local_28 != (code *)0x0) {
                    /* try { // try from 004a5622 to 004a562e has its CatchHandler @ 004a5654 */
      (*local_28)(&local_38,&local_38,3);
    }
    pcVar1 = *(code **)(this + 0x10);
    if (pcVar1 != (code *)0x0) {
                    /* try { // try from 004a5637 to 004a5643 has its CatchHandler @ 004a564c */
      (*pcVar1)(this,this,3);
    }
  }
  return;
}


