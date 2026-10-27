// Function : preparePlugin
// Namespace: juce:JuceVST3Component
// Entry    : 001acb30
// Prototype: undefined preparePlugin(undefined8 param_1, JuceVST3Component * this, int param_3, int param_4)
// Body     : 001acb30 - 001ace08


/* juce::JuceVST3Component::preparePlugin(double, int, juce::JuceVST3Component::CallPrepareToPlay)
    */

void __thiscall
juce::JuceVST3Component::preparePlugin
          (undefined8 param_1,JuceVST3Component *this,int param_3,int param_4)

{
  AudioProcessor *this_00;
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  uint uVar7;
  uint uVar8;
  long *plVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  
  this_00 = *(AudioProcessor **)(this + 0x68);
  AudioProcessor::setRateAndBufferSizeDetails(param_1,this_00,param_3);
  if (param_4 == 1) {
    (**(code **)(*(long *)this_00 + 0x38))(param_1,this_00,param_3);
  }
  MidiBuffer::ensureSize((MidiBuffer *)(this + 0x110),0x800);
  MidiBuffer::clear((MidiBuffer *)(this + 0x110));
  ClientBufferMapper::updateFromProcessor((ClientBufferMapper *)(this + 0x120),(long)this_00);
  lVar1 = *(long *)(this + 0x3b0);
  lVar2 = *(long *)(this + 0x3b8);
  uVar8 = 0;
  uVar7 = 0;
  if (lVar1 != lVar2) {
    uVar4 = (lVar2 - lVar1) - 0x50;
    uVar7 = 0;
    if (uVar4 < 0xf0) {
      lVar3 = lVar1;
    }
    else {
      uVar5 = uVar4 / 0x50 + 1;
      uVar6 = uVar5 & 0xfffffffffffffffc;
      lVar3 = uVar6 * 0x50 + lVar1;
      plVar9 = (long *)(lVar1 + 0x120);
      iVar10 = 0;
      iVar11 = 0;
      iVar12 = 0;
      iVar13 = 0;
      uVar4 = uVar6;
      do {
        iVar10 = iVar10 + (int)((ulong)(plVar9[-0x1e] - plVar9[-0x1f]) >> 2);
        iVar11 = iVar11 + (int)((ulong)(plVar9[-0x14] - plVar9[-0x15]) >> 2);
        iVar12 = iVar12 + (int)((ulong)(plVar9[-10] - plVar9[-0xb]) >> 2);
        iVar13 = iVar13 + (int)((ulong)(*plVar9 - plVar9[-1]) >> 2);
        plVar9 = plVar9 + 0x28;
        uVar4 = uVar4 - 4;
      } while (uVar4 != 0);
      uVar7 = iVar13 + iVar11 + iVar12 + iVar10;
      if (uVar5 == uVar6) goto LAB_001accc7;
    }
    do {
      uVar7 = uVar7 + (int)((ulong)(*(long *)(lVar3 + 0x30) - *(long *)(lVar3 + 0x28)) >> 2);
      lVar3 = lVar3 + 0x50;
    } while (lVar3 != lVar2);
  }
LAB_001accc7:
  lVar1 = *(long *)(this + 0x3c8);
  lVar2 = *(long *)(this + 0x3d0);
  if (lVar1 != lVar2) {
    uVar4 = (lVar2 - lVar1) - 0x50;
    uVar8 = 0;
    if (uVar4 < 0xf0) {
      lVar3 = lVar1;
    }
    else {
      uVar6 = uVar4 / 0x50 + 1;
      uVar5 = uVar6 & 0xfffffffffffffffc;
      lVar3 = uVar5 * 0x50 + lVar1;
      plVar9 = (long *)(lVar1 + 0x120);
      iVar10 = 0;
      iVar11 = 0;
      iVar12 = 0;
      iVar13 = 0;
      uVar4 = uVar5;
      do {
        iVar10 = iVar10 + (int)((ulong)(plVar9[-0x1e] - plVar9[-0x1f]) >> 2);
        iVar11 = iVar11 + (int)((ulong)(plVar9[-0x14] - plVar9[-0x15]) >> 2);
        iVar12 = iVar12 + (int)((ulong)(plVar9[-10] - plVar9[-0xb]) >> 2);
        iVar13 = iVar13 + (int)((ulong)(*plVar9 - plVar9[-1]) >> 2);
        plVar9 = plVar9 + 0x28;
        uVar4 = uVar4 - 4;
      } while (uVar4 != 0);
      uVar8 = iVar13 + iVar11 + iVar12 + iVar10;
      if (uVar6 == uVar5) goto LAB_001acdd7;
    }
    do {
      uVar8 = uVar8 + (int)((ulong)(*(long *)(lVar3 + 0x30) - *(long *)(lVar3 + 0x28)) >> 2);
      lVar3 = lVar3 + 0x50;
    } while (lVar3 != lVar2);
  }
LAB_001acdd7:
  if ((int)uVar7 < (int)uVar8) {
    uVar7 = uVar8;
  }
  ClientBufferMapperData<float>::prepare
            ((ClientBufferMapperData<float> *)(this + 0x120),uVar7,param_3);
  ClientBufferMapperData<double>::prepare
            ((ClientBufferMapperData<double> *)(this + 0x268),uVar7,param_3);
  return;
}


