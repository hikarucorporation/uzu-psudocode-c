// Function : getContextMenuForParameter
// Namespace: juce:JuceVST3EditController:EditorHostContext
// Entry    : 001b7820
// Prototype: undefined8 * getContextMenuForParameter(undefined8 * param_1, long param_2, long param_3)
// Body     : 001b7820 - 001b793f


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::JuceVST3EditController::EditorHostContext::getContextMenuForParameter(juce::AudioProcessorParameter
   const*) const */

undefined8 * __cdecl
juce::JuceVST3EditController::EditorHostContext::getContextMenuForParameter
          (undefined8 *param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  int iVar2;
  long *plVar3;
  undefined8 *puVar4;
  long *local_30;
  undefined4 local_24;
  
  puVar4 = *(undefined8 **)(param_2 + 0x18);
  if ((puVar4 != (undefined8 *)0x0) && (*(long *)(param_2 + 0x20) != 0)) {
    local_30 = (long *)0x0;
                    /* try { // try from 001b7850 to 001b785d has its CatchHandler @ 001b79a0 */
    iVar2 = (**(code **)*puVar4)(puVar4,0x71aec8,&local_30);
    if ((iVar2 == 0) && (local_30 != (long *)0x0)) {
      if (param_3 == 0) {
        local_24 = 0;
      }
      else {
        local_24 = *(undefined4 *)
                    (*(long *)(*(long *)(param_2 + 8) + 8) + (long)*(int *)(param_3 + 8) * 4);
      }
                    /* try { // try from 001b78a5 to 001b78ac has its CatchHandler @ 001b7983 */
      plVar3 = (long *)(**(code **)(*local_30 + 0x18))
                                 (local_30,*(undefined8 *)(param_2 + 0x20),&local_24);
      uVar1 = *(undefined8 *)(param_2 + 0x10);
                    /* try { // try from 001b78b4 to 001b78bd has its CatchHandler @ 001b7968 */
      puVar4 = operator_new(0x18);
      if (plVar3 == (long *)0x0) {
        *puVar4 = &PTR__EditorContextMenu_00706758;
        puVar4[1] = uVar1;
        puVar4[2] = 0;
        *param_1 = puVar4;
      }
      else {
                    /* try { // try from 001b78c9 to 001b78ce has its CatchHandler @ 001b7960 */
        (**(code **)(*plVar3 + 8))(plVar3);
        *puVar4 = &PTR__EditorContextMenu_00706758;
        puVar4[1] = uVar1;
        puVar4[2] = plVar3;
                    /* try { // try from 001b78e4 to 001b78e9 has its CatchHandler @ 001b7958 */
        (**(code **)(*plVar3 + 8))(plVar3);
                    /* try { // try from 001b78ed to 001b78f2 has its CatchHandler @ 001b7950 */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        *param_1 = puVar4;
                    /* try { // try from 001b78f9 to 001b78fe has its CatchHandler @ 001b7948 */
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
      if (local_30 == (long *)0x0) {
        return param_1;
      }
                    /* try { // try from 001b7938 to 001b793a has its CatchHandler @ 001b7940 */
      (**(code **)(*local_30 + 0x10))();
      return param_1;
    }
  }
  *param_1 = 0;
  return param_1;
}


