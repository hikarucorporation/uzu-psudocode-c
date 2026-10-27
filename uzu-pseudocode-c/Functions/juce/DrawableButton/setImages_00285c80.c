// Function : setImages
// Namespace: juce:DrawableButton
// Entry    : 00285c80
// Prototype: undefined setImages(long * param_1, long * param_2, long * param_3)
// Body     : 00285c80 - 00285deb


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::DrawableButton::setImages(juce::Drawable const*, juce::Drawable const*, juce::Drawable
   const*, juce::Drawable const*, juce::Drawable const*, juce::Drawable const*, juce::Drawable
   const*, juce::Drawable const*) */

void __cdecl juce::DrawableButton::setImages(long *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long *in_RAX;
  long *plVar2;
  long *local_18;
  
  if (param_2 == (long *)0x0) {
    plVar2 = (long *)0x0;
  }
  else {
    local_18 = in_RAX;
    (**(code **)(*param_2 + 0x198))(&local_18);
    plVar2 = local_18;
  }
  local_18 = (long *)0x0;
  plVar1 = (long *)param_1[0x40];
  param_1[0x40] = (long)plVar2;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
    if (local_18 != (long *)0x0) {
      (**(code **)(*local_18 + 8))();
    }
  }
  if (param_3 == (long *)0x0) {
    plVar2 = (long *)0x0;
  }
  else {
    (**(code **)(*param_3 + 0x198))(&local_18,param_3);
    plVar2 = local_18;
  }
  local_18 = (long *)0x0;
  plVar1 = (long *)param_1[0x41];
  param_1[0x41] = (long)plVar2;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
    if (local_18 != (long *)0x0) {
      (**(code **)(*local_18 + 8))();
    }
  }
  plVar2 = (long *)param_1[0x42];
  param_1[0x42] = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  plVar2 = (long *)param_1[0x43];
  param_1[0x43] = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  plVar2 = (long *)param_1[0x44];
  param_1[0x44] = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  plVar2 = (long *)param_1[0x45];
  param_1[0x45] = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  plVar2 = (long *)param_1[0x46];
  param_1[0x46] = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  plVar2 = (long *)param_1[0x47];
  param_1[0x47] = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  param_1[0x48] = 0;
  (**(code **)(*param_1 + 0x1c0))(param_1);
  return;
}


