// Function : FLStudioDIYSpecificationEnforcementLock
// Namespace: juce:JuceVST3Component:FLStudioDIYSpecificationEnforcementLock
// Entry    : 001ae000
// Prototype: undefined FLStudioDIYSpecificationEnforcementLock(FLStudioDIYSpecificationEnforcementLock * this, CriticalSection * param_1, undefined8 param_2, undefined8 param_3, uint * param_4, undefined8 param_5)
// Body     : 001ae000 - 001ae076


/* juce::JuceVST3Component::FLStudioDIYSpecificationEnforcementLock::FLStudioDIYSpecificationEnforcementLock(juce::CriticalSection&)
    */

void __thiscall
juce::JuceVST3Component::FLStudioDIYSpecificationEnforcementLock::
FLStudioDIYSpecificationEnforcementLock
          (FLStudioDIYSpecificationEnforcementLock *this,CriticalSection *param_1,undefined8 param_2
          ,undefined8 param_3,uint *param_4,undefined8 param_5)

{
  int iVar1;
  undefined8 extraout_RDX;
  CriticalSection *pCVar2;
  undefined1 *puVar3;
  
  this[8] = (FLStudioDIYSpecificationEnforcementLock)0x0;
  if (FLStudioDIYSpecificationEnforcementLock(juce::CriticalSection&)::lockRequired == '\0') {
    puVar3 = &FLStudioDIYSpecificationEnforcementLock(juce::CriticalSection&)::lockRequired;
    pCVar2 = param_1;
    iVar1 = __cxa_guard_acquire();
    if (iVar1 != 0) {
                    /* try { // try from 001ae05a to 001ae05e has its CatchHandler @ 001ae077 */
      iVar1 = PluginHostType::getHostType(puVar3,pCVar2,extraout_RDX,param_3,param_4,param_5);
      FLStudioDIYSpecificationEnforcementLock(juce::CriticalSection&)::lockRequired = iVar1 == 0x19;
      __cxa_guard_release(&FLStudioDIYSpecificationEnforcementLock(juce::CriticalSection&)::
                           lockRequired);
    }
  }
  if (FLStudioDIYSpecificationEnforcementLock(juce::CriticalSection&)::lockRequired != '\0') {
    if (this[8] != (FLStudioDIYSpecificationEnforcementLock)0x0) {
      this[8] = (FLStudioDIYSpecificationEnforcementLock)0x0;
      CriticalSection::exit(*(CriticalSection **)this);
    }
    *(CriticalSection **)this = param_1;
    CriticalSection::enter(param_1);
    this[8] = (FLStudioDIYSpecificationEnforcementLock)0x1;
  }
  return;
}


