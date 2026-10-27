// Function : getCompatibleParamID
// Namespace: juce:JuceVST3EditController
// Entry    : 001b3e20
// Prototype: undefined8 getCompatibleParamID(JuceVST3EditController * this, ulong * param_1, uint param_2, undefined4 * param_3)
// Body     : 001b3e20 - 001b3f1a


/* juce::JuceVST3EditController::getCompatibleParamID(char const*, unsigned int, unsigned int&) */

undefined8 __thiscall
juce::JuceVST3EditController::getCompatibleParamID
          (JuceVST3EditController *this,ulong *param_1,uint param_2,undefined4 *param_3)

{
  undefined1 *puVar1;
  long *plVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  ulong local_78;
  ulong uStack_70;
  _Rb_tree<unsigned_int,std::pair<unsigned_int_const,juce::AudioProcessorParameter*>,std::_Select1st<std::pair<unsigned_int_const,juce::AudioProcessorParameter*>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,juce::AudioProcessorParameter*>>>
  local_60 [8];
  undefined1 local_58 [8];
  undefined1 *local_50;
  long alStack_48 [3];
  
  if (*(long *)(this + 0xe8) == 0) {
    uVar6 = 1;
  }
  else {
    local_78 = *param_1;
    uStack_70 = param_1[1];
    JuceAudioProcessor::getParameterMap(local_60,*(long *)(this + 0xe8),&local_78);
    uVar6 = 1;
    if (local_50 != (undefined1 *)0x0) {
      puVar1 = local_58;
      puVar4 = local_50;
      do {
        puVar5 = puVar4;
        puVar3 = puVar1;
        plVar2 = (long *)(puVar5 + 0x10);
        puVar1 = puVar5;
        if (*(uint *)(puVar5 + 0x20) < param_2) {
          plVar2 = (long *)(puVar5 + 0x18);
          puVar1 = puVar3;
        }
        puVar4 = (undefined1 *)*plVar2;
      } while ((undefined1 *)*plVar2 != (undefined1 *)0x0);
      if (puVar1 != local_58) {
        if (*(uint *)(puVar5 + 0x20) < param_2) {
          puVar5 = puVar3;
        }
        puVar4 = puVar1;
        if (param_2 < *(uint *)(puVar5 + 0x20)) {
          puVar4 = local_58;
        }
        if (puVar4 != local_58) {
          plVar2 = alStack_48 + 3;
          if (*(uint *)(puVar5 + 0x20) <= param_2) {
            plVar2 = (long *)(puVar1 + 0x28);
          }
          if (*plVar2 != 0) {
            *param_3 = *(undefined4 *)
                        (*(long *)(*(long *)(this + 0xe8) + 8) + (long)*(int *)(*plVar2 + 8) * 4);
            uVar6 = 0;
          }
        }
      }
    }
                    /* try { // try from 001b3ef7 to 001b3f00 has its CatchHandler @ 001b3f1b */
    std::
    _Rb_tree<unsigned_int,std::pair<unsigned_int_const,juce::AudioProcessorParameter*>,std::_Select1st<std::pair<unsigned_int_const,juce::AudioProcessorParameter*>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,juce::AudioProcessorParameter*>>>
    ::_M_erase(local_60,local_50);
  }
  return uVar6;
}


