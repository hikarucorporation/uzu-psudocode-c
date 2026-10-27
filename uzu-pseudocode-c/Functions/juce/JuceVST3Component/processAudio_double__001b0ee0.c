// Function : processAudio<double>
// Namespace: juce:JuceVST3Component
// Entry    : 001b0ee0
// Prototype: void processAudio<double>(JuceVST3Component * this, int * param_1)
// Body     : 001b0ee0 - 001b103c


/* void juce::JuceVST3Component::processAudio<double>(Steinberg::Vst::ProcessData&) */

void __thiscall juce::JuceVST3Component::processAudio<double>(JuceVST3Component *this,int *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  float fVar6;
  uint local_158;
  int local_154;
  long local_148;
  char local_38;
  JuceVST3Component *local_30;
  int *local_28;
  
  ClientBufferMapperData<double>::getMappedBuffer
            (&local_158,(long *)(this + 0x268),(long)param_1,(long *)(this + 0x3b0),
             (long *)(this + 0x3c8));
  lVar1 = *(long *)(this + 0x68);
  local_30 = this + 0x3c8;
  local_28 = param_1;
  CriticalSection::enter((CriticalSection *)(lVar1 + 0x48));
  (**(code **)(**(long **)(this + 0x68) + 0xc0))(*(long **)(this + 0x68),*param_1 == 2);
  if ((char)(*(long **)(this + 0x68))[8] == '\0') {
                    /* try { // try from 001b0f9c to 001b103a has its CatchHandler @ 001b103d */
    lVar4 = (**(code **)(**(long **)(this + 0x68) + 0xb8))();
    if (lVar4 == 0) {
      lVar4 = *(long *)(this + 0x78);
      lVar3 = *(long *)(lVar4 + 0x150);
      lVar2 = lVar4 + 0x148;
      do {
        plVar5 = (long *)(lVar3 + 0x18);
        if (*(uint *)(lVar4 + 0x60) <= *(uint *)(lVar3 + 0x20)) {
          plVar5 = (long *)(lVar3 + 0x10);
          lVar2 = lVar3;
        }
        lVar3 = *plVar5;
      } while (lVar3 != 0);
      fVar6 = (float)(**(code **)(**(long **)(lVar2 + 0x28) + 0x10))();
      if (DAT_005d9044 <= fVar6) {
        (**(code **)(**(long **)(this + 0x68) + 0x68))
                  (*(long **)(this + 0x68),&local_158,this + 0x110);
        goto LAB_001b1005;
      }
    }
    (**(code **)(**(long **)(this + 0x68) + 0x58))(*(long **)(this + 0x68),&local_158,this + 0x110);
  }
  else if (local_38 == '\0') {
    if (0 < (int)local_158) {
      lVar4 = 0;
      do {
        FloatVectorOperationsBase<double,int>::clear(*(void **)(local_148 + lVar4 * 8),local_154);
        lVar4 = lVar4 + 1;
      } while (lVar4 < (int)local_158);
    }
    local_38 = '\x01';
  }
LAB_001b1005:
  CriticalSection::exit((CriticalSection *)(lVar1 + 0x48));
  ClientRemappedBuffer<double>::~ClientRemappedBuffer((ClientRemappedBuffer<double> *)&local_158);
  return;
}


