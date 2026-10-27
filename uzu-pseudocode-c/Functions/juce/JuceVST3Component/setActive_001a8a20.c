// Function : setActive
// Namespace: juce:JuceVST3Component
// Entry    : 001a8a20
// Prototype: undefined8 setActive(JuceVST3Component * this, int param_1, undefined8 param_2, undefined8 param_3, uint * param_4, undefined8 param_5)
// Body     : 001a8a20 - 001a8ab6


/* juce::JuceVST3Component::setActive(unsigned char) */

undefined8 __thiscall
juce::JuceVST3Component::setActive
          (JuceVST3Component *this,int param_1,undefined8 param_2,undefined8 param_3,uint *param_4,
          undefined8 param_5)

{
  int iVar1;
  double dVar2;
  CriticalSection *local_28;
  char local_20;
  
  FLStudioDIYSpecificationEnforcementLock::FLStudioDIYSpecificationEnforcementLock
            ((FLStudioDIYSpecificationEnforcementLock *)&local_28,(CriticalSection *)(this + 1000),
             param_2,param_3,param_4,param_5);
  this[0x3e0] = (JuceVST3Component)0x0;
  if (param_1 == 0) {
                    /* try { // try from 001a8a8d to 001a8a8f has its CatchHandler @ 001a8ab7 */
    (**(code **)(**(long **)(this + 0x68) + 0x40))();
  }
  else {
    dVar2 = *(double *)(this + 0x108);
    if (dVar2 <= 0.0) {
      dVar2 = *(double *)(*(long *)(this + 0x68) + 0x30);
    }
    iVar1 = *(int *)(this + 0x100);
    if (iVar1 < 1) {
      iVar1 = *(int *)(*(long *)(this + 0x68) + 0x38);
    }
                    /* try { // try from 001a8a77 to 001a8a83 has its CatchHandler @ 001a8ab9 */
    preparePlugin(dVar2,this,iVar1,1);
  }
  this[0x3e0] = (JuceVST3Component)(param_1 != 0);
  if (local_20 != '\0') {
    local_20 = 0;
    CriticalSection::exit(local_28);
  }
  return 0;
}


