// Function : audioProcessorParameterChanged
// Namespace: juce:JuceVST3EditController
// Entry    : 001b4620
// Prototype: undefined audioProcessorParameterChanged(float param_1, JuceVST3EditController * this, undefined8 param_3_00, int param_4)
// Body     : 001b4620 - 001b470b


/* juce::JuceVST3EditController::audioProcessorParameterChanged(juce::AudioProcessor*, int, float)
    */

void __thiscall
juce::JuceVST3EditController::audioProcessorParameterChanged
          (float param_1,JuceVST3EditController *this,undefined8 param_3_00,int param_4)

{
  uint *puVar1;
  undefined4 uVar2;
  long lVar3;
  MessageManager *this_00;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  
  lVar3 = __tls_get_addr(&PTR_007153d8);
  if ((*(char *)(lVar3 + 8) != '\x01') && (this[0x62b0] == (JuceVST3EditController)0x0)) {
    uVar6 = (ulong)param_4;
    uVar2 = *(undefined4 *)(*(long *)(*(long *)(this + 0xe8) + 8) + uVar6 * 4);
    this_00 = (MessageManager *)MessageManager::getInstance();
    uVar4 = MessageManager::isThisTheMessageThread(this_00);
    if ((char)uVar4 == '\0') {
      lVar3 = *(long *)(this + 0xe8);
      *(float *)(*(long *)(lVar3 + 0x30) + uVar6 * 4) = param_1;
      LOCK();
      puVar1 = (uint *)(*(long *)(lVar3 + 0x48) + (uVar6 >> 5) * 4);
      *puVar1 = *puVar1 | 1 << ((byte)param_4 & 0x1f);
      UNLOCK();
    }
    else {
      plVar5 = (long *)(**(code **)(*(long *)this + 0x168))(this,uVar2);
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x98))((double)param_1,plVar5);
      }
      plVar5 = *(long **)(this + 0x40);
      if (plVar5 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x001b46d3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar5 + 0x20))((double)param_1,plVar5,uVar2);
        return;
      }
    }
  }
  return;
}


