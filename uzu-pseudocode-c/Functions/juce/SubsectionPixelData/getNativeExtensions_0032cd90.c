// Function : getNativeExtensions
// Namespace: juce:SubsectionPixelData
// Entry    : 0032cd90
// Prototype: undefined8 * getNativeExtensions(undefined8 * param_1, long * param_2)
// Body     : 0032cd90 - 0032cdd9


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::SubsectionPixelData::getNativeExtensions() */

undefined8 * __cdecl
juce::SubsectionPixelData::getNativeExtensions(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  
  LOCK();
  *(int *)(param_2 + 1) = (int)param_2[1] + 1;
  UNLOCK();
  LOCK();
  *(int *)(param_2 + 1) = (int)param_2[1] + 1;
  UNLOCK();
                    /* try { // try from 0032cda4 to 0032cdad has its CatchHandler @ 0032cdda */
  puVar2 = operator_new(0x10);
  *puVar2 = &PTR__Concrete_00711f30;
  puVar2[1] = param_2;
  *param_1 = puVar2;
  LOCK();
  plVar1 = param_2 + 1;
  *(int *)plVar1 = (int)*plVar1 + -1;
  UNLOCK();
  if ((int)*plVar1 == 0) {
    (**(code **)(*param_2 + 8))(param_2);
  }
  return param_1;
}


