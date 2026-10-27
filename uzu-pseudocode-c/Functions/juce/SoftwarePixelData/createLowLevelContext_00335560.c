// Function : createLowLevelContext
// Namespace: juce:SoftwarePixelData
// Entry    : 00335560
// Prototype: undefined8 * createLowLevelContext(undefined8 * param_1, ImagePixelData * param_2)
// Body     : 00335560 - 003355e8


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::SoftwarePixelData::createLowLevelContext() */

undefined8 * __cdecl
juce::SoftwarePixelData::createLowLevelContext(undefined8 *param_1,ImagePixelData *param_2)

{
  ImagePixelData *pIVar1;
  undefined8 *puVar2;
  SoftwareRendererSavedState *this;
  ImagePixelData *local_28;
  
  ImagePixelData::sendDataChangeMessage(param_2);
  LOCK();
  *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + 1;
  UNLOCK();
  local_28 = param_2;
                    /* try { // try from 00335580 to 00335589 has its CatchHandler @ 00335603 */
  puVar2 = operator_new(0x28);
                    /* try { // try from 0033558d to 00335596 has its CatchHandler @ 003355f6 */
  this = operator_new(0x78);
                    /* try { // try from 0033559e to 003355a8 has its CatchHandler @ 003355e9 */
  RenderingHelpers::SoftwareRendererSavedState::SoftwareRendererSavedState
            (this,(long *)&local_28,*(undefined8 *)(param_2 + 0x10));
  puVar2[1] = this;
  puVar2[2] = 0;
  puVar2[3] = 0;
  puVar2[4] = 0;
  *puVar2 = &PTR__LowLevelGraphicsSoftwareRenderer_00711660;
  *param_1 = puVar2;
  LOCK();
  pIVar1 = param_2 + 8;
  *(int *)pIVar1 = *(int *)pIVar1 + -1;
  UNLOCK();
  if (*(int *)pIVar1 == 0) {
    (**(code **)(*(long *)param_2 + 8))(param_2);
  }
  return param_1;
}


