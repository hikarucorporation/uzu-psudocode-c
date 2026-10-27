// Function : getClassInfo
// Namespace: juce:JucePluginFactoryBase
// Entry    : 001a47a0
// Prototype: undefined8 getClassInfo(JucePluginFactoryBase * this, int param_1, undefined8 * param_2)
// Body     : 001a47a0 - 001a47f3


/* juce::JucePluginFactoryBase::getClassInfo(int, Steinberg::PClassInfo*) */

undefined8 __thiscall
juce::JucePluginFactoryBase::getClassInfo
          (JucePluginFactoryBase *this,int param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  
  if (param_2 == (undefined8 *)0x0) {
    return 2;
  }
  puVar8 = (undefined8 *)getClassEntry(this,param_1);
  uVar1 = puVar8[1];
  uVar2 = puVar8[2];
  uVar3 = puVar8[3];
  uVar4 = puVar8[4];
  uVar5 = puVar8[5];
  uVar6 = puVar8[6];
  uVar7 = puVar8[7];
  *param_2 = *puVar8;
  param_2[1] = uVar1;
  param_2[2] = uVar2;
  param_2[3] = uVar3;
  param_2[4] = uVar4;
  param_2[5] = uVar5;
  param_2[6] = uVar6;
  param_2[7] = uVar7;
  uVar1 = puVar8[9];
  param_2[8] = puVar8[8];
  param_2[9] = uVar1;
  uVar1 = puVar8[0xb];
  param_2[10] = puVar8[10];
  param_2[0xb] = uVar1;
  uVar1 = puVar8[0xd];
  param_2[0xc] = puVar8[0xc];
  param_2[0xd] = uVar1;
  *(undefined4 *)(param_2 + 0xe) = *(undefined4 *)(puVar8 + 0xe);
  return 0;
}


