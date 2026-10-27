// Function : setFont
// Namespace: juce:Graphics
// Entry    : 002f61d0
// Prototype: undefined setFont(float param_1, Graphics * this)
// Body     : 002f61d0 - 002f6249


/* juce::Graphics::setFont(float) */

void __thiscall juce::Graphics::setFont(float param_1,Graphics *this)

{
  long *plVar1;
  long *local_18;
  float local_c;
  
  local_c = param_1;
  local_18 = (long *)(**(code **)(**(long **)(this + 8) + 0x100))();
  local_18 = (long *)*local_18;
  if (local_18 != (long *)0x0) {
    LOCK();
    *(int *)(local_18 + 1) = (int)local_18[1] + 1;
    UNLOCK();
  }
                    /* try { // try from 002f61fc to 002f6209 has its CatchHandler @ 002f624a */
  Font::setHeight(local_c,(Font *)&local_18);
  if (this[0x10] != (Graphics)0x0) {
    this[0x10] = (Graphics)0x0;
                    /* try { // try from 002f621b to 002f622d has its CatchHandler @ 002f624c */
    (**(code **)(**(long **)(this + 8) + 0x70))();
  }
  (**(code **)(**(long **)(this + 8) + 0xf8))(*(long **)(this + 8),&local_18);
  if (local_18 != (long *)0x0) {
    LOCK();
    plVar1 = local_18 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)(*local_18 + 8))();
    }
  }
  return;
}


